// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealProject.h"
#include "PawnCar.h"


// Sets default values
APawnCar::APawnCar()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Speed = 100;
	TurnSpeed = 200;
	IsOnGround = true;

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

void APawnCar::AddImpulse(FVector Impulse)
{
	BoxComponent->AddImpulse(Impulse);
}

void APawnCar::AddImpulseCOM(FVector Force)
{
	BoxComponent->AddTorque(Force);
}

// Called every frame
void APawnCar::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
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
	{
		Movement->Deceleration = 500;			
	}

	if (BoxComponent->GetRelativeTransform().GetLocation().Z < -300)
	{
		for (TActorIterator<AActor> ActorItr(GetWorld()); ActorItr; ++ActorItr) {
			if (ActorItr->ActorHasTag(FName("Respawn"))) {
				TeleportTo(ActorItr->GetActorLocation() + FVector(0, 0, 400), FRotator(0, 0, 0));
				break;
			}
		}
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

