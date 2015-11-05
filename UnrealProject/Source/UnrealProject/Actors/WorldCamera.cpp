// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealProject.h"
#include "WorldCamera.h"


void AWorldCamera::Tick(float delta) {
	FVector average(0,0,0);
	

	for (AActor* act : Actors)
	{
		average =  average + act->GetActorLocation();
	}
	average =  average / (float)Actors.Num();

	//average.Z = 0;

	FRotator Rot = FRotationMatrix::MakeFromX(average - GetActorLocation()).Rotator(); //Actors[0]->GetActorLocation()
	SetActorRelativeRotation(Rot);
	
	SetActorLocation(average + -GetActorForwardVector() * 500);

}




