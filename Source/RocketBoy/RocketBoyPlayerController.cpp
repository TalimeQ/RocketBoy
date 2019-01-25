// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "RocketBoyPlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "RocketBoyCharacter.h"
#include "Engine/World.h"

ARocketBoyPlayerController::ARocketBoyPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void ARocketBoyPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);



}


void ARocketBoyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAction("Action", IE_Pressed, this, &ARocketBoyPlayerController::Interact);
}

void ARocketBoyPlayerController::Interact()
{
	
	ARocketBoyCharacter* rocketBoy = Cast<ARocketBoyCharacter>(this->GetPawn());
	if (rocketBoy)
	{
		rocketBoy->Interact();
	}
}