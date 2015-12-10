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
	void AddImpulse(FVector impuls);

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxComponent;

	UPROPERTY(EditAnywhere)
	UFloatingPawnMovement* Movement;

	void SetDirection(FVector direction);
	void SetTurn(float turn);
	void SetRotationDirection(FRotator rotationDirection);

	FVector direction;
	FRotator rotationDirection;

	float speed;
	float turnSpeed;
	float turn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsOnGround;

	int32 count;

	virtual void BeginPlay() override;
	
	virtual void Tick( float DeltaSeconds ) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	virtual UPawnMovementComponent* GetMovementComponent() const override;

private:
	void AddImpulseCOM(FVector force);

	
	
};
