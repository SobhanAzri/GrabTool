#include "Characters/MainCharacter.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/GrabToolComponent.h"

AMainCharacter::AMainCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComponent->SetupAttachment(GetRootComponent());
	CameraComponent->SetRelativeLocation(FVector(0.f, 0.f, 65.f));
	CameraComponent->bEnableFirstPersonFieldOfView = true;
	CameraComponent->FieldOfView = 80.f;
	CameraComponent->bEnableFirstPersonScale = true;
	CameraComponent->FirstPersonScale = .6f;
	CameraComponent->bUsePawnControlRotation = true;

	GrabToolComponent = CreateDefaultSubobject<UGrabToolComponent>(TEXT("GrabToolComponent"));
	GrabToolComponent->SetupAttachment(CameraComponent);
}

void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
			Subsystem->AddMappingContext(MappingContext, 0);

		GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
	}

}

void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMainCharacter::MoveInput(const FInputActionValue& Value)
{
	const FVector2D MovementDirection = Value.Get<FVector2D>();

	DoMove(MovementDirection.X, MovementDirection.Y);
}

void AMainCharacter::LookInput(const FInputActionValue& Value)
{
	const FVector2D LookDirection = Value.Get<FVector2D>();

	DoLook(LookDirection.X, LookDirection.Y);
}

void AMainCharacter::DoMove(float Right, float Forward)
{
	if (GetController())
	{
		AddMovementInput(GetActorForwardVector(), Forward);
		AddMovementInput(GetActorRightVector(), Right);
	}
}

void AMainCharacter::DoLook(float Yaw, float Pitch)
{
	if (GetController())
	{
		AddControllerPitchInput(Pitch * CameraSenstivity);
		AddControllerYawInput(Yaw * CameraSenstivity);
	}
}


void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Movement

		EnhancedInput->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMainCharacter::MoveInput);
		EnhancedInput->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMainCharacter::LookInput);
	}
}
