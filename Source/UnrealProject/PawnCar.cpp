// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealProject.h"
#include "PawnCar.h"


// Sets default values
APawnCar::APawnCar()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AutoPossessPlayer = EAutoReceiveInput::Player0;
	speed = 100;
	direction = FVector(0.0f, 0.0f, 0.0f);

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Root"));
	CollisionBox->SetCollisionObjectType(ECollisionChannel::ECC_Pawn);
	CollisionBox->SetCollisionProfileName(TEXT("Pawn"));
	RootComponent = CollisionBox;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->AttachTo(RootComponent);

	Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Movement"));
}

// Called when the game starts or when spawned
void APawnCar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APawnCar::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
	Movement->AddInputVector(direction * speed);

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

void APawnCar::AddDirection(FVector newdirection)
{
	direction = newdirection;
}

