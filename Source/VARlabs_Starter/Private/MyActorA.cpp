// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorA.h"

// Sets default values
AMyActorA::AMyActorA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActorA::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMyActorA::MyMethod_Implementation(FMyStruct MyStruct)
{
	FString msg = TEXT("BlueprintNativeEvent Default Implementation");
	UE_LOG(LogTemp, Display, TEXT("%s"), *msg);
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, msg);
}

// Called every frame
void AMyActorA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

