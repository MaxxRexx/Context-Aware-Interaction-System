#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableInterface.h"
#include "GameplayTagContainer.h"
#include "InteractableActor.generated.h"

class UWidgetComponent;

UCLASS()
class CAIS_API AInteractableActor : public AActor, public IInteractableInterface
{
	GENERATED_BODY()

	public:
	AInteractableActor();

	protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UWidgetComponent* InteractionWidget;

	virtual void BeginPlay() override;
	
	public:
	virtual void Interact_Implementation(AActor* InteractingActor) override;
	virtual void ShowInteractionWidget_Implementation(AActor* InteractingActor) override;
	virtual void ShowPossibleInteractionDot_Implementation() override;
	virtual void HideInteractionWidget_Implementation() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameplayTags")
	FGameplayTagContainer GameplayTags;

	
};