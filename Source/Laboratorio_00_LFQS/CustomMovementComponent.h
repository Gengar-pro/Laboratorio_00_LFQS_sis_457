#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CustomMovementComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class LABORATORIO_00_LFQS_API UCustomMovementComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    // Constructor predeterminado
    UCustomMovementComponent();

    // Velocidad de movimiento configurable
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float MovementSpeed;

protected:
    // Llamado cuando comienza el juego
    virtual void BeginPlay() override;

public:
    // Llamado cada frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
