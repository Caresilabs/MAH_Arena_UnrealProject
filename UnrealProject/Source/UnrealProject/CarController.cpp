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
	InputComponent->BindAxis("RotateY", this, &ACarController::RotateY);
	InputComponent->BindAxis("RotateX", this, &ACarController::RotateX);
}

void ACarController::MoveForward(float axisValue)
{
	APawnCar* car = Cast<APawnCar>(GetPawn());
	if (car == nullptr)
		return;
	direction.Y = FMath::Clamp(axisValue, -1.0f, 1.0f);
	car->SetDirection(direction);

}
void ACarController::Turn(float axisValue)
{
	APawnCar* car = Cast<APawnCar>(GetPawn());
	if (car == nullptr)
		return;
	turn = FMath::Clamp(axisValue, -1.0f, 1.0f);
	car->SetTurn(turn);


}

void ACarController::RotateX(float axisValue)
{
	APawnCar* car = Cast<APawnCar>(GetPawn());
	if (car == nullptr)
		return;
	rotation.Pitch = FMath::Clamp(axisValue, -1.0f, 1.0f);
	//car->SetRotationDirection(rotation);
}

void ACarController::RotateY(float axisValue)
{
	APawnCar* car = Cast<APawnCar>(GetPawn());
	if (car == nullptr)
		return;
	rotation.Roll = FMath::Clamp(axisValue, -1.0f, 1.0f);
	car->SetRotationDirection(rotation);
}




