// Copyright Epic Games, Inc. All Rights Reserved.

#include "MochoPreHistoricGameMode.h"
#include "MochoPreHistoricCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMochoPreHistoricGameMode::AMochoPreHistoricGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
