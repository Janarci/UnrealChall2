// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PowerUp.generated.h"

UCLASS()
class UNREALCHALLENGE_API APowerUp : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APowerUp();

	//--------------------MY VARIABLES AND FUNCTIONS----------------------
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite) int PowerUpType;
	UPROPERTY(VisibleAnywhere) class UStaticMeshComponent* MyMesh;
};
