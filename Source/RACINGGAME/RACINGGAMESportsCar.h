// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RACINGGAMEPawn.h"
#include "RACINGGAMESportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class RACINGGAME_API ARACINGGAMESportsCar : public ARACINGGAMEPawn
{
	GENERATED_BODY()
	
public:

	ARACINGGAMESportsCar();
};
