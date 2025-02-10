// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemData.generated.h"

USTRUCT(BlueprintType)
struct VARLABS_STARTER_API FItemData : public FTableRowBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Item Name"))
	FText ItemName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Item Description"))
	FText ItemDesc;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Item Icon"))
	TSoftObjectPtr<UTexture> ItemIcon;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Item Model"))
	TSoftObjectPtr<UStaticMesh> ItemModel;

};
