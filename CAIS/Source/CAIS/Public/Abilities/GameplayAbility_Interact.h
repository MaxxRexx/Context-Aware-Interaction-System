#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GameplayAbility_Interact.generated.h"

UCLASS()
class CAIS_API UGameplayAbility_Interact : public UGameplayAbility
{
	GENERATED_BODY()

	public:
	UGameplayAbility_Interact();

	protected:
	virtual void ActivateAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		const FGameplayEventData* TriggerEventData
	) override;
};
