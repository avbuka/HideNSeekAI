// Copyright Epic Games, Inc. All Rights Reserved.

#include "HideNSeekAIGameMode.h"
#include "HideNSeekAICharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

AHideNSeekAIGameMode::AHideNSeekAIGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AHideNSeekAIGameMode::WinGameFunction()
{
	FString LevelName = GetWorld()->GetMapName();
	LevelName.RemoveFromStart(GetWorld()->StreamingLevelsPrefix);
	
	UGameplayStatics::OpenLevel(GetWorld(),FName(LevelName));
}
