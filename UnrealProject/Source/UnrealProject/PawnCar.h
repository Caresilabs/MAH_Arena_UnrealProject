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

	UFUNCTION(BlueprintCallable, Category = YourCategory)
	void AddImpulse(FVector Impulse);

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxComponent;

	UPROPERTY(EditAnywhere)
	UFloatingPawnMovement* Movement;

	void SetDirection(FVector Direction);

	void SetTurn(float Turn);

	void SetRotationDirection(FRotator RotationDirection);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsOnGround;

	virtual void BeginPlay() override;
	
	virtual void Tick( float DeltaSeconds ) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	virtual UPawnMovementComponent* GetMovementComponent() const override;

private:
	void AddImpulseCOM(FVector Force);

	FVector Direction;

	FRotator RotationDirection;

	float Health;

	float Speed;

	float TurnSpeed;

	float Turn;

	
};
