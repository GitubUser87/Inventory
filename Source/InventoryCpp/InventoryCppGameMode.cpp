// Copyright Epic Games, Inc. All Rights Reserved.

#include "InventoryCppGameMode.h"
#include "InventoryCppCharacter.h"
#include "UObject/ConstructorHelpers.h"

AInventoryCppGameMode::AInventoryCppGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
