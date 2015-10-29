// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealProject.h"
#include "PawnCar.h"
#include "CarController.h"

ACarController::ACarController()
{
}

void ACarController::Tick(float deltaTime)
{
	Super::Tick(deltaTime);	
	Cast<APawnCar>(GetPawn())->AddDirection(direction);
}

void ACarController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAxis("MoveX", this, &ACarController::MoveX);
	InputComponent->BindAxis("MoveY", this, &ACarController::MoveY);
}

void ACarController::MoveX(float axisValue)
{
	FMath::Clamp(axisValue, -1.0f, 1.0f);
	direction.X = axisValue;

}
void ACarController::MoveY(float axisValue)
{
	FMath::Clamp(axisValue, -1.0f, 1.0f);
	direction.Y = axisValue;
}




