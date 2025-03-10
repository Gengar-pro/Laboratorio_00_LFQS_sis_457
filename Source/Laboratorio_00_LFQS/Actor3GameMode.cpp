// Fill out your copyright notice in the Description page of Project Settings.
#include "Actor3GameMode.h"
#include "Rampa2.h"
#include "Rampa.h"
#include "Engine/World.h"
#include "UObject/ConstructorHelpers.h"

// Constructor
AActor3GameMode::AActor3GameMode()
{
    // Inicializar ubicaciones de spawn
    Rampa2SpawnLocation = FVector(1430.0f, 2050.0f, 300.0f);  // Coordenadas para Rampa2
    RampaSpawnLocation = FVector(1930.0f, 2050.0f, 300.0f); // Coordenadas para Rampa

    // (Opcional) Cargar clases desde Blueprints, si las tienes configuradas
    static ConstructorHelpers::FClassFinder<ARampa2> Rampa2BP(TEXT("/Game/Blueprints/Rampa2BP"));
    if (Rampa2BP.Succeeded())
    {
        Rampa2Class = Rampa2BP.Class;
    }

    static ConstructorHelpers::FClassFinder<ARampa> RampaBP(TEXT("/Game/Blueprints/RampaBP"));
    if (RampaBP.Succeeded())
    {
        RampaClass = RampaBP.Class;
    }
}

// Llamado al inicio del juego
void AActor3GameMode::BeginPlay()
{
    Super::BeginPlay();

    UWorld* World = GetWorld();
    if (World)
    {
        // Instanciar Rampa2
        if (Rampa2Class)
        {
            ARampa2* SpawnedRampa2 = World->SpawnActor<ARampa2>(Rampa2Class, Rampa2SpawnLocation, FRotator::ZeroRotator);
            if (!SpawnedRampa2)
            {
                UE_LOG(LogTemp, Warning, TEXT("No se pudo instanciar Rampa2."));
            }
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Rampa2Class no está asignada."));
        }

        // Instanciar Rampa
        if (RampaClass)
        {
            ARampa* SpawnedRampa = World->SpawnActor<ARampa>(RampaClass, RampaSpawnLocation, FRotator::ZeroRotator);
            if (!SpawnedRampa)
            {
                UE_LOG(LogTemp, Warning, TEXT("No se pudo instanciar Rampa."));
            }
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("RampaClass no está asignada."));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("GetWorld() devolvió nullptr."));
    }
}
