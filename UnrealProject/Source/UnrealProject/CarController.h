// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

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

	void Tick(float deltaTime) override;
	void SetupInputComponent() override;

	void MoveX(float axisValue);
	void MoveY(float axisValue);
};
