// Copyright Epic Games, Inc. All Rights Reserved.

#include "MetallBallGameMode.h"
#include "MetallBallBall.h"

AMetallBallGameMode::AMetallBallGameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = AMetallBallBall::StaticClass();
}
