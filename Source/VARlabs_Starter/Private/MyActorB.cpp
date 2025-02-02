// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorB.h"
#include "MyActorA.h"

// Sets default values
AMyActorB::AMyActorB()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActorB::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActorB::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

