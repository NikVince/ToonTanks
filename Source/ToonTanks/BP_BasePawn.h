// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BP_BasePawn.generated.h"

UCLASS()
class TOONTANKS_API ABP_BasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABP_BasePawn();

private:

	// Components that make up the BP_BasePawns
	UPROPERTY(VisibleAnywhere, Category = "Components", meta = (AllowPrivateAccess = true))
	class UCapsuleComponent* CapsuleComp;
	UPROPERTY(VisibleAnywhere, Category = "Components", meta = (AllowPrivateAccess = true))
	UStaticMeshComponent* BaseMesh;
	UPROPERTY(VisibleAnywhere, Category = "Components", meta = (AllowPrivateAccess = true))
	UStaticMeshComponent* TurretMesh;
	UPROPERTY(VisibleAnywhere, Category = "Components", meta = (AllowPrivateAccess = true))
	USceneComponent* ProjectileSpawnPoint;

		
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
