// Copyright Epic Games, Inc. All Rights Reserved.

#include "CandyGameGameMode.h"
#include "CandyGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACandyGameGameMode::ACandyGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
