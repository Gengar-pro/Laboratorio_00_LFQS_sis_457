// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Rampa.generated.h"

UCLASS()
class LABORATORIO_00_LFQS_API ARampa : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    ARampa();

    // Componente de malla de la rampa
    UPROPERTY()
    UStaticMeshComponent* RampaMesh;

    // Definici�n de componentes que conformar�n la jerarqu�a del actor.
    // Root: Componente ra�z que act�a como base para los dem�s.
    // ChildSceneComponent: Componente secundario que se adjunta al Root y sirve como un intermediario para m�s personalizaci�n.
    // BoxOne: Primer componente visual (malla est�tica) que se adjunta al Root.
    // BoxTwo: Segundo componente visual (malla est�tica) que ser� hijo de ChildSceneComponent.
    UPROPERTY()
    USceneComponent* Root;

    UPROPERTY()
    USceneComponent* ChildSceneComponent;

    UPROPERTY()
    UStaticMeshComponent* BoxOne;

    UPROPERTY()
    UStaticMeshComponent* BoxTwo;

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;
};
