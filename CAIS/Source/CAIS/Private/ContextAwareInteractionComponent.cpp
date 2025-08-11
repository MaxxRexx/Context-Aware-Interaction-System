#include "ContextAwareInteractionComponent.h"
#include "InteractableInterface.h"
#include "GameFramework/PlayerController.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Camera/CameraComponent.h"


UContextAwareInteractionComponent::UContextAwareInteractionComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UContextAwareInteractionComponent::BeginPlay()
{
	Super::BeginPlay();

	if (GetOwner() && GetWorld())
	{
		if (bEnableInteractionCheckTimer && InteractionCheckTimerRate > 0.0f)
		{
			GetWorld()->GetTimerManager().SetTimer(InteractionCheckTimerHandle,this, bUseContextAwareSolution
					? &UContextAwareInteractionComponent::PerformInteractionCheck_ContextAware
					: &UContextAwareInteractionComponent::PerformInteractionCheck,InteractionCheckTimerRate,true);

			
			if (bUseContextAwareSolution)
			{
				GetWorld()->GetTimerManager().SetTimer(ActorRemovalTimerHandle, this,
														 &UContextAwareInteractionComponent::RemoveInteractableActorsThatAreOutOfInteractionRangeInArray,
														 ActorRemovalTimerRate, true);
			}
			
		}
		else if (InteractionCheckTimerRate <= 0.0f)
		{
			UE_LOG(LogTemp, Warning, TEXT("Invalid InteractionCheckTimerRate. Timer will not be started."));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Owner or World is invalid. Timer will not be started."));
	}
}

void UContextAwareInteractionComponent::PerformInteractionCheck()
{
	AActor* Owner = GetOwner();

	if (!Owner)
	{
		UE_LOG(LogTemp, Warning,
		       TEXT("Owner Is Invalid - PerformInteractionCheck"));

		ClearInteractionTimer();

		return;
	}

	FVector TraceEnd = FVector::ZeroVector;
	bool bHit = false;

	FHitResult HitResult;
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(Owner);

	if (bUseCameraViewPoint)
	{
		if (!CameraToUse)
		{
			if (UCameraComponent* FoundCamera = Owner->FindComponentByClass<UCameraComponent>(); !FoundCamera)
			{
				UE_LOG(LogTemp, Warning,
				       TEXT("No camera found to use for interaction even though UseCameraViewPoint is set to true"));


				ClearInteractionTimer();

				return;
			}
			else
			{
				CameraToUse = FoundCamera;
			}
		}

		if (CameraToUse && InteractionRange > 0.0f)
		{
			TraceEnd = CameraToUse->GetComponentLocation() + (CameraToUse->GetComponentRotation().Vector() *
				InteractionRange);

			if (GetWorld())
			{
				if (bDrawDebug)
				{
					DrawDebugLine(GetWorld(), CameraToUse->GetComponentLocation(), TraceEnd, FColor::Black, false, 1);
				}

				bHit = GetWorld()->LineTraceSingleByChannel(HitResult, CameraToUse->GetComponentLocation(), TraceEnd,
				                                            InteractionChannel, QueryParams);
			}
			else
			{
				UE_LOG(LogTemp, Warning,
				       TEXT("World is invalid. No interaction will be attempted."));
				ClearInteractionTimer();

				return;
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning,
			       TEXT("InteractionRange is invalid. No interaction will be attempted."));
			return;
		}
	}

	else if (bUseActorEyeViewPoint)
	{
		FVector EyeLocation;
		FRotator EyeRotation;

		Owner->GetActorEyesViewPoint(EyeLocation, EyeRotation);

		if (InteractionRange > 0.0f)
		{
			TraceEnd = EyeLocation + (EyeRotation.Vector() * InteractionRange);

			if (GetWorld())
			{
				if (bDrawDebug)
				{
					DrawDebugLine(GetWorld(), EyeLocation, TraceEnd, FColor::Yellow, false, 1);
				}
				bHit = GetWorld()->LineTraceSingleByChannel(HitResult, EyeLocation, TraceEnd, InteractionChannel,
				                                            QueryParams);
			}
			else
			{
				UE_LOG(LogTemp, Warning,
				       TEXT("World is invalid. No interaction will be attempted."));
				ClearInteractionTimer();

				return;
			}
		}

		else
		{
			UE_LOG(LogTemp, Warning,
			       TEXT("InteractionRange is invalid. No interaction will be attempted."));
			return;
		}
	}

	else
	{
		/* If bUseContextAwareSolution, bUseCameraViewPoint and bUseActorEyeViewPoint are all false,
		 * use TraceStartLocation and TraceStartRotation.
		 * Set these using the functions
		 * [SetTraceStartLocation] and [SetTraceStartRotation].
		*/

		if (InteractionRange > 0.0f)
		{
			TraceEnd = TraceStartLocation + (TraceStartRotation.Vector() * InteractionRange);

			if (GetWorld())
			{
				if (bDrawDebug)
				{
					DrawDebugLine(GetWorld(), TraceStartLocation, TraceEnd, FColor::Green, false, 1);
				}

				bHit = GetWorld()->LineTraceSingleByChannel(HitResult, TraceStartLocation, TraceEnd, InteractionChannel,
				                                            QueryParams);
			}
			else
			{
				UE_LOG(LogTemp, Warning,
				       TEXT("World is invalid. No interaction will be attempted."));
				ClearInteractionTimer();

				return;
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning,
			       TEXT("InteractionRange is invalid. No interaction will be attempted."));
			return;
		}
	}

	TWeakObjectPtr<AActor> NewInteractable = bHit && HitResult.GetActor()->GetClass()->ImplementsInterface(
		                                         UInteractableInterface::StaticClass())
		                                         ? HitResult.GetActor()
		                                         : nullptr;

	if (!NewInteractable.IsValid())
	{
		if (GetCurrentInteractable())
		{
			IInteractableInterface::Execute_HideInteractionWidget(GetCurrentInteractable());

			UE_LOG(LogTemp, Warning,
			       TEXT(
				       "We are not currently detecting any Interactable Actors. Current interactable: %s's widget is now hidden"
			       ),
			       GetCurrentInteractable() ? *GetCurrentInteractable()->GetName() : TEXT("None"));

			CurrentInteractable = nullptr;

			UE_LOG(LogTemp, Warning,
			       TEXT("CurrentInteractable is now set to: %s"),
			       GetCurrentInteractable() ? *GetCurrentInteractable()->GetName() : TEXT("None"));
		}
	}
	else if (NewInteractable.IsValid() && GetCurrentInteractable() != NewInteractable.Get())
	{
		if (GetCurrentInteractable())
		{
			IInteractableInterface::Execute_HideInteractionWidget(GetCurrentInteractable());
		}

		CurrentInteractable = NewInteractable.Get();

		if (GetCurrentInteractable())
		{
			IInteractableInterface::Execute_ShowInteractionWidget(GetCurrentInteractable(), Owner);
		}
	}
	else if (NewInteractable.IsValid() && GetCurrentInteractable() == NewInteractable.Get())
	{
		UE_LOG(LogTemp, Warning,
		       TEXT(
			       "We are already looking at our last known Interactable Actor and its interaction widget should be visible right now"
			       "Last Known Interactable Actor: %s"),
		       GetCurrentInteractable() ? *GetCurrentInteractable()->GetName() : TEXT("None"));
	}
}

void UContextAwareInteractionComponent::PerformInteractionCheck_ContextAware()
{
	if (!bUseContextAwareSolution)
	{
		UE_LOG(LogTemp, Warning,
		       TEXT(
			       "bUseContextAwareSolution is set to false even though PerformInteractionCheck_ContextAware Timer is running"
		       ));

		ClearInteractionTimer();

		return;
	}


	AActor* Owner = GetOwner();

	if (!Owner)
	{
		UE_LOG(LogTemp, Warning,
		       TEXT("Owner Is Invalid- PerformInteractionCheck_ContextAware"));

		ClearInteractionTimer();

		return;
	}

	if (!CameraToUse)
	{
		if (UCameraComponent* FoundCamera = Owner->FindComponentByClass<UCameraComponent>(); !FoundCamera)
		{
			UE_LOG(LogTemp, Warning,
			       TEXT("No camera found to use for interaction - PerformInteractionCheck_ContextAware"));

			ClearInteractionTimer();

			return;
		}
		else
		{
			CameraToUse = FoundCamera;
		}
	}

	#pragma region Variable Declarations
	
	FVector TraceEnd_EyeViewPoint = FVector::ZeroVector;
	FVector TraceEnd_CameraViewPoint = FVector::ZeroVector;


	FHitResult HitResult_CameraViewPoint;
	FHitResult HitResult_EyeViewPoint;

	FCollisionQueryParams QueryParams_CameraViewPoint;
	QueryParams_CameraViewPoint.AddIgnoredActor(Owner);

	FCollisionQueryParams QueryParams_EyeViewPoint;
	QueryParams_EyeViewPoint.AddIgnoredActor(Owner);

	bool bHit_EyeViewPoint = false;
	bool bHit_CameraViewPoint = false;

	#pragma endregion
	
	if (CameraToUse && InteractionRange > 0.0f && InteractionRangeModifier > 0.0f)
	{
		TraceEnd_CameraViewPoint = CameraToUse->GetComponentLocation() + (CameraToUse->GetComponentRotation().Vector() *
			InteractionRange);

		if (GetWorld())
		{
			if (bDrawDebug)
			{
				DrawDebugLine(GetWorld(), CameraToUse->GetComponentLocation(), TraceEnd_CameraViewPoint, FColor::White,
				              false,
				              1);
			}

			bHit_CameraViewPoint = GetWorld()->LineTraceSingleByChannel(HitResult_CameraViewPoint,
			                                                            CameraToUse->GetComponentLocation(),
			                                                            TraceEnd_CameraViewPoint,
			                                                            InteractionChannel,
			                                                            QueryParams_CameraViewPoint);


			FVector EyeLocation_ContextAware;
			FRotator EyeRotation_ContextAware;

			Owner->GetActorEyesViewPoint(EyeLocation_ContextAware, EyeRotation_ContextAware);
			
			TraceEnd_EyeViewPoint = Owner->GetActorLocation() + (Owner->GetActorForwardVector() * InteractionRangeModifier);

			if (bDrawDebug)
			{
				DrawDebugLine(GetWorld(), EyeLocation_ContextAware, TraceEnd_EyeViewPoint, FColor::Blue, false, 1);
			}
			
			bHit_EyeViewPoint = GetWorld()->LineTraceSingleByChannel(HitResult_EyeViewPoint, EyeLocation_ContextAware,
			                                                         TraceEnd_EyeViewPoint, InteractionChannel,
			                                                         QueryParams_EyeViewPoint);
		}
		else
		{
			UE_LOG(LogTemp, Warning,
			       TEXT("World is invalid. No interaction will be attempted."));
			ClearInteractionTimer();

			return;
		}
	}
	else
	{
		ClearInteractionTimer();

		UE_LOG(LogTemp, Warning,
			   TEXT("InteractionRange and/or InteractionRangeModifier is invalid. No interaction will be attempted."
			  "PerformInteractionCheck_ContextAware Timer is now stopped"));
		
		return;
	}

	#pragma region NewInteractable Definitions
	
	TWeakObjectPtr<AActor> NewInteractable_CameraViewPoint = bHit_CameraViewPoint && HitResult_CameraViewPoint.
	                                                                                 GetActor()->GetClass()->
	                                                                                 ImplementsInterface(
		                                                                                 UInteractableInterface::StaticClass())
		                                                         ? HitResult_CameraViewPoint.GetActor()
		                                                         : nullptr;

	TWeakObjectPtr<AActor> NewInteractable_EyeViewPoint = bHit_EyeViewPoint && HitResult_EyeViewPoint.GetActor()->
	                                                                                                  GetClass()->
	                                                                                                  ImplementsInterface(
		                                                                                                  UInteractableInterface::StaticClass())
		                                                      ? HitResult_EyeViewPoint.GetActor()
		                                                      : nullptr;

	#pragma endregion

	//report results of line traces
	#pragma region Line Trace Reports
	
	UE_LOG(LogTemp, Warning,
		TEXT("NewInteractable_CameraViewPoint: %s"),
		NewInteractable_CameraViewPoint.IsValid() ? *NewInteractable_CameraViewPoint->GetName() : TEXT("None"));

	UE_LOG(LogTemp, Warning,
		TEXT("NewInteractable_EyeViewPoint: %s"),
		NewInteractable_EyeViewPoint.IsValid() ? *NewInteractable_EyeViewPoint->GetName() : TEXT("None"));

	#pragma endregion
	
	// if ONLY one is valid and the other is invalid
    if (NewInteractable_CameraViewPoint.IsValid() ^ NewInteractable_EyeViewPoint.IsValid())
    	{
		
    		UE_LOG(LogTemp, Warning,
			TEXT("Either the Camera or Eye is currently looking at an Interactable"));
    	
    	
    		if (AActor* ValidInteractable = NewInteractable_CameraViewPoint.IsValid()
    			                                ? NewInteractable_CameraViewPoint.Get()
    			                                : NewInteractable_EyeViewPoint.Get(); ValidInteractable)
    		{
    			if (ValidInteractable == NewInteractable_CameraViewPoint.Get())
    			{
    				UE_LOG(LogTemp, Warning,
    					TEXT("Camera is looking at an Interactable."));
    			}
    			else
    			{
    				UE_LOG(LogTemp, Warning,
    					TEXT("Eye is looking at an Interactable."));
    			}
    			
    			if (!GetCurrentInteractable_ContextAware() ||
    				(GetCurrentInteractable_ContextAware() && GetCurrentInteractable_ContextAware() != ValidInteractable))
    			{
    				IInteractableInterface::Execute_ShowPossibleInteractionDot(ValidInteractable);
    
    				UE_LOG(LogTemp, Warning,
    				       TEXT(
    					       "There is an InteractableActor within InteractionRange that we can possibly interact with"
    									"if we meet interaction conditions."
    									"This is shown by the Dot."
    									"New Possible Interactable Actor: %s"),
    				       ValidInteractable ? *ValidInteractable->GetName() : TEXT("None"));
    			}
    			else
    			{
    				UE_LOG(LogTemp, Warning,
    					TEXT("Interaction Dot Was Not Shown On Possible Interactable Actor"));
    			}
    		}
    	}

	// if both are valid
	else if (NewInteractable_CameraViewPoint.IsValid() && NewInteractable_EyeViewPoint.IsValid())
	{
		if (NewInteractable_CameraViewPoint.Get() == NewInteractable_EyeViewPoint.Get())
		{
			if (WasTheAttemptToAddInteractableActorToArraySuccessful(NewInteractable_CameraViewPoint.Get()) && GetCurrentInteractable_ContextAware())
			{
				IInteractableInterface::Execute_ShowInteractionWidget(GetCurrentInteractable_ContextAware(), Owner);

				UE_LOG(LogTemp, Warning,
					 TEXT("Both Camera and Eye are looking at the same Interactable."));
				return;
			}
		}
		else
		{
			
			float AngleInteracting_CameraViewPoint = 0.0f;
			float AngleInteractable_CameraViewPoint = 0.0f;

			AreActorsFacingEachOther(Owner, NewInteractable_CameraViewPoint.Get(),
			                         AngleInteracting_CameraViewPoint, AngleInteractable_CameraViewPoint,
			                         AngleToleranceForInteraction);


			float AngleInteracting_EyeViewPoint = 0.0f;
			float AngleInteractable_EyeViewPoint = 0.0f;

			AreActorsFacingEachOther(Owner, NewInteractable_EyeViewPoint.Get(),
			                         AngleInteracting_EyeViewPoint, AngleInteractable_EyeViewPoint,
			                         AngleToleranceForInteraction);


			float OverallCameraAngle = AngleInteracting_CameraViewPoint + AngleInteractable_CameraViewPoint;
			float OverallEyeAngle = AngleInteracting_EyeViewPoint + AngleInteractable_EyeViewPoint;

			if (OverallCameraAngle == OverallEyeAngle)
			{
				float DistanceToInteractable_CameraViewPoint = FVector::Dist(Owner->GetActorLocation(),
				                                                             NewInteractable_CameraViewPoint.Get()->
				                                                                                             GetActorLocation());
				float DistanceToInteractable_EyeViewPoint = FVector::Dist(Owner->GetActorLocation(),
				                                                          NewInteractable_EyeViewPoint.Get()->
				                                                                                       GetActorLocation());
				
				TWeakObjectPtr<AActor> NewInteractableActorByDistance =
					(DistanceToInteractable_CameraViewPoint < DistanceToInteractable_EyeViewPoint)
						? NewInteractable_CameraViewPoint
						: NewInteractable_EyeViewPoint;

				if (NewInteractableActorByDistance.Get() == NewInteractable_CameraViewPoint.Get())
				{
					UE_LOG(LogTemp, Warning,
						TEXT("Overall Camera Angle = Overall Eye Angle, thus NewInteractableActorByDistance is using the CameraViewPoint"));
				}
				else
				{
					UE_LOG(LogTemp, Warning,
						TEXT("Overall Camera Angle = Overall Eye Angle, thus NewInteractableActorByDistance is using the EyeViewPoint"));
				}
				
				
				if (WasTheAttemptToAddInteractableActorToArraySuccessful(NewInteractableActorByDistance.Get()) && GetCurrentInteractable_ContextAware())
					{
						IInteractableInterface::Execute_ShowInteractionWidget(GetCurrentInteractable_ContextAware(),
						                                                      Owner);
						return;
					}
				
			}

			TWeakObjectPtr<AActor> NewInteractableActorByAngle = (OverallCameraAngle < OverallEyeAngle)
				                                              ? NewInteractable_CameraViewPoint
				                                              : NewInteractable_EyeViewPoint;

			if (NewInteractableActorByAngle.Get() == NewInteractable_CameraViewPoint.Get())
			{
				UE_LOG(LogTemp, Warning,
					TEXT("Overall Camera Angle < Overall Eye Angle, thus NewInteractableActorByAngle is using the CameraViewPoint"));
			}
			else
			{
				UE_LOG(LogTemp, Warning,
					TEXT("Overall Eye Angle < Overall Camera Angle, thus NewInteractableActorByAngle is using the EyeViewPoint"));
			}
			
			if (WasTheAttemptToAddInteractableActorToArraySuccessful(NewInteractableActorByAngle.Get()) && GetCurrentInteractable_ContextAware())
			{
				IInteractableInterface::Execute_ShowInteractionWidget(GetCurrentInteractable_ContextAware(),
																	  Owner);
				return;
			}
		}
	}

	// if both are invalid
	else if (!(NewInteractable_CameraViewPoint.IsValid() || NewInteractable_EyeViewPoint.IsValid()))
	{
		UE_LOG(LogTemp, Warning,
			   TEXT("No Interactable found - PerformInteractionCheck_ContextAware"));
	}
}

void UContextAwareInteractionComponent::TryInteract() const
{
	if (bInteractOnlyWithinSpecifiedAngle)
	{
		UE_LOG(LogTemp, Warning,
		       TEXT("bInteractOnlyWithinSpecifiedAngle is set to true - TryInteract"));

		float AngleInteracting = 0.0f;
		float AngleInteractable = 0.0f;

		if (const AActor* InteractingActor = GetOwner();
			!AreActorsFacingEachOther(InteractingActor,
			                          bUseContextAwareSolution
				                          ? GetCurrentInteractable_ContextAware()
				                          : GetCurrentInteractable(),
			                          AngleInteracting, AngleInteractable,
			                          AngleToleranceForInteraction))
		{
			return;
		}

		UE_LOG(LogTemp, Warning,
		       TEXT("Interacting Actor and Interactable Actor are facing each other - TryInteract"));

		if ((bUseContextAwareSolution ? GetCurrentInteractable_ContextAware() : GetCurrentInteractable())
			&& GetCurrentInteractable()->GetClass()->ImplementsInterface(
				UInteractableInterface::StaticClass()))
		{
			IInteractableInterface::Execute_Interact(GetCurrentInteractable(), GetOwner());
			UE_LOG(LogTemp, Warning,
			       TEXT("Interaction attempted with Interactable Actor - TryInteract"));
		}
	}
	else
	{
		if (AActor* NewActor  = bUseContextAwareSolution ? GetCurrentInteractable_ContextAware() : GetCurrentInteractable();
			NewActor && NewActor->GetClass()->ImplementsInterface(UInteractableInterface::StaticClass()) && GetOwner())
		{
			IInteractableInterface::Execute_Interact(NewActor, GetOwner());

			UE_LOG(LogTemp, Warning,
			       TEXT("Interaction attempted with Interactable Actor - TryInteract"));
		}
	}
}

void UContextAwareInteractionComponent::ClearInteractionTimer()
{
	if (InteractionCheckTimerHandle.IsValid() && GetWorld()->GetTimerManager().IsTimerActive(
		InteractionCheckTimerHandle))
	{
		if (GetWorld())
		{
			GetWorld()->GetTimerManager().ClearTimer(InteractionCheckTimerHandle);

			UE_LOG(LogTemp, Warning,
			       TEXT("PerformInteractionCheck/PerformInteractionCheck_ContextAware"
				       " Timer has now been stopped - ClearInteractionTimer"));
		}
		else
		{
			UE_LOG(LogTemp, Warning,
			       TEXT("World is invalid. ClearInteractionTimer cannot be attempted"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning,
		       TEXT("PerformInteractionCheck/PerformInteractionCheck_ContextAware"
			       " Timer is not active, even though ClearInteractionTimer has just been called"));
	}
}

bool UContextAwareInteractionComponent::AreActorsFacingEachOther(const AActor* InteractingActor,
                                                                 const AActor* InteractableActor,
                                                                 float& ResultingAngleInteracting,
                                                                 float& ResultingAngleInteractable,
                                                                 const float AngleTolerance)
{
	if (!InteractingActor || !InteractableActor)
	{
		return false;
	}


	// Get the forward vectors of both the interactable actor and interacting actor
	const FVector InteractableForwardVector = InteractableActor->GetActorForwardVector();
	const FVector InteractingForwardVector = InteractingActor->GetActorForwardVector();

	// Direction vector from interacting actor to interactable actor
	const FVector DirectionFromInteractingToInteractable = (InteractableActor->GetActorLocation() - InteractingActor->
		GetActorLocation()).GetSafeNormal();

	// Check if the interacting actor is facing the interactable actor
	const float DotProductFromInteractingToInteractable = FVector::DotProduct(
		InteractingForwardVector, DirectionFromInteractingToInteractable);
	ResultingAngleInteracting = FMath::RadiansToDegrees(FMath::Acos(DotProductFromInteractingToInteractable));

	// Check if the interactable actor is facing the interacting actor
	const float DotProductFromInteractableToInteracting = FVector::DotProduct(
		InteractableForwardVector, -DirectionFromInteractingToInteractable);
	ResultingAngleInteractable = FMath::RadiansToDegrees(FMath::Acos(DotProductFromInteractableToInteracting));

	// If both actors are facing each other within the max angle, return true
	return ResultingAngleInteracting <= AngleTolerance && ResultingAngleInteractable <= AngleTolerance;
}

bool UContextAwareInteractionComponent::AttemptToAddInteractableActorToArray(AActor* NewInteractableActor,
	AActor*& AddedActor, TArray<AActor*>& ArrayOfInteractableActors) 
{
	if (NewInteractableActor)
	{
		if (GetAllCurrentlyPerceivedInteractableActors().IsEmpty())
		{
			AllCurrentlyPerceivedInteractableActors.Add(MakeWeakObjectPtr(NewInteractableActor));
			
			UE_LOG(LogTemp, Warning, TEXT("Array AllCurrentlyPerceivedInteractableActors was empty,"
								 " adding %s."), (NewInteractableActor ? *NewInteractableActor->GetName(): TEXT("None")));
		}

		else if (GetAllCurrentlyPerceivedInteractableActors().Contains(NewInteractableActor))
		{
			UE_LOG(LogTemp, Warning, TEXT("Array AllCurrentlyPerceivedInteractableActors already contains"
								 " the new interactable actor."));

			if (GetAllCurrentlyPerceivedInteractableActors().Num() > 1)
			{
				AllCurrentlyPerceivedInteractableActors.Swap(
				AllCurrentlyPerceivedInteractableActors.Find(NewInteractableActor), 0);

				UE_LOG(LogTemp, Warning, TEXT("%s has now be swapped with the element at Index 0 so that it is now"
								  "our CurrentInteractable"),
									(NewInteractableActor ? *NewInteractableActor->GetName(): TEXT("None")));
			}
			
		}
		
		else
		{
			AllCurrentlyPerceivedInteractableActors.Insert(MakeWeakObjectPtr(NewInteractableActor), 0);

			UE_LOG(LogTemp, Warning, TEXT("Array AllCurrentlyPerceivedInteractableActors was not empty,"
								 " inserted %s as first element (CurrentInteractable_ContextAware)"),
								 (NewInteractableActor ? *NewInteractableActor->GetName(): TEXT("None")));
		}
		
		AddedActor = NewInteractableActor;
		ArrayOfInteractableActors = GetAllCurrentlyPerceivedInteractableActors();

		UE_LOG(LogTemp, Warning, TEXT("Array AllCurrentlyPerceivedInteractableActors' length is now: %d"),
								 (ArrayOfInteractableActors.Num()));

		for (int32 i = 0; i < ArrayOfInteractableActors.Num(); i++)
		{
			UE_LOG(LogTemp, Warning, TEXT("Array AllCurrentlyPerceivedInteractableActors[%d] is: %s"),
								 (i), (ArrayOfInteractableActors[i] ? *ArrayOfInteractableActors[i]->GetName(): TEXT("None")));
		}
		return true;
		
	}
	
	UE_LOG(LogTemp, Warning, TEXT("NewInteractableActor is invalid, AddInteractableActorToArray returned false."));
	return false;
}


bool UContextAwareInteractionComponent::WasTheAttemptToAddInteractableActorToArraySuccessful(
	AActor* NewInteractableActor)
{
	AActor* AddedActor;
	TArray<AActor*> ArrayOfInteractableActors;

	return AttemptToAddInteractableActorToArray(NewInteractableActor, AddedActor, ArrayOfInteractableActors);
}

void UContextAwareInteractionComponent::RemoveInteractableActorsThatAreOutOfInteractionRangeInArray()
{
	if (!GetAllCurrentlyPerceivedInteractableActors().IsEmpty())
	{
		const AActor* Owner = GetOwner();

		// remove Interactable Actors that are out of range from the Array
		for (const auto& Actor : GetAllCurrentlyPerceivedInteractableActors())
		{
			if (const float DistanceToInteractable = FVector::Dist(Owner->GetActorLocation(),
				Actor->GetActorLocation()); DistanceToInteractable > InteractionRange && Actor)
			{
				if (Actor->GetClass()->ImplementsInterface(UInteractableInterface::StaticClass()))
				{
					IInteractableInterface::Execute_HideInteractionWidget(Actor);
				}
				
				AllCurrentlyPerceivedInteractableActors.Remove(Actor);

				UE_LOG(LogTemp, Warning, TEXT("Array AllCurrentlyPerceivedInteractableActors was not empty,"
						   "%s is out of InteractionRange. "
						   "It has been removed from the AllCurrentlyPerceivedInteractableActors array."),
							(Actor ? *Actor->GetName(): TEXT("None")));
				
				return;
			}
		}

		// let the player/character know about other interactable actors if they exist
		if (GetAllCurrentlyPerceivedInteractableActors().Num() > 0)
		{
			UE_LOG(LogTemp, Warning,
				   TEXT(
					   "There are InteractableActors within InteractionRange that we can possibly interact with "
								"if we meet interaction conditions."
								"This is shown by the Dot(s)."));

			for (const auto& InnerActor : GetAllCurrentlyPerceivedInteractableActors())
			{
				if (InnerActor && InnerActor != GetAllCurrentlyPerceivedInteractableActors()[0]
					&& InnerActor->GetClass()->ImplementsInterface(UInteractableInterface::StaticClass()))
				{
				
					IInteractableInterface::Execute_ShowPossibleInteractionDot(InnerActor);
				
					const int32 Index = GetAllCurrentlyPerceivedInteractableActors().Find(InnerActor);
				
					UE_LOG(LogTemp, Warning, TEXT("Possible Interactable Actor at Index %d is: %s"),
						Index, InnerActor ? *InnerActor->GetName(): TEXT("None"));
				}
			}
		}
		
	}
}

