// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealProject.h"
#include "PawnCar.h"


// Sets default values
APawnCar::APawnCar()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	lives = 0;
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
	BoxComponent->SetAngularDamping(2.5f);
}

void APawnCar::SetPlayerIndex(int32 index) {
	this->PlayerIndex = index;

	const FString MeshName = FString("StaticMesh'/Game/Models/example_") + FString::FromInt(index) + FString(".example_") + FString::FromInt(index) + FString("'");
	UStaticMesh* GroundMesh = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, *MeshName));

	StaticMesh->SetStaticMesh(GroundMesh);
}


void APawnCar::Boost()
{
	if (isBoosting == false)
	{
		isBoosting = true;
	}
}

void APawnCar::Slow()
{
	if (isSlowing == false)
	{
		isSlowing = true;
	}
}

void APawnCar::SetLives(int lives){
	this->lives = lives;
}

void APawnCar::ApplyImpulse(FVector Impulse, bool bUtilizeHealth)
{
	if (bUtilizeHealth) {
		Impulse = Impulse * (1 + ((Health + 1.0f) / 25.0f));
		UE_LOG(LogTemp, Log, TEXT("Actor: %s .. impuse scale %f ... health %f"), *GetActorLabel(), (1 + ((Health + 1.0f) / 25.f)), Health);
		//Impulse.Z *= 2.0f;
	}

	BoxComponent->AddImpulse(Impulse);
}

void APawnCar::Thrust(float value){

	if (ThrustDelay <= 0)
	{
		ThrustDelay = 5;
		FRotationMatrix Matrix = FRotationMatrix(BoxComponent->GetRelativeTransform().GetRotation().Rotator());
		FVector impulse = Matrix.TransformVector(FVector(0, 1000000, 0));
		BoxComponent->AddImpulse(impulse);
	}

}

void APawnCar::Damage(float amount) {
	Health += amount; 
	if (amount > 0)
		HealthChanged = true;
}

float APawnCar::GetHealth() {
	return Health;
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
		TArray<AActor*> respawns;
		for (TActorIterator<AActor> ActorItr(GetWorld()); ActorItr; ++ActorItr) {
			if (ActorItr->ActorHasTag(FName("Respawn"))) {
				respawns.Add(*ActorItr);
			}
		}
		int32 random = FMath::Rand();
		TeleportTo(respawns[random % respawns.Num()]->GetActorLocation() + FVector(0, 0, 200), FRotator(0, 0, 0));
		BoxComponent->SetAllPhysicsAngularVelocity(FVector(0, 0, 0));
		BoxComponent->SetAllPhysicsLinearVelocity(FVector(0, 0, 0));
		Movement->Velocity = FVector(0, 0, 0);
		InvincibleCurrent = 0;
		Health = 0.0f;
		bInvincible = true;
		CallInvincible();
		lives--;
		if (lives < 0)
			Destroy();

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

	if (isSlowing == false)
	{
		SlowTime = 3;
	}

	if (isSlowing == true)
	{
		Movement->MaxSpeed = SlowSpeed;

		SlowTime -= DeltaTime;

		if (SlowTime <= 0.f)
		{
			Movement->MaxSpeed = 1500;
			isSlowing = false;

		}
	}

	if (ThrustDelay > 0)
	{
		ThrustDelay -= DeltaTime;
		if (ThrustDelay < 0)
			ThrustDelay = 0;
	}
}

void APawnCar::NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) {
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	auto OtherCar = Cast<APawnCar>(Other);
	if (OtherCar) {
		
		// Don't do anything when invincible
		if (OtherCar->bInvincible)
			return;

		//FVector Impulse = FVector(- FVector::DotProduct(GetMovementComponent()->Velocity, HitNormal) * GetMovementComponent()->Velocity * 1000.0f);
		//FVector RelativeVelocity = GetMovementComponent()->Velocity - OtherCar->GetMovementComponent()->Velocity;
		//float VelAlongNormal = FVector::DotProduct(RelativeVelocity, HitNormal);
		//float J = -(1 + 1) * VelAlongNormal;
		
		float DamageToTake = FMath::Abs( FVector::DotProduct(HitNormal, GetMovementComponent()->Velocity) / 100.f );
		OtherCar->Damage(DamageToTake);

		FVector Impulse = FVector::DotProduct(HitNormal, GetMovementComponent()->Velocity) * GetMovementComponent()->Velocity;	//J * HitNormal;

		OtherCar->ApplyImpulse(Impulse * -0.05f, true);
	}
}

void APawnCar::SetRotationDirection(FRotator RotationDirection)
{
	BoxComponent->AddTorque(BoxComponent->GetComponentRotation().RotateVector(FVector(RotationDirection.Roll * 27000000, -RotationDirection.Pitch * 17000000, RotationDirection.Yaw)));
}

void APawnCar::SetDirection(FVector Direction)
{
	if (IsOnGround)
		this->Direction = Direction;
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

