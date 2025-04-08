// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BP_BasePawn.h"
#include "Tower.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATower : public ABP_BasePawn
{
	GENERATED_BODY()

public: 

	virtual void Tick(float DeltaTime) override;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
private:

	class ATank* Tank;

	UPROPERTY(EditDefaultsOnly, Category= "Combat")
	float FireRange = 300.f;
	
};
