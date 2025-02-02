// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MyGameInstanceSubsystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateScore, int32, NewScore);

UCLASS()
class VARLABS_STARTER_API UMyGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintAssignable)
	FOnUpdateScore OnUpdateScore;

public:
	UPROPERTY(BlueprintReadOnly, meta = (DisplayName = "Score"))
	int32 iScore;

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	virtual void Deinitialize() override;

	UFUNCTION(BlueprintCallable)
	void SetScore(int32 Score) { iScore = Score; OnUpdateScore.Broadcast(Score); }
};
