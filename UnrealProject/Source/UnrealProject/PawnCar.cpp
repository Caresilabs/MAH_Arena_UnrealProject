// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealProject.h"
#include "PawnCar.h"


// Sets default values
APawnCar::APawnCar()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	speed = 100;
	turnSpeed = 100;

	//Use c++ to create the basic car, use BP to fill the components!
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Root"));
	RootComponent = BoxComponent;

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

// Called every frame
void APawnCar::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
	FRotator transform = BoxComponent->GetRelativeTransform().GetRotation().Rotator();

	transform += FRotator(0, turn, 0) * direction.Y * turnSpeed * DeltaTime;
	BoxComponent->SetRelativeRotation(transform);

	FRotationMatrix matrix = FRotationMatrix(FRotator(transform.Pitch, transform.Yaw, transform.Roll));

	FVector velocity = matrix.TransformVector(direction * speed *DeltaTime);

	Movement->AddInputVector(velocity);

	TArray<AActor*> arr = TArray<AActor*>();
	BoxComponent->GetOverlappingActors(arr);
	UE_LOG(LogTemp, Warning, TEXT("MyCharacter's Health is %d"), arr.Num());
	if (BoxComponent->GetOverlapInfos().Num() > 0)
		IsOnGround = true;
	else
		IsOnGround = false;

}

void APawnCar::SetDirection(FVector direction)
{
	if (IsOnGround)
		this->direction = direction;
}
void APawnCar::SetTurn(float turn)
{
	if (IsOnGround)
		this->turn = turn;
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

