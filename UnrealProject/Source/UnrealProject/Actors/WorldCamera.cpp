// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealProject.h"
#include "WorldCamera.h"


void AWorldCamera::Tick(float delta) {
	FVector average;

	for (AActor* act : Actors)
	{
		average += act->GetActorLocation();
	}
	//average /= Actors.Num();

	//average.Z = 0;

	FRotator Rot = FRotationMatrix::MakeFromX(Actors[0]->GetActorLocation() - GetActorLocation()).Rotator();
	SetActorRelativeRotation(Rot);
	


}




