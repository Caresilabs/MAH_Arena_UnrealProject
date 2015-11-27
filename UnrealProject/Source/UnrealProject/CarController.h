// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PawnCar.h"
#include "GameFramework/PlayerController.h"
#include "CarController.generated.h"

/**
 * 
 */
UCLASS()
class UNREALPROJECT_API ACarController : public APlayerController
{
	GENERATED_BODY()

	ACarController();
	FVector direction;
	float turn;

	void Tick(float deltaTime) override;
	void SetupInputComponent() override;

	void MoveForward(float axisValue);
	void Turn(float axisValue);


public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	APawnCar* Car;
};
