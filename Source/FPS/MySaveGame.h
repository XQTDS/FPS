// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "MySaveGame.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FEPlayerInfo
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(EditAnywhere)
		int32 Score;

	UPROPERTY(EditAnywhere)
		FString Name;
};

UCLASS()
class FPS_API UMySaveGame : public USaveGame
{
	GENERATED_BODY()
private:

};
