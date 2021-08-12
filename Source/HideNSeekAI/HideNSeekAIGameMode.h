// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "HideNSeekAIGameMode.generated.h"

UCLASS(minimalapi)
class AHideNSeekAIGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AHideNSeekAIGameMode();
	
	void WinGameFunction();
};



