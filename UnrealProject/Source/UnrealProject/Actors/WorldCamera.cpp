// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealProject.h"
#include "WorldCamera.h"


void AWorldCamera::Tick(float delta) {
	FVector average;

	for (auto& act : Actors)
	{
		average += act->GetActorLocation();
	}
	average /= Actors.Num();

	//average.Z = 0;

	FRotator Rot = FRotationMatrix::MakeFromX(average).Rotator();
	SetActorRotation(Rot);

}




