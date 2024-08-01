// Copyright Epic Games, Inc. All Rights Reserved.

#include "AgoraTest53GameMode.h"
#include "AgoraTest53Character.h"
#include "UObject/ConstructorHelpers.h"

AAgoraTest53GameMode::AAgoraTest53GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
