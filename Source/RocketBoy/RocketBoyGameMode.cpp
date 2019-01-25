// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "RocketBoyGameMode.h"
#include "RocketBoyPlayerController.h"
#include "RocketBoyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARocketBoyGameMode::ARocketBoyGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ARocketBoyPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}