// Copyright Epic Games, Inc. All Rights Reserved.
#include "Laboratorio_00_LFQSGameMode.h"
#include "Laboratorio_00_LFQSCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALaboratorio_00_LFQSGameMode::ALaboratorio_00_LFQSGameMode()
{
    // set default pawn class to our Blueprinted character
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
    if (PlayerPawnBPClass.Class != NULL)
    {
        DefaultPawnClass = PlayerPawnBPClass.Class;
    }
}
