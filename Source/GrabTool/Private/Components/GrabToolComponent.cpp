#include "Components/GrabToolComponent.h"
#include "DrawDebugHelpers.h"

UGrabToolComponent::UGrabToolComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void UGrabToolComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

void UGrabToolComponent::TraceLook()
{
	const FVector StartPosition = GetComponentLocation();
	const FVector EndPosition = StartPosition + (GetForwardVector() * GrabDistance);

	DrawDebugLine(GetWorld(), StartPosition, EndPosition, FColor::Red);

	FHitResult HitResult;
	FCollisionShape CollisionShape = FCollisionShape::MakeSphere(2.5f);
	FCollisionQueryParams Params = FCollisionQueryParams(TEXT("GrabTrace"), false, GetOwner());

	if (GetWorld()->SweepSingleByChannel(
		HitResult,
		StartPosition, EndPosition,
		FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel1,
		CollisionShape,
		Params)
		)
	{
		if (AActor* HitActor = HitResult.GetActor())
			GEngine->AddOnScreenDebugMessage(1, 1, FColor::Black, HitActor->GetActorNameOrLabel());
	}
}


void UGrabToolComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	TraceLook();

}

