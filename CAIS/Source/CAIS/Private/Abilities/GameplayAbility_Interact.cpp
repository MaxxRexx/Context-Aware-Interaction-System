#include "Abilities/GameplayAbility_Interact.h"
#include "ContextAwareInteractionComponent.h"
#include "GameFramework/Actor.h"

UGameplayAbility_Interact::UGameplayAbility_Interact()
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::NonInstanced;
}

void UGameplayAbility_Interact::ActivateAbility(
	const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	if (!ActorInfo || !ActorInfo->OwnerActor.IsValid())
		return;

	
	if (const AActor* Owner = ActorInfo->OwnerActor.Get(); Owner)
	{
		if (const UContextAwareInteractionComponent* OwnerInteractionComponent = Owner->FindComponentByClass<UContextAwareInteractionComponent>())
		{
			OwnerInteractionComponent->TryInteract();
		}
	}
}
