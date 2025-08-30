#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "GrabToolComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GRABTOOL_API UGrabToolComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	UGrabToolComponent();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	virtual void BeginPlay() override;


		
};
