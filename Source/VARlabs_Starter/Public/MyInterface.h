// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MyInterface.generated.h"

UINTERFACE(Blueprintable)
class VARLABS_STARTER_API UMyInterface : public UInterface
{
	GENERATED_BODY()
	
};

class VARLABS_STARTER_API IMyInterface
{
	GENERATED_BODY()

public:
	virtual int32 InterfaceMethod1() { return 0; }

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	int32 InterfaceMethod2();

	virtual int32 InterfaceMethod2_Implementation() { return 0; }
};
