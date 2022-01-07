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

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) FirstPersonCharacter;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Scale(FVector size);

private:
	UPROPERTY(EditAnywhere) FVector scaleFactor;
};
