// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealProject.h"
#include "PawnCar.h"


// Sets default values
APawnCar::APawnCar()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Health = 0;
	Speed = 100;
	TurnSpeed = 200;
	IsOnGround = true;
	InvincibleMax = 5.0f;
	InvincibleCurrent = 0.0f;

	isBoosting = false;
	BoostTime = 3;

	//Use c++ to create the basic car, use BP to fill the components!
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Root"));
	BoxComponent->SetSimulatePhysics(true);
	RootComponent = BoxComponent;

	Tags.Add(FName("POI"));

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->AttachTo(RootComponent);

	Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Movement"));
	Movement->SetUpdatedComponent(RootComponent);
}

// Called when the game starts or when spawned
void APawnCar::BeginPlay()
{
	Super::BeginPlay();
}


void APawnCar::Boost()
{
	if (isBoosting == false)
	{
		isBoosting = true;
	}


}

void APawnCar::ApplyImpulse(FVector Impulse, bool bUtilizeHealth)
{
	if (bUtilizeHealth) {
		Impulse *= (Health + 1.0f);
		Impulse.Z *= 2.0f;
	}

	BoxComponent->AddImpulse(Impulse);
}

void APawnCar::AddImpulseCOM(FVector Force)
{
	BoxComponent->AddTorque(Force);
}

// Called every frame
void APawnCar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FRotator Transform = BoxComponent->GetRelativeTransform().GetRotation().Rotator();

	Transform += FRotator(0, Turn, 0) * Direction.Y * TurnSpeed * DeltaTime;

	//Test
	if (!IsOnGround)
		Transform += RotationDirection * 300 * DeltaTime;

	BoxComponent->SetRelativeRotation(Transform);

	FRotationMatrix Matrix = FRotationMatrix(FRotator(Transform.Pitch, Transform.Yaw, Transform.Roll));

	FVector Velocity = Matrix.TransformVector(Direction * Speed *DeltaTime);

	Movement->AddInputVector(Velocity);
	if (IsOnGround)
		Movement->Deceleration = 2000;
	else
		Movement->Deceleration = 500;

	if (InvincibleCurrent < InvincibleMax)
		InvincibleCurrent += DeltaTime;
	else
		bInvincible = false;

	if (BoxComponent->GetRelativeTransform().GetLocation().Z < -300)
	{
		for (TActorIterator<AActor> ActorItr(GetWorld()); ActorItr; ++ActorItr) {
			if (ActorItr->ActorHasTag(FName("Respawn"))) {
				TeleportTo(ActorItr->GetActorLocation() + FVector(0, 0, 200), FRotator(0, 0, 0));
				BoxComponent->AddTorque(FVector(0, 0, 0));
				InvincibleCurrent = 0;
				bInvincible = true;
				CallInvincible();
				break;
			}
		}
	}


	if (isBoosting == false)
	{
		BoostTime = 3;
	}

	if (isBoosting == true)
	{
		Movement->MaxSpeed = BoostSpeed;

		BoostTime -= DeltaTime;

		if (BoostTime <= 0.f)
		{
			Movement->MaxSpeed = 1500;
			isBoosting = false;

		}
	}
}

void APawnCar::NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) {
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	auto OtherCar = Cast<APawnCar>(Other);
	if (OtherCar) {
		//FVector Impulse = FVector(- FVector::DotProduct(GetMovementComponent()->Velocity, HitNormal) * GetMovementComponent()->Velocity * 1000.0f);
		
		FVector RelativeVelocity = GetMovementComponent()->Velocity - OtherCar->GetMovementComponent()->Velocity;
		
		float VelAlongNormal = FVector::DotProduct(RelativeVelocity, HitNormal);

		float J = -(1 + 1) * VelAlongNormal;

		FVector Impulse = J * HitNormal;

		SetActorLocation(FVector(0,0,0));
		
		ApplyImpulse(Impulse * 100000.0f, false);

		//OtherCar->GetMovementComponent();
	}
}

void APawnCar::SetRotationDirection(FRotator RotationDirection)
{
	BoxComponent->AddTorque(BoxComponent->GetComponentRotation().RotateVector(FVector(RotationDirection.Roll * 18000000, -RotationDirection.Pitch * 7000000, RotationDirection.Yaw)));
}

void APawnCar::SetDirection(FVector Direction)
{
	if (IsOnGround)
	{
		this->Direction = Direction;

	}
	else
		this->Direction = FVector(0, 0, 0);
}

void APawnCar::SetTurn(float Turn)
{
	if (IsOnGround)
		this->Turn = Turn;
	else
		this->Turn = 0;
}

// Called to bind functionality to input
void APawnCar::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);
}

UPawnMovementComponent* APawnCar::GetMovementComponent() const
{
	return Movement;
}

