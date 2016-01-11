// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealProject.h"
#include "WorldCamera.h"


void AWorldCamera::Tick( float delta ) {
	
	float MaxDistance = 700;
	FVector Average( 0, 0, 0 );
	TArray<AActor*> Actors;

	for ( TActorIterator<AActor> ActorItr( GetWorld() ); ActorItr; ++ActorItr ) {
		if ( ActorItr->ActorHasTag( FName( "POI" ) ) ) {
			Actors.Push( *ActorItr );
		}
	}

	for ( AActor* Act : Actors ) {
		Average = Average + Act->GetActorLocation();

		for ( AActor* Act2 : Actors ) {
			if ( MaxDistance < ( Act->GetActorLocation() - Act2->GetActorLocation() ).Size() ) {
				MaxDistance = ( Act->GetActorLocation() - Act2->GetActorLocation() ).Size();
			}
		}
	}

	Average = Average / (float)Actors.Num();
	

	//const FRotator Rot = FRotationMatrix::MakeFromX( Average - GetActorLocation() ).Rotator();
	
	auto NewLocation = Average + (GetActorForwardVector() * -MaxDistance* 1.15f);

	SetActorLocation( FMath::Lerp( GetActorLocation(), NewLocation, delta * 9.f) );

}




