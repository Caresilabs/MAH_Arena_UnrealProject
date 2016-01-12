// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealProject.h"
#include "WorldCamera.h"


void AWorldCamera::Tick( float delta ) {
	
	float MaxDistance = 0;
	FVector Average( 0, 0, 0 );
	TArray<AActor*> Actors;

	for ( TActorIterator<AActor> ActorItr( GetWorld() ); ActorItr; ++ActorItr ) {
		if ( ActorItr->ActorHasTag( FName( "POI" ) ) ) {
			Actors.Push( *ActorItr );
		}
	}

	if (Actors.Num() != 0)
		Average = Actors[0]->GetActorLocation();

	for ( AActor* Act : Actors ) {
		///Average = Average + Act->GetActorLocation();

		for ( AActor* Act2 : Actors ) {
			if ( MaxDistance < ( Act->GetActorLocation() - Act2->GetActorLocation() ).Size() ) {
				MaxDistance = ( Act->GetActorLocation() - Act2->GetActorLocation() ).Size();
				Average = (Act->GetActorLocation() + Act2->GetActorLocation()) / 2.0f;
			}
		}
	}

	//Average = Average / (float)Actors.Num();
	MaxDistance = FMath::Max(700.0f, MaxDistance);
	
	auto NewLocation = Average + (GetActorForwardVector() * -MaxDistance* 1.16f);

	SetActorLocation( FMath::Lerp( GetActorLocation(), NewLocation, delta * 10.f) );

}




