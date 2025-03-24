// Copyright Epic Games, Inc. All Rights Reserved.

#include "RACINGGAMEGameMode.h"
#include "RACINGGAMEPlayerController.h"

ARACINGGAMEGameMode::ARACINGGAMEGameMode()
{
	PlayerControllerClass = ARACINGGAMEPlayerController::StaticClass();
}
