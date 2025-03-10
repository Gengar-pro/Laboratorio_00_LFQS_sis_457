// Fill out your copyright notice in the Description page of Project Settings.

#include "Rampa.h"
#include "Components/StaticMeshComponent.h" // Incluye la clase UStaticMeshComponent

// Sets default values
ARampa::ARampa()
{
    // Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // Configura el componente RampaMesh
    RampaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RampaMesh"));
    RootComponent = RampaMesh;

    // Carga el mesh de la rampa
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/LevelPrototyping/Meshes/SM_Ramp.SM_Ramp'"));
    if (MeshAsset.Succeeded())
    {
        RampaMesh->SetStaticMesh(MeshAsset.Object); // Asigna el mesh al componente
        RampaMesh->SetRelativeLocation(FVector(100.0f, 0.0f, 10.0f)); // Ubicación de la rampa original un poquito más elevado que las 2 otras rampas
        RampaMesh->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f)); // Ajusta el tamaño
    }

    // Inicializa los componentes de la jerarquía
    Root = CreateDefaultSubobject<USceneComponent>("Root");
    ChildSceneComponent = CreateDefaultSubobject<USceneComponent>("ChildSceneComponent");
    BoxOne = CreateDefaultSubobject<UStaticMeshComponent>("BoxOne");
    BoxTwo = CreateDefaultSubobject<UStaticMeshComponent>("BoxTwo");

    // Configura Root como el componente raíz
    RootComponent = Root;
    RampaMesh->AttachToComponent(Root, FAttachmentTransformRules::KeepRelativeTransform);

    // Asigna mallas a los componentes visuales
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAssetCube(TEXT("/Script/Engine.StaticMesh'/Game/LevelPrototyping/Meshes/SM_Ramp.SM_Ramp'"));
    if (MeshAssetCube.Succeeded())
    {
        BoxOne->SetStaticMesh(MeshAssetCube.Object);
        BoxTwo->SetStaticMesh(MeshAssetCube.Object);
    }

    // Crea las relaciones jerárquicas
    BoxOne->AttachToComponent(Root, FAttachmentTransformRules::KeepRelativeTransform);
    ChildSceneComponent->AttachToComponent(Root, FAttachmentTransformRules::KeepRelativeTransform);
    BoxTwo->AttachToComponent(ChildSceneComponent, FAttachmentTransformRules::KeepRelativeTransform);

    // Ajusta la posición del ChildSceneComponent
    ChildSceneComponent->SetRelativeTransform(FTransform(FRotator(0, 0, 0), FVector(200, 0, 0), FVector(1.0f)));
}

// Called when the game starts or when spawned
void ARampa::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void ARampa::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
