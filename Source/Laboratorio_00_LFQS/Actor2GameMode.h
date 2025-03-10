// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

// Declaraci�n anticipada de ARampa para evitar problemas de referencia circular
class ARampa;

#include "Actor2GameMode.generated.h"

UCLASS()
class LABORATORIO_00_LFQS_API AActor2GameMode : public AGameModeBase
{
    GENERATED_BODY()
public:
    virtual void BeginPlay() override; // Declaraci�n del m�todo BeginPlay

private:
    // Variable para almacenar la referencia a la rampa
    UPROPERTY()
    ARampa* SpawnedRampa;
};