// Copyright Epic Games, Inc. All Rights Reserved.

#include "RACINGGAMEWheelFront.h"
#include "UObject/ConstructorHelpers.h"

URACINGGAMEWheelFront::URACINGGAMEWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}