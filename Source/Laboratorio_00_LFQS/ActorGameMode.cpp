// Fill out your copyright notice in the Description page of Project Settings.
#include "ActorGameMode.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Engine/Engine.h"
#include "Rampa.h"

void AActorGameMode::BeginPlay()
{
    Super::BeginPlay();

    // Mostrar un mensaje de depuración al iniciar el juego
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Spawning y temporizador de destrucción activados."));
    }

    // Configurar la ubicación inicial del actor
    FTransform SpawnTransform;
    SpawnTransform.SetLocation(FVector(1430.0f, 2050.0f, 300.0f));
    SpawnTransform.SetRotation(FRotator(0.0f, 0.0f, 0.0f).Quaternion());

    // Instanciar el Actor y almacenar la referencia
    SpawnedRampa = GetWorld()->SpawnActor<ARampa>(ARampa::StaticClass(), SpawnTransform);

    // Configurar un temporizador para destruir la rampa después de 10 segundos
    FTimerHandle DestroyTimerHandle;
    GetWorldTimerManager().SetTimer(DestroyTimerHandle, this, &AActorGameMode::DestroyRampa, 10.0f, false);
}

void AActorGameMode::DestroyRampa()
{
    if (SpawnedRampa != nullptr) 
    {
        // Destruir la rampa
        SpawnedRampa->Destroy();

        // Mensaje de depuración para confirmar la destrucción
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("¡Rampa ha sido destruida!"));
        }

        // Limpia la referencia
        SpawnedRampa = nullptr;
    }
}


