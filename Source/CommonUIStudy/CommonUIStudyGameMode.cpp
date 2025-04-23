// Copyright Epic Games, Inc. All Rights Reserved.

#include "CommonUIStudyGameMode.h"
#include "CommonUIStudyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACommonUIStudyGameMode::ACommonUIStudyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
