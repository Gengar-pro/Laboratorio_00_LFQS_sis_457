// Fill out your copyright notice in the Description page of Project Settings.
//destruccion del objeto usando SetLifeSpan Actor2GameMode
#include "Actor2GameMode.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "Rampa.h"

void AActor2GameMode::BeginPlay()
{
    Super::BeginPlay();

    // Mensaje de depuraci�n al iniciar el juego
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Spawning ARampa con SetLifeSpan."));
    }

    // Configurar la ubicaci�n del spawn
    FTransform SpawnTransform;
    SpawnTransform.SetLocation(FVector(1430.0f, 2050.0f, 300.0f));
    SpawnTransform.SetRotation(FRotator(0.0f, 0.0f, 0.0f).Quaternion());

    // Instanciar la rampa
    SpawnedRampa = GetWorld()->SpawnActor<ARampa>(ARampa::StaticClass(), SpawnTransform);

    // Configurar el tiempo de vida del actor
    if (SpawnedRampa != nullptr)
    {
		SpawnedRampa->SetLifeSpan(5.0f); // La rampa ser� destruida autom�ticamente despu�s de 5 segundos sin previo aviso
    }
}
