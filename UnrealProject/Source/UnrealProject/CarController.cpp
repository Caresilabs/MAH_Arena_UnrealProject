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
}

void ACarController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAxis("MoveForward", this, &ACarController::MoveForward);
	InputComponent->BindAxis("Turn", this, &ACarController::Turn);
}

void ACarController::MoveForward(float axisValue)
{
	direction.Y = FMath::Clamp(axisValue, -1.0f, 1.0f);
	//if (Car != nullptr)
	Cast<APawnCar>(GetPawn())->SetDirection(direction);

}
void ACarController::Turn(float axisValue)
{
	turn = FMath::Clamp(axisValue, -1.0f, 1.0f);
	//if (Car != nullptr)
	Cast<APawnCar>(GetPawn())->SetTurn(turn);


}




