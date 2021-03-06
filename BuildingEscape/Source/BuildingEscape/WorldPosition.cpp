// Copyright DarthC0mp1ler 2021.


#include "WorldPosition.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UWorldPosition::UWorldPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWorldPosition::BeginPlay()
{
	Super::BeginPlay();	

	FString ClassName = GetName();
	FString OwnerName = GetOwner()->GetName();
	FString ObjectPosition = GetOwner()->GetActorLocation().ToString();

	UE_LOG(LogTemp,Warning,TEXT("%s is owned by %s object. Position: %s"),*ClassName, *OwnerName, *ObjectPosition);
	
}


// Called every frame
void UWorldPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

