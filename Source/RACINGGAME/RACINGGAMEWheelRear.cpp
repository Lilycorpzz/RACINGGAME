// Copyright Epic Games, Inc. All Rights Reserved.

#include "RACINGGAMEWheelRear.h"
#include "UObject/ConstructorHelpers.h"

URACINGGAMEWheelRear::URACINGGAMEWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}