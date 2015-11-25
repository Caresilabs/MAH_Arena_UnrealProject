// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Camera/CameraActor.h"
#include "WorldCamera.generated.h"

/**
 *
 */
UCLASS()
class UNREALPROJECT_API AWorldCamera : public ACameraActor
{
	GENERATED_BODY()

	virtual void Tick(float delta) override;


};
