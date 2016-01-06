// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "PawnCar.generated.h"

UCLASS()
class UNREALPROJECT_API APawnCar : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APawnCar();

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxComponent;

	UPROPERTY(EditAnywhere)
	UFloatingPawnMovement* Movement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsOnGround;

	UFUNCTION(BlueprintCallable, Category = Force)
	void ApplyImpulse(FVector Impulse, bool bUtilizeHealth = true);

	UFUNCTION(BlueprintCallable, Category = Health)
	void Damage(float amount);

	UFUNCTION(BlueprintCallable, Category = Health)
	float GetHealth();

	UFUNCTION(BlueprintCallable, Category = Lives)
	void SetLives(int32 lives);

	UFUNCTION(BlueprintImplementableEvent, Category = "Invincibility")
	void CallInvincible();

	void SetDirection(FVector Direction);

	void SetTurn(float Turn);

	void SetRotationDirection(FRotator RotationDirection);

	
	UFUNCTION()
	virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BoostSpeed;

	UFUNCTION(BlueprintCallable, Category = Speed)
	void Boost();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SlowSpeed;

	UFUNCTION(BlueprintCallable, Category = Speed)
	void Slow();


	virtual void BeginPlay() override;
	
	virtual void Tick( float DeltaSeconds ) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	virtual UPawnMovementComponent* GetMovementComponent() const override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInvincible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 lives;

private:
	void AddImpulseCOM(FVector Force);

	FVector Direction;

	FRotator RotationDirection;

	float Health;

	float Speed;

	float TurnSpeed;

	float Turn;

	float InvincibleCurrent;

	float InvincibleMax;

	bool isBoosting;

	float BoostTime;

	bool isSlowing;

	float SlowTime;
};
