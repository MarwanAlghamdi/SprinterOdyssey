// Copyright Epic Games, Inc. All Rights Reserved.

#include "SprinterOdysseyGameMode.h"
#include "SprinterOdysseyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASprinterOdysseyGameMode::ASprinterOdysseyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
