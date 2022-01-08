// Fill out your copyright notice in the Description page of Project Settings.


#include "Destructable.h"
#include <time.h> 

// Sets default values
ADestructable::ADestructable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void ADestructable::OnComponentFracture(const FVector& HitPoint, const FVector& HitDirection)
{
	if (actorToSpawnIndex >= ActorToSpawn.Num()) {
		const FVector Location = GetActorLocation();
		const FRotator Rotation = GetActorRotation();
		GetWorld()->SpawnActor<AActor>(ActorToSpawn[actorToSpawnIndex], Location, Rotation);
	}
}

// Called when the game starts or when spawned
void ADestructable::BeginPlay()
{
	Super::BeginPlay();
	srand(time(NULL));

	actorToSpawnIndex = rand() % ActorToSpawn.Num();
}

