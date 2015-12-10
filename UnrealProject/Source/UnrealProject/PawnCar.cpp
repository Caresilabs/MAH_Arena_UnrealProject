// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealProject.h"
#include "PawnCar.h"


// Sets default values
APawnCar::APawnCar()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	speed = 100;
	turnSpeed = 200;
	count = 0;
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

void APawnCar::AddImpulse(FVector impuls)
{
	BoxComponent->AddImpulse(impuls);
}

void APawnCar::AddImpulseCOM(FVector force)
{
	BoxComponent->AddTorque(force);
}


// Called every frame
void APawnCar::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
	FRotator transform = BoxComponent->GetRelativeTransform().GetRotation().Rotator();

	transform += FRotator(0, turn, 0) * direction.Y * turnSpeed * DeltaTime;

	//Test
	if (!IsOnGround)
		transform += rotationDirection * 300 * DeltaTime;

	BoxComponent->SetRelativeRotation(transform);

	FRotationMatrix matrix = FRotationMatrix(FRotator(transform.Pitch, transform.Yaw, transform.Roll));

	FVector velocity = matrix.TransformVector(direction * speed *DeltaTime);

	Movement->AddInputVector(velocity);
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

void APawnCar::SetRotationDirection(FRotator rotationDirection)
{
	BoxComponent->AddTorque(BoxComponent->GetComponentRotation().RotateVector(FVector(rotationDirection.Roll * 18000000, - rotationDirection.Pitch * 7000000, rotationDirection.Yaw)));
}

void APawnCar::SetDirection(FVector direction)
{
	if (IsOnGround)
	{
		this->direction = direction;

	}
	else
		this->direction = FVector(0, 0, 0);
}
void APawnCar::SetTurn(float turn)
{
	if (IsOnGround)
		this->turn = turn;
	else
		this->turn = 0;
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

