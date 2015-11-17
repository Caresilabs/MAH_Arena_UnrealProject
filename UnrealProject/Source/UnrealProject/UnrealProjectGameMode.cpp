// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealProject.h"
#include "CarController.h"
#include "UnrealProjectGameMode.h"

AUnrealProjectGameMode::AUnrealProjectGameMode()
{
	this->PlayerControllerClass = ACarController::StaticClass();
}




