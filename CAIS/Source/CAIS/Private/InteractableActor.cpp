#include "InteractableActor.h"
#include "Components/WidgetComponent.h"

AInteractableActor::AInteractableActor()
{
	PrimaryActorTick.bCanEverTick = false;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	InteractionWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("InteractionWidget"));
	InteractionWidget->SetupAttachment(RootComponent);
	InteractionWidget->SetWidgetSpace(EWidgetSpace::World);
	InteractionWidget->SetDrawSize(FVector2D(200, 50));

	GameplayTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Interactable")));
	
}


void AInteractableActor::BeginPlay()
{
	Super::BeginPlay();
	Execute_HideInteractionWidget(this);
}

void AInteractableActor::Interact_Implementation(AActor* InteractingActor)
{
	// Default interaction behavior, can be overridden in Blueprints
	if (this)
	{
		Execute_HideInteractionWidget(this);
	}
}

void AInteractableActor::ShowInteractionWidget_Implementation(AActor* InteractingActor)
{
	if (InteractionWidget && InteractionWidget->GetWidget())
	{
		if (InteractionWidget->GetWidget()->GetVisibility() == ESlateVisibility::Collapsed)
		{
			InteractionWidget->GetWidget()->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
		}
		
		UE_LOG(LogTemp, Warning, TEXT("Interaction Widget is now visible"));
	}
}

void AInteractableActor::ShowPossibleInteractionDot_Implementation()
{
	if (InteractionWidget && InteractionWidget->GetWidget())
	{
		if (InteractionWidget->GetWidget()->GetVisibility() == ESlateVisibility::Collapsed)
		{
			InteractionWidget->GetWidget()->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
		}
		
		UE_LOG(LogTemp, Warning, TEXT("Interaction Dot is now visible"));
	}
}

void AInteractableActor::HideInteractionWidget_Implementation()
{
	if (InteractionWidget && InteractionWidget->GetWidget())
	{
		if (InteractionWidget->GetWidget()->GetVisibility() == ESlateVisibility::SelfHitTestInvisible)
		{
			InteractionWidget->GetWidget()->SetVisibility(ESlateVisibility::Collapsed);
		}
		
		UE_LOG(LogTemp, Warning, TEXT("Interaction Widget is now hidden"));
	}
}

