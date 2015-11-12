// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealProject.h"
#include "WorldCamera.h"


void AWorldCamera::Tick(float delta) {
	float maxDistance = 1;
	FVector average(0,0,0);
	
	for (AActor* act : Actors)
	{
		average = average + act->GetActorLocation();
		
		for (AActor* act2 : Actors)
		{
			if (maxDistance < (act->GetActorLocation() - act2->GetActorLocation()).Size()) {
				maxDistance = (act->GetActorLocation() - act2->GetActorLocation()).Size();
			}
		}

		//if (maxDistance < (act->GetActorLocation() - GetActorLocation()).Size()) {
		//	maxDistance = (act->GetActorLocation() - GetActorLocation()).Size();
		//}
	}
	average =  average / (float)Actors.Num();

	//average.Z = 0;

	FRotator Rot = FRotationMatrix::MakeFromX(average - GetActorLocation()).Rotator(); //Actors[0]->GetActorLocation()
	//SetActorRelativeRotation(Rot);
	
	SetActorLocation(average + (-GetActorForwardVector() * maxDistance*1.7f));

}




