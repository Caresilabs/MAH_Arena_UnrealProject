// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "PawnCar.generated.h"

UCLASS()
class UNREALPROJECT_API APawnCar : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APawnCar();

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditAnywhere)
	UFloatingPawnMovement* Movement;

	UPROPERTY(EditAnywhere)
	UBoxComponent* CollisionBox;


	float speed;
	FVector direction;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	void AddDirection(FVector direction);

	virtual UPawnMovementComponent* GetMovementComponent() const override;

	
	
};
