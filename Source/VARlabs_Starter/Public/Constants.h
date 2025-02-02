// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Constants.generated.h"

UENUM(BlueprintType)
enum class EMyEnum : uint8
{
	A UMETA(DisplayName = "A"),
	B UMETA(DisplayName = "B"),
	C UMETA(DisplayName = "C"),
};

USTRUCT(BlueprintType)
struct FMyStruct
{
	GENERATED_BODY()

public:
	static const FMyStruct Default;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "My String"))
	FName nString;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "My Int"))
	int32 iInt;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "My Float"))
	float fFloat;
};

UCLASS()
class VARLABS_STARTER_API UMyConstants : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	static constexpr int32 iConstantA = 32;

	static constexpr float fConstantB = 9.81f;

	static const FMyStruct ConstantC;

	UFUNCTION(BlueprintPure)
	static int32 GetConstantA() { return iConstantA; }

	UFUNCTION(BlueprintPure)
	static float GetConstantB() { return fConstantB; }

	UFUNCTION(BlueprintPure)
	static const FMyStruct& GetConstantC() { return ConstantC; }
};
