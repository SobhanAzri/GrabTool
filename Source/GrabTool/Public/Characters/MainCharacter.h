#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainCharacter.generated.h"

class UInputMappingContext;
class UInputAction;
class UCameraComponent;
class UGrabToolComponent;


struct FInputActionValue;

UCLASS()
class GRABTOOL_API AMainCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AMainCharacter();

	virtual void Tick(float DeltaTime) override;


protected:
	virtual void BeginPlay() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//***	Input Functions	***//

	void MoveInput(const FInputActionValue& Value);
	void LookInput(const FInputActionValue& Value);

	void DoMove(float Right, float Forward);
	void DoLook(float Yaw, float Pitch);

private:	

	//***	Components	***//

	UPROPERTY(VisibleAnywhere)
	USceneComponent* CameraHolder;		// i Declared This Component to Attach Camera , FPS Arms , etc... 

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* CameraComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UGrabToolComponent* GrabToolComponent;

	//***	Input	***//

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* MappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

	//*** General Variables	***///

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterParams", meta = (AllowPrivateAccess = "true"))
	float CameraSenstivity = .8f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterParams", meta = (AllowPrivateAccess = "true"))
	float WalkSpeed = 350.f;
};
