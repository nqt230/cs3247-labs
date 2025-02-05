// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Constants.h"
#include "MyActorB.h"
#include "MyInterface.h"
#include "MyActorA.generated.h"

UCLASS()
class VARLABS_STARTER_API AMyActorA : public AActor, public IMyInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActorA();

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Actor B"))
	TObjectPtr<AMyActorB> m_pMyActorB;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void MyMethod(FMyStruct MyStruct);

	void MyMethod_Implementation(FMyStruct MyStruct);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void MyMethod2();

	virtual int32 InterfaceMethod1() override { return 99; }

	virtual int32 InterfaceMethod2_Implementation() override { return 198; }

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
