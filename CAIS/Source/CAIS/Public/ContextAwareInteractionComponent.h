#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ContextAwareInteractionComponent.generated.h"

class AActor;
class UCameraComponent;

USTRUCT(BlueprintType)
struct FInteractionComponentData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "Interaction")
	float InteractionCheckTimerRate = 0.1f;

	UPROPERTY(BlueprintReadOnly, Category = "Interaction")
	float ActorRemovalTimerRate = 0.1f;

	UPROPERTY(BlueprintReadOnly, Category = "Interaction")
	FTimerHandle InteractionCheckTimerHandle;

	UPROPERTY(BlueprintReadOnly, Category = "Interaction")
	FTimerHandle ActorRemovalTimerHandle;

	UPROPERTY(BlueprintReadOnly, Category = "Interaction")
	float InteractionRange = 300.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Interaction")
	float InteractionRangeModifier = 150.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Interaction")
	FVector TraceStartLocation = FVector::ZeroVector;

	UPROPERTY(BlueprintReadOnly, Category = "Interaction")
	FRotator TraceStartRotation = FRotator::ZeroRotator;

	UPROPERTY(BlueprintReadOnly, Category = "Interaction")
	bool bUseActorEyeViewPoint = false;

	UPROPERTY(BlueprintReadOnly, Category = "Interaction")
	bool bUseCameraViewPoint = false;

	UPROPERTY(BlueprintReadOnly, Category = "Interaction")
	bool bUseContextAwareSolution = true;

	UPROPERTY(BlueprintReadOnly, Category = "Interaction")
	bool bEnableInteractionCheckTimer = true;

	UPROPERTY(BlueprintReadOnly, Category = "Interaction")
	AActor* CurrentInteractable = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "Interaction")
	AActor* CurrentInteractable_ContextAware = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "Interaction")
	TArray<AActor*> AllCurrentlyPerceivedInteractableActors;

	UPROPERTY(BlueprintReadOnly, Category = "Interaction")
	bool bInteractOnlyWithinSpecifiedAngle = false;

	UPROPERTY(BlueprintReadOnly, Category = "Interaction")
	float AngleToleranceForInteraction = 10.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Interaction")
	bool bDrawDebug = false;

	UPROPERTY(BlueprintReadOnly, Category = "Interaction")
	TEnumAsByte<ECollisionChannel> InteractionChannel = ECC_Visibility;
};


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent, DisplayName = "Context-Aware Interaction Component")
)
class CAIS_API UContextAwareInteractionComponent : public UActorComponent
{
	GENERATED_BODY()

	public:
		UContextAwareInteractionComponent();

		UFUNCTION(BlueprintCallable, Category = "Interaction")
		void TryInteract() const;

	protected:
		virtual void BeginPlay() override;

		UPROPERTY(BlueprintReadWrite, Category = "Components")
		UCameraComponent* CameraToUse = nullptr;

		UPROPERTY(EditAnywhere, Category = "Interaction")
		float InteractionCheckTimerRate = 0.1f;
		UPROPERTY(EditAnywhere, Category = "Interaction")
		float ActorRemovalTimerRate = 0.1f;
		UPROPERTY(EditAnywhere, Category = "Interaction")
		float InteractionRange = 300.0f;
		UPROPERTY(EditAnywhere, Category = "Interaction")
		float InteractionRangeModifier = 150.0f;
		UPROPERTY(EditAnywhere, Category = "Interaction")
		FVector TraceStartLocation = FVector::ZeroVector;
		UPROPERTY(EditAnywhere, Category = "Interaction")
		FRotator TraceStartRotation = FRotator::ZeroRotator;
		UPROPERTY(EditAnywhere, Category = "Interaction | Algorithm")
		bool bUseActorEyeViewPoint = false;
		UPROPERTY(EditAnywhere, Category = "Interaction | Algorithm")
		bool bUseCameraViewPoint = false;
		UPROPERTY(EditAnywhere, Category = "Interaction | Algorithm")
		bool bUseContextAwareSolution = true;
		UPROPERTY(EditAnywhere, Category = "Interaction")
		bool bEnableInteractionCheckTimer = true;
		UPROPERTY(EditAnywhere, Category = "Interaction | Algorithm", meta = (EditCondition = "bUseActorEyeViewPoint"))
		bool bInteractOnlyWithinSpecifiedAngle = false;
		UPROPERTY(EditAnywhere, Category = "Interaction")
		float AngleToleranceForInteraction = 10.0f;
		UPROPERTY(EditAnywhere, Category = "Interaction")
		bool bDrawDebug = false;
		UPROPERTY(EditAnywhere, Category = "Interaction")
		TEnumAsByte<ECollisionChannel> InteractionChannel = ECC_Visibility;

		UFUNCTION(BlueprintCallable, Category = "Interaction")
		void PerformInteractionCheck();

		UFUNCTION(BlueprintCallable, Category = "Interaction")
		void PerformInteractionCheck_ContextAware();

		UFUNCTION(BlueprintCallable, Category = "Interaction")
		void ClearInteractionTimer();

		// Helper function to check if two actors are facing each other within a certain angle
		UFUNCTION(BlueprintPure, Category = "Interaction")
		static bool AreActorsFacingEachOther(const AActor* InteractingActor, const AActor* InteractableActor,
		                                     float& ResultingAngleInteracting,
		                                     float& ResultingAngleInteractable,
		                                     const float AngleTolerance = 10.0f);

		UFUNCTION(BlueprintCallable, Category = "Interaction")
		bool AttemptToAddInteractableActorToArray(AActor* NewInteractableActor, AActor*& AddedActor,
		                                 TArray<AActor*>& ArrayOfInteractableActors);

		/*	check whether we could add an Interactable Actor to the storage array,
			or whether the array already contains the Interactable Actor
		*/
		UFUNCTION(BlueprintCallable, Category = "Interaction")
		bool WasTheAttemptToAddInteractableActorToArraySuccessful(AActor* NewInteractableActor);

		UFUNCTION(BlueprintCallable, Category = "Interaction")
		void RemoveInteractableActorsThatAreOutOfInteractionRangeInArray();
	
		#pragma region "Getters"

		//Getters
		UFUNCTION(BlueprintPure, Category = "Getters")
		AActor* GetCurrentInteractable() const
		{
			return CurrentInteractable.Get();
		}


		UFUNCTION(BlueprintPure, Category = "Getters")
		TArray<AActor*> GetAllCurrentlyPerceivedInteractableActors() const
		{
			TArray<AActor*> Actors;
			for (const auto& Actor : AllCurrentlyPerceivedInteractableActors)
			{
				if (Actor.IsValid())
				{
					Actors.Add(Actor.Get());
				}
			}
			return Actors;
		}

		UFUNCTION(BlueprintPure, Category = "Getters")
		AActor* GetCurrentInteractable_ContextAware() const
		{
			if (!GetAllCurrentlyPerceivedInteractableActors().IsEmpty())
			{
				return GetAllCurrentlyPerceivedInteractableActors()[0];;
			}

			return nullptr;
		}

		UFUNCTION(BlueprintPure, Category = "Getters")
		float GetInteractionCheckTimerRate() const
		{
			return InteractionCheckTimerRate;
		}

		UFUNCTION(BlueprintPure, Category = "Getters")
		float GetActorRemovalTimerRate() const
		{
			return ActorRemovalTimerRate;
		}

		UFUNCTION(BlueprintPure, Category = "Getters")
		FTimerHandle GetInteractionCheckTimerHandle() const
		{
			return InteractionCheckTimerHandle;
		}

		UFUNCTION(BlueprintPure, Category = "Getters")
		FTimerHandle GetActorRemovalTimerHandle() const
		{
			return ActorRemovalTimerHandle;
		}

		UFUNCTION(BlueprintPure, Category = "Getters")
		float GetInteractionRange() const
		{
			return InteractionRange;
		}

		UFUNCTION(BlueprintPure, Category = "Getters")
		float GetInteractionRangeModifier() const
		{
			return InteractionRangeModifier;
		}
	
		UFUNCTION(BlueprintPure, Category = "Getters")
		FVector GetTraceStartLocation() const
		{
			return TraceStartLocation;
		}

		UFUNCTION(BlueprintPure, Category = "Getters")
		FRotator GetTraceStartRotation() const
		{
			return TraceStartRotation;
		}

		UFUNCTION(BlueprintPure, Category = "Getters")
		bool GetUseActorEyeViewPoint() const
		{
			return bUseActorEyeViewPoint;
		}

		UFUNCTION(BlueprintPure, Category = "Getters")
		bool GetUseCameraViewPoint() const
		{
			return bUseCameraViewPoint;
		}

		UFUNCTION(BlueprintPure, Category = "Getters")
		bool GetUseContextAwareSolution() const
		{
			return bUseContextAwareSolution;
		}

		UFUNCTION(BlueprintPure, Category = "Getters")
		bool GetEnableInteractionCheckTimer() const
		{
			return bEnableInteractionCheckTimer;
		}

		UFUNCTION(BlueprintPure, Category = "Getters")
		bool GetInteractOnlyWithinSpecifiedAngle() const
		{
			return bInteractOnlyWithinSpecifiedAngle;
		}

		UFUNCTION(BlueprintPure, Category = "Getters")
		float GetAngleToleranceForInteraction() const
		{
			return AngleToleranceForInteraction;
		}

		UFUNCTION(BlueprintPure, Category = "Getters")
		bool GetDrawDebug() const
		{
			return bDrawDebug;
		}


		UFUNCTION(BlueprintPure, Category = "Getters")
		TEnumAsByte<ECollisionChannel> GetInteractionChannel() const
		{
			return InteractionChannel;
		}

		UFUNCTION(BlueprintPure, Category = "Getters")
		FInteractionComponentData GetAllInteractionComponentData() const
		{
			FInteractionComponentData Data;
			Data.InteractionCheckTimerRate = GetInteractionCheckTimerRate();
			Data.InteractionCheckTimerHandle = GetInteractionCheckTimerHandle();
			Data.ActorRemovalTimerRate = GetActorRemovalTimerRate();
			Data.ActorRemovalTimerHandle = GetActorRemovalTimerHandle();
			Data.InteractionRange = GetInteractionRange();
			Data.InteractionRangeModifier = GetInteractionRangeModifier();
			Data.TraceStartLocation = GetTraceStartLocation();
			Data.TraceStartRotation = GetTraceStartRotation();
			Data.bUseActorEyeViewPoint = GetUseActorEyeViewPoint();
			Data.bUseCameraViewPoint = GetUseCameraViewPoint();
			Data.bUseContextAwareSolution = GetUseContextAwareSolution();
			Data.bEnableInteractionCheckTimer = GetEnableInteractionCheckTimer();
			Data.CurrentInteractable = GetCurrentInteractable();
			Data.CurrentInteractable_ContextAware = GetCurrentInteractable_ContextAware();
			Data.AllCurrentlyPerceivedInteractableActors = GetAllCurrentlyPerceivedInteractableActors();
			Data.bInteractOnlyWithinSpecifiedAngle = GetInteractOnlyWithinSpecifiedAngle();
			Data.AngleToleranceForInteraction = GetAngleToleranceForInteraction();
			Data.bDrawDebug = GetDrawDebug();
			Data.InteractionChannel = GetInteractionChannel();
			return Data;
		}


		#pragma endregion

		#pragma region "Setters and Initialization"

		//Setter functions and Initialization
		UFUNCTION(BlueprintCallable, Category = "Setters")
		float SetInteractionCheckTimerRate(const float NewRate)
		{
			InteractionCheckTimerRate = NewRate;
			return InteractionCheckTimerRate;
		}

		UFUNCTION(BlueprintCallable, Category = "Setters")
		float SetActorRemovalTimerRate(const float NewRate)
		{
			ActorRemovalTimerRate = NewRate;
			return ActorRemovalTimerRate;
		}

		UFUNCTION(BlueprintCallable, Category = "Setters")
		void SetInteractionRange(const float NewRange)
		{
			InteractionRange = NewRange;
		}

		UFUNCTION(BlueprintCallable, Category = "Setters")
		void SetInteractionRangeModifier(const float NewModifier)
		{
			InteractionRangeModifier = NewModifier;
		}
	
		UFUNCTION(BlueprintCallable, Category = "Setters")
		void SetCameraToUse(UCameraComponent* NewCamera)
		{
			CameraToUse = NewCamera;
		}


		/**
			* Sets the start location for tracing.
			* 
			* This should be used when bUseContextAwareSolution, bUseCameraViewPoint and bUseActorEyeViewPoint are all false.
			* See [SetTraceStartRotation](@link SetTraceStartRotation) for setting rotation.
			*/
		UFUNCTION(BlueprintCallable, Category = "Setters | Trace")
		void SetTraceStartLocation(const FVector& NewLocation)
		{
			TraceStartLocation = NewLocation;
		}

		/**
			* Sets the start rotation for tracing.
			* 
			* This should be used when bUseContextAwareSolution, bUseCameraViewPoint and bUseActorEyeViewPoint are all false.
			* See [SetTraceStartLocation](@link SetTraceStartLocation) for setting location.
			*/
		UFUNCTION(BlueprintCallable, Category = "Setters | Trace")
		void SetTraceStartRotation(const FRotator& NewRotation)
		{
			TraceStartRotation = NewRotation;
		}

		UFUNCTION(BlueprintCallable, Category = "Setters")
		void SetUseActorEyeViewPoint(const bool bNewUse)
		{
			bUseActorEyeViewPoint = bNewUse;
		}

		UFUNCTION(BlueprintCallable, Category = "Setters")
		void SetUseCameraViewPoint(const bool bNewUse)
		{
			bUseCameraViewPoint = bNewUse;
		}

		UFUNCTION(BlueprintCallable, Category = "Setters")
		void SetUseContextAwareSolution(const bool bNewUse)
		{
			bUseContextAwareSolution = bNewUse;
		}

		UFUNCTION(BlueprintCallable, Category = "Setters")
		void SetEnableInteractionCheckTimer(const bool bNewEnable)
		{
			bEnableInteractionCheckTimer = bNewEnable;
		}

		UFUNCTION(BlueprintCallable, Category = "Setters")
		void SetInteractOnlyWithinSpecifiedAngle(const bool bNewInteractOnlyWithinSpecifiedAngle)
		{
			bInteractOnlyWithinSpecifiedAngle = bNewInteractOnlyWithinSpecifiedAngle;
		}

		UFUNCTION(BlueprintCallable, Category = "Setters")
		void SetAngleToleranceForInteraction(const float NewAngleTolerance)
		{
			AngleToleranceForInteraction = NewAngleTolerance;
		}

		UFUNCTION(BlueprintCallable, Category = "Setters")
		void SetDrawDebug(const bool bNewDrawDebug)
		{
			bDrawDebug = bNewDrawDebug;
		}

		UFUNCTION(BlueprintCallable, Category = "Setters")
		TEnumAsByte<ECollisionChannel> SetInteractionChannel(const TEnumAsByte<ECollisionChannel> NewChannel)
		{
			InteractionChannel = NewChannel;
			return InteractionChannel;
		}

		UFUNCTION(BlueprintCallable, Category = "Initialization")
		void InitializeInteractionComponentParameters(
			const float NewInteractionCheckTimerRate,
			const float NewActorRemovalTimerRate,
			UCameraComponent* NewCameraToUse,
			const float NewInteractionRange,
			const float NewInteractionRangeModifier,
			const FVector& NewTraceStartLocation,
			const FRotator& NewTraceStartRotation,
			const bool bNewUseActorEyeViewPoint,
			const bool bNewUseCameraViewPoint,
			const bool bNewUseContextAwareSolution,
			const bool bNewEnableInteractionCheckTimer,
			const bool bNewInteractOnlyWithinSpecifiedAngle,
			const float NewAngleTolerance,
			const bool bNewDrawDebug,
			const TEnumAsByte<ECollisionChannel> NewChannelToUseForTrace)
		{
			SetInteractionCheckTimerRate(NewInteractionCheckTimerRate);
			SetActorRemovalTimerRate(NewActorRemovalTimerRate);
			SetCameraToUse(NewCameraToUse);
			SetInteractionRange(NewInteractionRange);
			SetInteractionRangeModifier(NewInteractionRangeModifier);
			SetTraceStartLocation(NewTraceStartLocation);
			SetTraceStartRotation(NewTraceStartRotation);
			SetUseActorEyeViewPoint(bNewUseActorEyeViewPoint);
			SetUseCameraViewPoint(bNewUseCameraViewPoint);
			SetUseContextAwareSolution(bNewUseContextAwareSolution);
			SetEnableInteractionCheckTimer(bNewEnableInteractionCheckTimer);
			SetInteractOnlyWithinSpecifiedAngle(bNewInteractOnlyWithinSpecifiedAngle);
			SetAngleToleranceForInteraction(NewAngleTolerance);
			SetDrawDebug(bNewDrawDebug);
			SetInteractionChannel(NewChannelToUseForTrace);
		}

		#pragma endregion

	
	
	private:
		//this is used if bUseContextAwareSolution is false
		TWeakObjectPtr<AActor> CurrentInteractable = nullptr;

		//this is used if bUseContextAwareSolution is true;
		TArray<TWeakObjectPtr<AActor>> AllCurrentlyPerceivedInteractableActors;

		FTimerHandle InteractionCheckTimerHandle;
		FTimerHandle ActorRemovalTimerHandle;
};
