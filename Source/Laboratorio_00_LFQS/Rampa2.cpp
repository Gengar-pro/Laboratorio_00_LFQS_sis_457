// Fill out your copyright notice in the Description page of Project Settings.
#include "Rampa2.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Engine.h"

ARampa2::ARampa2()
{
    PrimaryActorTick.bCanEverTick = true;

    // Crear componente raíz
    Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    SetRootComponent(Root);

    // Crear el componente de malla
    RampaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RampaMesh"));
    RampaMesh->SetupAttachment(Root);

    // Crear el componente de colisión
    CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
    CollisionSphere->SetupAttachment(Root);
    CollisionSphere->InitSphereRadius(100.0f);
    CollisionSphere->SetCollisionProfileName(TEXT("OverlapAllDynamic"));

    // Vincular el evento de colisión
    CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &ARampa2::OnOverlapBegin);

    // Asignar la malla estática
    static ConstructorHelpers::FObjectFinder<UStaticMesh> RampMeshAsset(TEXT("/Game/LevelPrototyping/Meshes/SM_Ramp.SM_Ramp"));
    if (RampMeshAsset.Succeeded())
    {
        RampaMesh->SetStaticMesh(RampMeshAsset.Object);
    }

    // Establecer la ubicación predeterminada
    SetActorLocation(FVector(0.0f, 0.0f, 0.0f));
}

void ARampa2::BeginPlay()
{
    Super::BeginPlay();
}

void ARampa2::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
void ARampa2::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor && (OtherActor != this))
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Rampa2 ha colisionado con otro actor!"));
    }
}

