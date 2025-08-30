#include "Components/GrabToolComponent.h"

UGrabToolComponent::UGrabToolComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void UGrabToolComponent::BeginPlay()
{
	Super::BeginPlay();
	
}


void UGrabToolComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

