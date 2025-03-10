// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Rampa2.generated.h"

class USphereComponent;

UCLASS()
class LABORATORIO_00_LFQS_API ARampa2 : public AActor
{
    GENERATED_BODY()

public:
    ARampa2();

    // Componente de malla de la rampa
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* RampaMesh;

    // Componente ra�z del actor
    UPROPERTY(VisibleAnywhere)
    USceneComponent* Root;

    // Componente de colisi�n
    UPROPERTY(VisibleAnywhere)
    USphereComponent* CollisionSphere;

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    // Funci�n para manejar la colisi�n
    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
