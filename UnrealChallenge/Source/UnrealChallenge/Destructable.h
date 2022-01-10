// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "DestructibleComponent.h"

#include "Destructable.generated.h"

UCLASS()
class UNREALCHALLENGE_API ADestructable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADestructable();

	UFUNCTION() 
		void OnComponentFracture(const FVector& HitPoint, const FVector& HitDirection);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Custom", meta = (AllowPrivateAccess = true))
		USceneComponent* MyRootComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Custom", meta = (AllowPrivateAccess = true))
		class UDestructibleComponent* DestructibleComponent;

	UPROPERTY(EditAnywhere, Category = "Custom", meta = (AllowPrivateAccess = true))
		uint32 bFractured : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom", meta = (AllowPrivateAccess = true))
		float DebrisLifeTime = 1.5f;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	TArray<TSubclassOf<AActor>> ActorToSpawn;

	UPROPERTY(VisibleAnywhere) int actorToSpawnIndex;

private:
	UFUNCTION()
		void MyDestroy();


};
