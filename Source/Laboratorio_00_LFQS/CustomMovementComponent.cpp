#include "CustomMovementComponent.h"
#include "GameFramework/Actor.h"

// Constructor predeterminado
UCustomMovementComponent::UCustomMovementComponent()
{
    // Habilitar Tick para este componente
    PrimaryComponentTick.bCanEverTick = true;

    // Establecer velocidad predeterminada
    MovementSpeed = 200.0f; // Puedes ajustar esta velocidad como desees
}

// Se llama al inicio del juego
void UCustomMovementComponent::BeginPlay()
{
    Super::BeginPlay();

    // Verifica que el actor propietario del componente est� configurado correctamente
    if (!GetOwner())
    {
        UE_LOG(LogTemp, Error, TEXT("CustomMovementComponent no tiene un propietario v�lido."));
        return;
    }
}

// Se llama cada frame
void UCustomMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    // Obtener el actor propietario del componente
    AActor* Owner = GetOwner();
    if (Owner)
    {
        // Calcular la nueva ubicaci�n del actor en funci�n de la velocidad y el tiempo transcurrido
        FVector NewLocation = Owner->GetActorLocation() + Owner->GetActorForwardVector() * MovementSpeed * DeltaTime;

        // Establecer la nueva ubicaci�n del actor
        Owner->SetActorLocation(NewLocation);
    }
}
