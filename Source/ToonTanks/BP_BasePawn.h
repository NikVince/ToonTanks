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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TEST")
	int32 MockupEditAnywhere = 0; // This is a mockup variable to demonstrate the use of EditAnywhere


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY()
	class UCapsuleComponent* CapsuleComp;
	UPROPERTY()
	UStaticMeshComponent* BaseMesh;
	UPROPERTY()
	UStaticMeshComponent* TurretMesh;
	UPROPERTY()
	USceneComponent* ProjectileSpawnPoint;

		
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
