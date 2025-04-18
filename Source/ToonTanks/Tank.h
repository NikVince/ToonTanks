// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BP_BasePawn.h"
#include "Tank.generated.h"


/**
 * 
 */
UCLASS()
class TOONTANKS_API ATank : public ABP_BasePawn
{
	GENERATED_BODY()

public:

	ATank();

	// Called to bind functionality to input - MOVED OVER FROM BP_BasePawn.h (since functionality is not needed for Turret)
	virtual void SetupPlayerInputComponent(class UInputComponent *PlayerInputComponent) override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;



protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


private:

	UPROPERTY(VisibleAnywhere, Category = "Components")
	class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	class USpringArmComponent* SpringArm;
	
	UPROPERTY(EditAnywhere, Category = "Movement")
	float Speed = 200;
	UPROPERTY(EditAnywhere, Category = "Movement")
	float TurnRate = 80;


	void Move(float Value);
	void Turn(float Value);

	APlayerController* PlayerControllerRef;

};
