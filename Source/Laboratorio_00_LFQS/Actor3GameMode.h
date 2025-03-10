// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Actor3GameMode.generated.h"

UCLASS()
class LABORATORIO_00_LFQS_API AActor3GameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    // Constructor
    AActor3GameMode();

protected:
    // Llamado al inicio del juego
    virtual void BeginPlay() override;

    // Clase de Rampa2 para instanciar
    UPROPERTY(EditAnywhere, Category = "Spawning")
    TSubclassOf<class ARampa2> Rampa2Class;

    // Clase de Rampa para instanciar
    UPROPERTY(EditAnywhere, Category = "Spawning")
    TSubclassOf<class ARampa> RampaClass;

    // Coordenadas de spawn de ambos actores
    UPROPERTY(EditAnywhere, Category = "Spawning")
    FVector Rampa2SpawnLocation;

    UPROPERTY(EditAnywhere, Category = "Spawning")
    FVector RampaSpawnLocation;
};
