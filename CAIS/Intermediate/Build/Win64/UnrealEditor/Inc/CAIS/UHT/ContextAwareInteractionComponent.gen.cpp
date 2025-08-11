// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CAIS/Public/ContextAwareInteractionComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContextAwareInteractionComponent() {}
// Cross Module References
	CAIS_API UClass* Z_Construct_UClass_UContextAwareInteractionComponent();
	CAIS_API UClass* Z_Construct_UClass_UContextAwareInteractionComponent_NoRegister();
	CAIS_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionComponentData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	UPackage* Z_Construct_UPackage__Script_CAIS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InteractionComponentData;
class UScriptStruct* FInteractionComponentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InteractionComponentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InteractionComponentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractionComponentData, (UObject*)Z_Construct_UPackage__Script_CAIS(), TEXT("InteractionComponentData"));
	}
	return Z_Registration_Info_UScriptStruct_InteractionComponentData.OuterSingleton;
}
template<> CAIS_API UScriptStruct* StaticStruct<FInteractionComponentData>()
{
	return FInteractionComponentData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInteractionComponentData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionCheckTimerRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionCheckTimerRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorRemovalTimerRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActorRemovalTimerRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionCheckTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionCheckTimerHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorRemovalTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorRemovalTimerHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionRangeModifier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionRangeModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceStartLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStartLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceStartRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStartRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseActorEyeViewPoint_MetaData[];
#endif
		static void NewProp_bUseActorEyeViewPoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseActorEyeViewPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCameraViewPoint_MetaData[];
#endif
		static void NewProp_bUseCameraViewPoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCameraViewPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseContextAwareSolution_MetaData[];
#endif
		static void NewProp_bUseContextAwareSolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseContextAwareSolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableInteractionCheckTimer_MetaData[];
#endif
		static void NewProp_bEnableInteractionCheckTimer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableInteractionCheckTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInteractable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentInteractable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInteractable_ContextAware_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentInteractable_ContextAware;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AllCurrentlyPerceivedInteractableActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllCurrentlyPerceivedInteractableActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllCurrentlyPerceivedInteractableActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInteractOnlyWithinSpecifiedAngle_MetaData[];
#endif
		static void NewProp_bInteractOnlyWithinSpecifiedAngle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInteractOnlyWithinSpecifiedAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngleToleranceForInteraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleToleranceForInteraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionComponentData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractionComponentData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_InteractionCheckTimerRate_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_InteractionCheckTimerRate = { "InteractionCheckTimerRate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractionComponentData, InteractionCheckTimerRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_InteractionCheckTimerRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_InteractionCheckTimerRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_ActorRemovalTimerRate_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_ActorRemovalTimerRate = { "ActorRemovalTimerRate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractionComponentData, ActorRemovalTimerRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_ActorRemovalTimerRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_ActorRemovalTimerRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_InteractionCheckTimerHandle_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_InteractionCheckTimerHandle = { "InteractionCheckTimerHandle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractionComponentData, InteractionCheckTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_InteractionCheckTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_InteractionCheckTimerHandle_MetaData)) }; // 3633724737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_ActorRemovalTimerHandle_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_ActorRemovalTimerHandle = { "ActorRemovalTimerHandle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractionComponentData, ActorRemovalTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_ActorRemovalTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_ActorRemovalTimerHandle_MetaData)) }; // 3633724737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_InteractionRange_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_InteractionRange = { "InteractionRange", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractionComponentData, InteractionRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_InteractionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_InteractionRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_InteractionRangeModifier_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_InteractionRangeModifier = { "InteractionRangeModifier", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractionComponentData, InteractionRangeModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_InteractionRangeModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_InteractionRangeModifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_TraceStartLocation_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_TraceStartLocation = { "TraceStartLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractionComponentData, TraceStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_TraceStartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_TraceStartLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_TraceStartRotation_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_TraceStartRotation = { "TraceStartRotation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractionComponentData, TraceStartRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_TraceStartRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_TraceStartRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bUseActorEyeViewPoint_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bUseActorEyeViewPoint_SetBit(void* Obj)
	{
		((FInteractionComponentData*)Obj)->bUseActorEyeViewPoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bUseActorEyeViewPoint = { "bUseActorEyeViewPoint", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInteractionComponentData), &Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bUseActorEyeViewPoint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bUseActorEyeViewPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bUseActorEyeViewPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bUseCameraViewPoint_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bUseCameraViewPoint_SetBit(void* Obj)
	{
		((FInteractionComponentData*)Obj)->bUseCameraViewPoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bUseCameraViewPoint = { "bUseCameraViewPoint", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInteractionComponentData), &Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bUseCameraViewPoint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bUseCameraViewPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bUseCameraViewPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bUseContextAwareSolution_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bUseContextAwareSolution_SetBit(void* Obj)
	{
		((FInteractionComponentData*)Obj)->bUseContextAwareSolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bUseContextAwareSolution = { "bUseContextAwareSolution", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInteractionComponentData), &Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bUseContextAwareSolution_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bUseContextAwareSolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bUseContextAwareSolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bEnableInteractionCheckTimer_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bEnableInteractionCheckTimer_SetBit(void* Obj)
	{
		((FInteractionComponentData*)Obj)->bEnableInteractionCheckTimer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bEnableInteractionCheckTimer = { "bEnableInteractionCheckTimer", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInteractionComponentData), &Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bEnableInteractionCheckTimer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bEnableInteractionCheckTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bEnableInteractionCheckTimer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_CurrentInteractable_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_CurrentInteractable = { "CurrentInteractable", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractionComponentData, CurrentInteractable), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_CurrentInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_CurrentInteractable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_CurrentInteractable_ContextAware_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_CurrentInteractable_ContextAware = { "CurrentInteractable_ContextAware", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractionComponentData, CurrentInteractable_ContextAware), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_CurrentInteractable_ContextAware_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_CurrentInteractable_ContextAware_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_AllCurrentlyPerceivedInteractableActors_Inner = { "AllCurrentlyPerceivedInteractableActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_AllCurrentlyPerceivedInteractableActors_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_AllCurrentlyPerceivedInteractableActors = { "AllCurrentlyPerceivedInteractableActors", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractionComponentData, AllCurrentlyPerceivedInteractableActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_AllCurrentlyPerceivedInteractableActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_AllCurrentlyPerceivedInteractableActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bInteractOnlyWithinSpecifiedAngle_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bInteractOnlyWithinSpecifiedAngle_SetBit(void* Obj)
	{
		((FInteractionComponentData*)Obj)->bInteractOnlyWithinSpecifiedAngle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bInteractOnlyWithinSpecifiedAngle = { "bInteractOnlyWithinSpecifiedAngle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInteractionComponentData), &Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bInteractOnlyWithinSpecifiedAngle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bInteractOnlyWithinSpecifiedAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bInteractOnlyWithinSpecifiedAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_AngleToleranceForInteraction_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_AngleToleranceForInteraction = { "AngleToleranceForInteraction", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractionComponentData, AngleToleranceForInteraction), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_AngleToleranceForInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_AngleToleranceForInteraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((FInteractionComponentData*)Obj)->bDrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInteractionComponentData), &Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bDrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bDrawDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_InteractionChannel_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_InteractionChannel = { "InteractionChannel", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractionComponentData, InteractionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_InteractionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_InteractionChannel_MetaData)) }; // 727872708
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractionComponentData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_InteractionCheckTimerRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_ActorRemovalTimerRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_InteractionCheckTimerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_ActorRemovalTimerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_InteractionRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_InteractionRangeModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_TraceStartLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_TraceStartRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bUseActorEyeViewPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bUseCameraViewPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bUseContextAwareSolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bEnableInteractionCheckTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_CurrentInteractable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_CurrentInteractable_ContextAware,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_AllCurrentlyPerceivedInteractableActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_AllCurrentlyPerceivedInteractableActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bInteractOnlyWithinSpecifiedAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_AngleToleranceForInteraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_bDrawDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewProp_InteractionChannel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractionComponentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CAIS,
		nullptr,
		&NewStructOps,
		"InteractionComponentData",
		sizeof(FInteractionComponentData),
		alignof(FInteractionComponentData),
		Z_Construct_UScriptStruct_FInteractionComponentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionComponentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInteractionComponentData()
	{
		if (!Z_Registration_Info_UScriptStruct_InteractionComponentData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InteractionComponentData.InnerSingleton, Z_Construct_UScriptStruct_FInteractionComponentData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InteractionComponentData.InnerSingleton;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execInitializeInteractionComponentParameters)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewInteractionCheckTimerRate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewActorRemovalTimerRate);
		P_GET_OBJECT(UCameraComponent,Z_Param_NewCameraToUse);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewInteractionRange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewInteractionRangeModifier);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewTraceStartLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewTraceStartRotation);
		P_GET_UBOOL(Z_Param_bNewUseActorEyeViewPoint);
		P_GET_UBOOL(Z_Param_bNewUseCameraViewPoint);
		P_GET_UBOOL(Z_Param_bNewUseContextAwareSolution);
		P_GET_UBOOL(Z_Param_bNewEnableInteractionCheckTimer);
		P_GET_UBOOL(Z_Param_bNewInteractOnlyWithinSpecifiedAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewAngleTolerance);
		P_GET_UBOOL(Z_Param_bNewDrawDebug);
		P_GET_PROPERTY(FByteProperty,Z_Param_NewChannelToUseForTrace);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeInteractionComponentParameters(Z_Param_NewInteractionCheckTimerRate,Z_Param_NewActorRemovalTimerRate,Z_Param_NewCameraToUse,Z_Param_NewInteractionRange,Z_Param_NewInteractionRangeModifier,Z_Param_Out_NewTraceStartLocation,Z_Param_Out_NewTraceStartRotation,Z_Param_bNewUseActorEyeViewPoint,Z_Param_bNewUseCameraViewPoint,Z_Param_bNewUseContextAwareSolution,Z_Param_bNewEnableInteractionCheckTimer,Z_Param_bNewInteractOnlyWithinSpecifiedAngle,Z_Param_NewAngleTolerance,Z_Param_bNewDrawDebug,ECollisionChannel(Z_Param_NewChannelToUseForTrace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execSetInteractionChannel)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ECollisionChannel>*)Z_Param__Result=P_THIS->SetInteractionChannel(ECollisionChannel(Z_Param_NewChannel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execSetDrawDebug)
	{
		P_GET_UBOOL(Z_Param_bNewDrawDebug);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDrawDebug(Z_Param_bNewDrawDebug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execSetAngleToleranceForInteraction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewAngleTolerance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAngleToleranceForInteraction(Z_Param_NewAngleTolerance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execSetInteractOnlyWithinSpecifiedAngle)
	{
		P_GET_UBOOL(Z_Param_bNewInteractOnlyWithinSpecifiedAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteractOnlyWithinSpecifiedAngle(Z_Param_bNewInteractOnlyWithinSpecifiedAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execSetEnableInteractionCheckTimer)
	{
		P_GET_UBOOL(Z_Param_bNewEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableInteractionCheckTimer(Z_Param_bNewEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execSetUseContextAwareSolution)
	{
		P_GET_UBOOL(Z_Param_bNewUse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseContextAwareSolution(Z_Param_bNewUse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execSetUseCameraViewPoint)
	{
		P_GET_UBOOL(Z_Param_bNewUse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseCameraViewPoint(Z_Param_bNewUse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execSetUseActorEyeViewPoint)
	{
		P_GET_UBOOL(Z_Param_bNewUse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseActorEyeViewPoint(Z_Param_bNewUse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execSetTraceStartRotation)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTraceStartRotation(Z_Param_Out_NewRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execSetTraceStartLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTraceStartLocation(Z_Param_Out_NewLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execSetCameraToUse)
	{
		P_GET_OBJECT(UCameraComponent,Z_Param_NewCamera);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraToUse(Z_Param_NewCamera);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execSetInteractionRangeModifier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewModifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteractionRangeModifier(Z_Param_NewModifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execSetInteractionRange)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteractionRange(Z_Param_NewRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execSetActorRemovalTimerRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->SetActorRemovalTimerRate(Z_Param_NewRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execSetInteractionCheckTimerRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->SetInteractionCheckTimerRate(Z_Param_NewRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execGetAllInteractionComponentData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInteractionComponentData*)Z_Param__Result=P_THIS->GetAllInteractionComponentData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execGetInteractionChannel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ECollisionChannel>*)Z_Param__Result=P_THIS->GetInteractionChannel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execGetDrawDebug)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDrawDebug();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execGetAngleToleranceForInteraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAngleToleranceForInteraction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execGetInteractOnlyWithinSpecifiedAngle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInteractOnlyWithinSpecifiedAngle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execGetEnableInteractionCheckTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEnableInteractionCheckTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execGetUseContextAwareSolution)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUseContextAwareSolution();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execGetUseCameraViewPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUseCameraViewPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execGetUseActorEyeViewPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUseActorEyeViewPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execGetTraceStartRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetTraceStartRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execGetTraceStartLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetTraceStartLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execGetInteractionRangeModifier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInteractionRangeModifier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execGetInteractionRange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInteractionRange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execGetActorRemovalTimerHandle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimerHandle*)Z_Param__Result=P_THIS->GetActorRemovalTimerHandle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execGetInteractionCheckTimerHandle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimerHandle*)Z_Param__Result=P_THIS->GetInteractionCheckTimerHandle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execGetActorRemovalTimerRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetActorRemovalTimerRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execGetInteractionCheckTimerRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInteractionCheckTimerRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execGetCurrentInteractable_ContextAware)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetCurrentInteractable_ContextAware();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execGetAllCurrentlyPerceivedInteractableActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetAllCurrentlyPerceivedInteractableActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execGetCurrentInteractable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetCurrentInteractable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execRemoveInteractableActorsThatAreOutOfInteractionRangeInArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveInteractableActorsThatAreOutOfInteractionRangeInArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execWasTheAttemptToAddInteractableActorToArraySuccessful)
	{
		P_GET_OBJECT(AActor,Z_Param_NewInteractableActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WasTheAttemptToAddInteractableActorToArraySuccessful(Z_Param_NewInteractableActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execAttemptToAddInteractableActorToArray)
	{
		P_GET_OBJECT(AActor,Z_Param_NewInteractableActor);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_AddedActor);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ArrayOfInteractableActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AttemptToAddInteractableActorToArray(Z_Param_NewInteractableActor,Z_Param_Out_AddedActor,Z_Param_Out_ArrayOfInteractableActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execAreActorsFacingEachOther)
	{
		P_GET_OBJECT(AActor,Z_Param_InteractingActor);
		P_GET_OBJECT(AActor,Z_Param_InteractableActor);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ResultingAngleInteracting);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ResultingAngleInteractable);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AngleTolerance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UContextAwareInteractionComponent::AreActorsFacingEachOther(Z_Param_InteractingActor,Z_Param_InteractableActor,Z_Param_Out_ResultingAngleInteracting,Z_Param_Out_ResultingAngleInteractable,Z_Param_AngleTolerance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execClearInteractionTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearInteractionTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execPerformInteractionCheck_ContextAware)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformInteractionCheck_ContextAware();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execPerformInteractionCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformInteractionCheck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextAwareInteractionComponent::execTryInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryInteract();
		P_NATIVE_END;
	}
	void UContextAwareInteractionComponent::StaticRegisterNativesUContextAwareInteractionComponent()
	{
		UClass* Class = UContextAwareInteractionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AreActorsFacingEachOther", &UContextAwareInteractionComponent::execAreActorsFacingEachOther },
			{ "AttemptToAddInteractableActorToArray", &UContextAwareInteractionComponent::execAttemptToAddInteractableActorToArray },
			{ "ClearInteractionTimer", &UContextAwareInteractionComponent::execClearInteractionTimer },
			{ "GetActorRemovalTimerHandle", &UContextAwareInteractionComponent::execGetActorRemovalTimerHandle },
			{ "GetActorRemovalTimerRate", &UContextAwareInteractionComponent::execGetActorRemovalTimerRate },
			{ "GetAllCurrentlyPerceivedInteractableActors", &UContextAwareInteractionComponent::execGetAllCurrentlyPerceivedInteractableActors },
			{ "GetAllInteractionComponentData", &UContextAwareInteractionComponent::execGetAllInteractionComponentData },
			{ "GetAngleToleranceForInteraction", &UContextAwareInteractionComponent::execGetAngleToleranceForInteraction },
			{ "GetCurrentInteractable", &UContextAwareInteractionComponent::execGetCurrentInteractable },
			{ "GetCurrentInteractable_ContextAware", &UContextAwareInteractionComponent::execGetCurrentInteractable_ContextAware },
			{ "GetDrawDebug", &UContextAwareInteractionComponent::execGetDrawDebug },
			{ "GetEnableInteractionCheckTimer", &UContextAwareInteractionComponent::execGetEnableInteractionCheckTimer },
			{ "GetInteractionChannel", &UContextAwareInteractionComponent::execGetInteractionChannel },
			{ "GetInteractionCheckTimerHandle", &UContextAwareInteractionComponent::execGetInteractionCheckTimerHandle },
			{ "GetInteractionCheckTimerRate", &UContextAwareInteractionComponent::execGetInteractionCheckTimerRate },
			{ "GetInteractionRange", &UContextAwareInteractionComponent::execGetInteractionRange },
			{ "GetInteractionRangeModifier", &UContextAwareInteractionComponent::execGetInteractionRangeModifier },
			{ "GetInteractOnlyWithinSpecifiedAngle", &UContextAwareInteractionComponent::execGetInteractOnlyWithinSpecifiedAngle },
			{ "GetTraceStartLocation", &UContextAwareInteractionComponent::execGetTraceStartLocation },
			{ "GetTraceStartRotation", &UContextAwareInteractionComponent::execGetTraceStartRotation },
			{ "GetUseActorEyeViewPoint", &UContextAwareInteractionComponent::execGetUseActorEyeViewPoint },
			{ "GetUseCameraViewPoint", &UContextAwareInteractionComponent::execGetUseCameraViewPoint },
			{ "GetUseContextAwareSolution", &UContextAwareInteractionComponent::execGetUseContextAwareSolution },
			{ "InitializeInteractionComponentParameters", &UContextAwareInteractionComponent::execInitializeInteractionComponentParameters },
			{ "PerformInteractionCheck", &UContextAwareInteractionComponent::execPerformInteractionCheck },
			{ "PerformInteractionCheck_ContextAware", &UContextAwareInteractionComponent::execPerformInteractionCheck_ContextAware },
			{ "RemoveInteractableActorsThatAreOutOfInteractionRangeInArray", &UContextAwareInteractionComponent::execRemoveInteractableActorsThatAreOutOfInteractionRangeInArray },
			{ "SetActorRemovalTimerRate", &UContextAwareInteractionComponent::execSetActorRemovalTimerRate },
			{ "SetAngleToleranceForInteraction", &UContextAwareInteractionComponent::execSetAngleToleranceForInteraction },
			{ "SetCameraToUse", &UContextAwareInteractionComponent::execSetCameraToUse },
			{ "SetDrawDebug", &UContextAwareInteractionComponent::execSetDrawDebug },
			{ "SetEnableInteractionCheckTimer", &UContextAwareInteractionComponent::execSetEnableInteractionCheckTimer },
			{ "SetInteractionChannel", &UContextAwareInteractionComponent::execSetInteractionChannel },
			{ "SetInteractionCheckTimerRate", &UContextAwareInteractionComponent::execSetInteractionCheckTimerRate },
			{ "SetInteractionRange", &UContextAwareInteractionComponent::execSetInteractionRange },
			{ "SetInteractionRangeModifier", &UContextAwareInteractionComponent::execSetInteractionRangeModifier },
			{ "SetInteractOnlyWithinSpecifiedAngle", &UContextAwareInteractionComponent::execSetInteractOnlyWithinSpecifiedAngle },
			{ "SetTraceStartLocation", &UContextAwareInteractionComponent::execSetTraceStartLocation },
			{ "SetTraceStartRotation", &UContextAwareInteractionComponent::execSetTraceStartRotation },
			{ "SetUseActorEyeViewPoint", &UContextAwareInteractionComponent::execSetUseActorEyeViewPoint },
			{ "SetUseCameraViewPoint", &UContextAwareInteractionComponent::execSetUseCameraViewPoint },
			{ "SetUseContextAwareSolution", &UContextAwareInteractionComponent::execSetUseContextAwareSolution },
			{ "TryInteract", &UContextAwareInteractionComponent::execTryInteract },
			{ "WasTheAttemptToAddInteractableActorToArraySuccessful", &UContextAwareInteractionComponent::execWasTheAttemptToAddInteractableActorToArraySuccessful },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics
	{
		struct ContextAwareInteractionComponent_eventAreActorsFacingEachOther_Parms
		{
			const AActor* InteractingActor;
			const AActor* InteractableActor;
			float ResultingAngleInteracting;
			float ResultingAngleInteractable;
			float AngleTolerance;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractingActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractableActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractableActor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ResultingAngleInteracting;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ResultingAngleInteractable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngleTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleTolerance;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::NewProp_InteractingActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::NewProp_InteractingActor = { "InteractingActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventAreActorsFacingEachOther_Parms, InteractingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::NewProp_InteractingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::NewProp_InteractingActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::NewProp_InteractableActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::NewProp_InteractableActor = { "InteractableActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventAreActorsFacingEachOther_Parms, InteractableActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::NewProp_InteractableActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::NewProp_InteractableActor_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::NewProp_ResultingAngleInteracting = { "ResultingAngleInteracting", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventAreActorsFacingEachOther_Parms, ResultingAngleInteracting), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::NewProp_ResultingAngleInteractable = { "ResultingAngleInteractable", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventAreActorsFacingEachOther_Parms, ResultingAngleInteractable), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::NewProp_AngleTolerance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::NewProp_AngleTolerance = { "AngleTolerance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventAreActorsFacingEachOther_Parms, AngleTolerance), METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::NewProp_AngleTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::NewProp_AngleTolerance_MetaData)) };
	void Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ContextAwareInteractionComponent_eventAreActorsFacingEachOther_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextAwareInteractionComponent_eventAreActorsFacingEachOther_Parms), &Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::NewProp_InteractingActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::NewProp_InteractableActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::NewProp_ResultingAngleInteracting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::NewProp_ResultingAngleInteractable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::NewProp_AngleTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "// Helper function to check if two actors are facing each other within a certain angle\n" },
		{ "CPP_Default_AngleTolerance", "10.000000" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
		{ "ToolTip", "Helper function to check if two actors are facing each other within a certain angle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "AreActorsFacingEachOther", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::ContextAwareInteractionComponent_eventAreActorsFacingEachOther_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14482401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_AttemptToAddInteractableActorToArray_Statics
	{
		struct ContextAwareInteractionComponent_eventAttemptToAddInteractableActorToArray_Parms
		{
			AActor* NewInteractableActor;
			AActor* AddedActor;
			TArray<AActor*> ArrayOfInteractableActors;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewInteractableActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AddedActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrayOfInteractableActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayOfInteractableActors;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_AttemptToAddInteractableActorToArray_Statics::NewProp_NewInteractableActor = { "NewInteractableActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventAttemptToAddInteractableActorToArray_Parms, NewInteractableActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_AttemptToAddInteractableActorToArray_Statics::NewProp_AddedActor = { "AddedActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventAttemptToAddInteractableActorToArray_Parms, AddedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_AttemptToAddInteractableActorToArray_Statics::NewProp_ArrayOfInteractableActors_Inner = { "ArrayOfInteractableActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_AttemptToAddInteractableActorToArray_Statics::NewProp_ArrayOfInteractableActors = { "ArrayOfInteractableActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventAttemptToAddInteractableActorToArray_Parms, ArrayOfInteractableActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UContextAwareInteractionComponent_AttemptToAddInteractableActorToArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ContextAwareInteractionComponent_eventAttemptToAddInteractableActorToArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_AttemptToAddInteractableActorToArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextAwareInteractionComponent_eventAttemptToAddInteractableActorToArray_Parms), &Z_Construct_UFunction_UContextAwareInteractionComponent_AttemptToAddInteractableActorToArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_AttemptToAddInteractableActorToArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_AttemptToAddInteractableActorToArray_Statics::NewProp_NewInteractableActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_AttemptToAddInteractableActorToArray_Statics::NewProp_AddedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_AttemptToAddInteractableActorToArray_Statics::NewProp_ArrayOfInteractableActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_AttemptToAddInteractableActorToArray_Statics::NewProp_ArrayOfInteractableActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_AttemptToAddInteractableActorToArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_AttemptToAddInteractableActorToArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_AttemptToAddInteractableActorToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "AttemptToAddInteractableActorToArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_AttemptToAddInteractableActorToArray_Statics::ContextAwareInteractionComponent_eventAttemptToAddInteractableActorToArray_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_AttemptToAddInteractableActorToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_AttemptToAddInteractableActorToArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_AttemptToAddInteractableActorToArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_AttemptToAddInteractableActorToArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_AttemptToAddInteractableActorToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_AttemptToAddInteractableActorToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_ClearInteractionTimer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_ClearInteractionTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_ClearInteractionTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "ClearInteractionTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_ClearInteractionTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_ClearInteractionTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_ClearInteractionTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_ClearInteractionTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_GetActorRemovalTimerHandle_Statics
	{
		struct ContextAwareInteractionComponent_eventGetActorRemovalTimerHandle_Parms
		{
			FTimerHandle ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetActorRemovalTimerHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventGetActorRemovalTimerHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(nullptr, 0) }; // 3633724737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_GetActorRemovalTimerHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_GetActorRemovalTimerHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_GetActorRemovalTimerHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetActorRemovalTimerHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "GetActorRemovalTimerHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_GetActorRemovalTimerHandle_Statics::ContextAwareInteractionComponent_eventGetActorRemovalTimerHandle_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_GetActorRemovalTimerHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetActorRemovalTimerHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_GetActorRemovalTimerHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetActorRemovalTimerHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_GetActorRemovalTimerHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_GetActorRemovalTimerHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_GetActorRemovalTimerRate_Statics
	{
		struct ContextAwareInteractionComponent_eventGetActorRemovalTimerRate_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetActorRemovalTimerRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventGetActorRemovalTimerRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_GetActorRemovalTimerRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_GetActorRemovalTimerRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_GetActorRemovalTimerRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetActorRemovalTimerRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "GetActorRemovalTimerRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_GetActorRemovalTimerRate_Statics::ContextAwareInteractionComponent_eventGetActorRemovalTimerRate_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_GetActorRemovalTimerRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetActorRemovalTimerRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_GetActorRemovalTimerRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetActorRemovalTimerRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_GetActorRemovalTimerRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_GetActorRemovalTimerRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllCurrentlyPerceivedInteractableActors_Statics
	{
		struct ContextAwareInteractionComponent_eventGetAllCurrentlyPerceivedInteractableActors_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllCurrentlyPerceivedInteractableActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllCurrentlyPerceivedInteractableActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventGetAllCurrentlyPerceivedInteractableActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllCurrentlyPerceivedInteractableActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllCurrentlyPerceivedInteractableActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllCurrentlyPerceivedInteractableActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllCurrentlyPerceivedInteractableActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllCurrentlyPerceivedInteractableActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "GetAllCurrentlyPerceivedInteractableActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllCurrentlyPerceivedInteractableActors_Statics::ContextAwareInteractionComponent_eventGetAllCurrentlyPerceivedInteractableActors_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllCurrentlyPerceivedInteractableActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllCurrentlyPerceivedInteractableActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllCurrentlyPerceivedInteractableActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllCurrentlyPerceivedInteractableActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllCurrentlyPerceivedInteractableActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllCurrentlyPerceivedInteractableActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllInteractionComponentData_Statics
	{
		struct ContextAwareInteractionComponent_eventGetAllInteractionComponentData_Parms
		{
			FInteractionComponentData ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllInteractionComponentData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventGetAllInteractionComponentData_Parms, ReturnValue), Z_Construct_UScriptStruct_FInteractionComponentData, METADATA_PARAMS(nullptr, 0) }; // 1209879202
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllInteractionComponentData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllInteractionComponentData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllInteractionComponentData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllInteractionComponentData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "GetAllInteractionComponentData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllInteractionComponentData_Statics::ContextAwareInteractionComponent_eventGetAllInteractionComponentData_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllInteractionComponentData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllInteractionComponentData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllInteractionComponentData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllInteractionComponentData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllInteractionComponentData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllInteractionComponentData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_GetAngleToleranceForInteraction_Statics
	{
		struct ContextAwareInteractionComponent_eventGetAngleToleranceForInteraction_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetAngleToleranceForInteraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventGetAngleToleranceForInteraction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_GetAngleToleranceForInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_GetAngleToleranceForInteraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_GetAngleToleranceForInteraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetAngleToleranceForInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "GetAngleToleranceForInteraction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_GetAngleToleranceForInteraction_Statics::ContextAwareInteractionComponent_eventGetAngleToleranceForInteraction_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_GetAngleToleranceForInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetAngleToleranceForInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_GetAngleToleranceForInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetAngleToleranceForInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_GetAngleToleranceForInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_GetAngleToleranceForInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_GetCurrentInteractable_Statics
	{
		struct ContextAwareInteractionComponent_eventGetCurrentInteractable_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetCurrentInteractable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventGetCurrentInteractable_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_GetCurrentInteractable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_GetCurrentInteractable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_GetCurrentInteractable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "Comment", "//Getters\n" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
		{ "ToolTip", "Getters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetCurrentInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "GetCurrentInteractable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_GetCurrentInteractable_Statics::ContextAwareInteractionComponent_eventGetCurrentInteractable_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_GetCurrentInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetCurrentInteractable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_GetCurrentInteractable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetCurrentInteractable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_GetCurrentInteractable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_GetCurrentInteractable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_GetCurrentInteractable_ContextAware_Statics
	{
		struct ContextAwareInteractionComponent_eventGetCurrentInteractable_ContextAware_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetCurrentInteractable_ContextAware_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventGetCurrentInteractable_ContextAware_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_GetCurrentInteractable_ContextAware_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_GetCurrentInteractable_ContextAware_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_GetCurrentInteractable_ContextAware_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetCurrentInteractable_ContextAware_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "GetCurrentInteractable_ContextAware", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_GetCurrentInteractable_ContextAware_Statics::ContextAwareInteractionComponent_eventGetCurrentInteractable_ContextAware_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_GetCurrentInteractable_ContextAware_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetCurrentInteractable_ContextAware_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_GetCurrentInteractable_ContextAware_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetCurrentInteractable_ContextAware_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_GetCurrentInteractable_ContextAware()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_GetCurrentInteractable_ContextAware_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_GetDrawDebug_Statics
	{
		struct ContextAwareInteractionComponent_eventGetDrawDebug_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UContextAwareInteractionComponent_GetDrawDebug_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ContextAwareInteractionComponent_eventGetDrawDebug_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetDrawDebug_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextAwareInteractionComponent_eventGetDrawDebug_Parms), &Z_Construct_UFunction_UContextAwareInteractionComponent_GetDrawDebug_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_GetDrawDebug_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_GetDrawDebug_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_GetDrawDebug_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetDrawDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "GetDrawDebug", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_GetDrawDebug_Statics::ContextAwareInteractionComponent_eventGetDrawDebug_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_GetDrawDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetDrawDebug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_GetDrawDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetDrawDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_GetDrawDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_GetDrawDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_GetEnableInteractionCheckTimer_Statics
	{
		struct ContextAwareInteractionComponent_eventGetEnableInteractionCheckTimer_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UContextAwareInteractionComponent_GetEnableInteractionCheckTimer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ContextAwareInteractionComponent_eventGetEnableInteractionCheckTimer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetEnableInteractionCheckTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextAwareInteractionComponent_eventGetEnableInteractionCheckTimer_Parms), &Z_Construct_UFunction_UContextAwareInteractionComponent_GetEnableInteractionCheckTimer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_GetEnableInteractionCheckTimer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_GetEnableInteractionCheckTimer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_GetEnableInteractionCheckTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetEnableInteractionCheckTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "GetEnableInteractionCheckTimer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_GetEnableInteractionCheckTimer_Statics::ContextAwareInteractionComponent_eventGetEnableInteractionCheckTimer_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_GetEnableInteractionCheckTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetEnableInteractionCheckTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_GetEnableInteractionCheckTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetEnableInteractionCheckTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_GetEnableInteractionCheckTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_GetEnableInteractionCheckTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionChannel_Statics
	{
		struct ContextAwareInteractionComponent_eventGetInteractionChannel_Parms
		{
			TEnumAsByte<ECollisionChannel> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventGetInteractionChannel_Parms, ReturnValue), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) }; // 727872708
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "GetInteractionChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionChannel_Statics::ContextAwareInteractionComponent_eventGetInteractionChannel_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionCheckTimerHandle_Statics
	{
		struct ContextAwareInteractionComponent_eventGetInteractionCheckTimerHandle_Parms
		{
			FTimerHandle ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionCheckTimerHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventGetInteractionCheckTimerHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(nullptr, 0) }; // 3633724737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionCheckTimerHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionCheckTimerHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionCheckTimerHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionCheckTimerHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "GetInteractionCheckTimerHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionCheckTimerHandle_Statics::ContextAwareInteractionComponent_eventGetInteractionCheckTimerHandle_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionCheckTimerHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionCheckTimerHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionCheckTimerHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionCheckTimerHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionCheckTimerHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionCheckTimerHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionCheckTimerRate_Statics
	{
		struct ContextAwareInteractionComponent_eventGetInteractionCheckTimerRate_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionCheckTimerRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventGetInteractionCheckTimerRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionCheckTimerRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionCheckTimerRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionCheckTimerRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionCheckTimerRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "GetInteractionCheckTimerRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionCheckTimerRate_Statics::ContextAwareInteractionComponent_eventGetInteractionCheckTimerRate_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionCheckTimerRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionCheckTimerRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionCheckTimerRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionCheckTimerRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionCheckTimerRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionCheckTimerRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionRange_Statics
	{
		struct ContextAwareInteractionComponent_eventGetInteractionRange_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventGetInteractionRange_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "GetInteractionRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionRange_Statics::ContextAwareInteractionComponent_eventGetInteractionRange_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionRangeModifier_Statics
	{
		struct ContextAwareInteractionComponent_eventGetInteractionRangeModifier_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionRangeModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventGetInteractionRangeModifier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionRangeModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionRangeModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionRangeModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionRangeModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "GetInteractionRangeModifier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionRangeModifier_Statics::ContextAwareInteractionComponent_eventGetInteractionRangeModifier_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionRangeModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionRangeModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionRangeModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionRangeModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionRangeModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionRangeModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractOnlyWithinSpecifiedAngle_Statics
	{
		struct ContextAwareInteractionComponent_eventGetInteractOnlyWithinSpecifiedAngle_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractOnlyWithinSpecifiedAngle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ContextAwareInteractionComponent_eventGetInteractOnlyWithinSpecifiedAngle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractOnlyWithinSpecifiedAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextAwareInteractionComponent_eventGetInteractOnlyWithinSpecifiedAngle_Parms), &Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractOnlyWithinSpecifiedAngle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractOnlyWithinSpecifiedAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractOnlyWithinSpecifiedAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractOnlyWithinSpecifiedAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractOnlyWithinSpecifiedAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "GetInteractOnlyWithinSpecifiedAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractOnlyWithinSpecifiedAngle_Statics::ContextAwareInteractionComponent_eventGetInteractOnlyWithinSpecifiedAngle_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractOnlyWithinSpecifiedAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractOnlyWithinSpecifiedAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractOnlyWithinSpecifiedAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractOnlyWithinSpecifiedAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractOnlyWithinSpecifiedAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractOnlyWithinSpecifiedAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_GetTraceStartLocation_Statics
	{
		struct ContextAwareInteractionComponent_eventGetTraceStartLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetTraceStartLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventGetTraceStartLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_GetTraceStartLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_GetTraceStartLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_GetTraceStartLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetTraceStartLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "GetTraceStartLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_GetTraceStartLocation_Statics::ContextAwareInteractionComponent_eventGetTraceStartLocation_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_GetTraceStartLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetTraceStartLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_GetTraceStartLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetTraceStartLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_GetTraceStartLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_GetTraceStartLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_GetTraceStartRotation_Statics
	{
		struct ContextAwareInteractionComponent_eventGetTraceStartRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetTraceStartRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventGetTraceStartRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_GetTraceStartRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_GetTraceStartRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_GetTraceStartRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetTraceStartRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "GetTraceStartRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_GetTraceStartRotation_Statics::ContextAwareInteractionComponent_eventGetTraceStartRotation_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_GetTraceStartRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetTraceStartRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_GetTraceStartRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetTraceStartRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_GetTraceStartRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_GetTraceStartRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseActorEyeViewPoint_Statics
	{
		struct ContextAwareInteractionComponent_eventGetUseActorEyeViewPoint_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseActorEyeViewPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ContextAwareInteractionComponent_eventGetUseActorEyeViewPoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseActorEyeViewPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextAwareInteractionComponent_eventGetUseActorEyeViewPoint_Parms), &Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseActorEyeViewPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseActorEyeViewPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseActorEyeViewPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseActorEyeViewPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseActorEyeViewPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "GetUseActorEyeViewPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseActorEyeViewPoint_Statics::ContextAwareInteractionComponent_eventGetUseActorEyeViewPoint_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseActorEyeViewPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseActorEyeViewPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseActorEyeViewPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseActorEyeViewPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseActorEyeViewPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseActorEyeViewPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseCameraViewPoint_Statics
	{
		struct ContextAwareInteractionComponent_eventGetUseCameraViewPoint_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseCameraViewPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ContextAwareInteractionComponent_eventGetUseCameraViewPoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseCameraViewPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextAwareInteractionComponent_eventGetUseCameraViewPoint_Parms), &Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseCameraViewPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseCameraViewPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseCameraViewPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseCameraViewPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseCameraViewPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "GetUseCameraViewPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseCameraViewPoint_Statics::ContextAwareInteractionComponent_eventGetUseCameraViewPoint_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseCameraViewPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseCameraViewPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseCameraViewPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseCameraViewPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseCameraViewPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseCameraViewPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseContextAwareSolution_Statics
	{
		struct ContextAwareInteractionComponent_eventGetUseContextAwareSolution_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseContextAwareSolution_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ContextAwareInteractionComponent_eventGetUseContextAwareSolution_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseContextAwareSolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextAwareInteractionComponent_eventGetUseContextAwareSolution_Parms), &Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseContextAwareSolution_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseContextAwareSolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseContextAwareSolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseContextAwareSolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseContextAwareSolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "GetUseContextAwareSolution", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseContextAwareSolution_Statics::ContextAwareInteractionComponent_eventGetUseContextAwareSolution_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseContextAwareSolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseContextAwareSolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseContextAwareSolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseContextAwareSolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseContextAwareSolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseContextAwareSolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics
	{
		struct ContextAwareInteractionComponent_eventInitializeInteractionComponentParameters_Parms
		{
			float NewInteractionCheckTimerRate;
			float NewActorRemovalTimerRate;
			UCameraComponent* NewCameraToUse;
			float NewInteractionRange;
			float NewInteractionRangeModifier;
			FVector NewTraceStartLocation;
			FRotator NewTraceStartRotation;
			bool bNewUseActorEyeViewPoint;
			bool bNewUseCameraViewPoint;
			bool bNewUseContextAwareSolution;
			bool bNewEnableInteractionCheckTimer;
			bool bNewInteractOnlyWithinSpecifiedAngle;
			float NewAngleTolerance;
			bool bNewDrawDebug;
			TEnumAsByte<ECollisionChannel> NewChannelToUseForTrace;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewInteractionCheckTimerRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewInteractionCheckTimerRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewActorRemovalTimerRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewActorRemovalTimerRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewCameraToUse_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCameraToUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewInteractionRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewInteractionRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewInteractionRangeModifier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewInteractionRangeModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewTraceStartLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTraceStartLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewTraceStartRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTraceStartRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewUseActorEyeViewPoint_MetaData[];
#endif
		static void NewProp_bNewUseActorEyeViewPoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewUseActorEyeViewPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewUseCameraViewPoint_MetaData[];
#endif
		static void NewProp_bNewUseCameraViewPoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewUseCameraViewPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewUseContextAwareSolution_MetaData[];
#endif
		static void NewProp_bNewUseContextAwareSolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewUseContextAwareSolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewEnableInteractionCheckTimer_MetaData[];
#endif
		static void NewProp_bNewEnableInteractionCheckTimer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewEnableInteractionCheckTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewInteractOnlyWithinSpecifiedAngle_MetaData[];
#endif
		static void NewProp_bNewInteractOnlyWithinSpecifiedAngle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewInteractOnlyWithinSpecifiedAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAngleTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewAngleTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewDrawDebug_MetaData[];
#endif
		static void NewProp_bNewDrawDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewDrawDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewChannelToUseForTrace_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewChannelToUseForTrace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewInteractionCheckTimerRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewInteractionCheckTimerRate = { "NewInteractionCheckTimerRate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventInitializeInteractionComponentParameters_Parms, NewInteractionCheckTimerRate), METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewInteractionCheckTimerRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewInteractionCheckTimerRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewActorRemovalTimerRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewActorRemovalTimerRate = { "NewActorRemovalTimerRate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventInitializeInteractionComponentParameters_Parms, NewActorRemovalTimerRate), METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewActorRemovalTimerRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewActorRemovalTimerRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewCameraToUse_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewCameraToUse = { "NewCameraToUse", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventInitializeInteractionComponentParameters_Parms, NewCameraToUse), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewCameraToUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewCameraToUse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewInteractionRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewInteractionRange = { "NewInteractionRange", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventInitializeInteractionComponentParameters_Parms, NewInteractionRange), METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewInteractionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewInteractionRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewInteractionRangeModifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewInteractionRangeModifier = { "NewInteractionRangeModifier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventInitializeInteractionComponentParameters_Parms, NewInteractionRangeModifier), METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewInteractionRangeModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewInteractionRangeModifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewTraceStartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewTraceStartLocation = { "NewTraceStartLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventInitializeInteractionComponentParameters_Parms, NewTraceStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewTraceStartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewTraceStartLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewTraceStartRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewTraceStartRotation = { "NewTraceStartRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventInitializeInteractionComponentParameters_Parms, NewTraceStartRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewTraceStartRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewTraceStartRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewUseActorEyeViewPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewUseActorEyeViewPoint_SetBit(void* Obj)
	{
		((ContextAwareInteractionComponent_eventInitializeInteractionComponentParameters_Parms*)Obj)->bNewUseActorEyeViewPoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewUseActorEyeViewPoint = { "bNewUseActorEyeViewPoint", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextAwareInteractionComponent_eventInitializeInteractionComponentParameters_Parms), &Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewUseActorEyeViewPoint_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewUseActorEyeViewPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewUseActorEyeViewPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewUseCameraViewPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewUseCameraViewPoint_SetBit(void* Obj)
	{
		((ContextAwareInteractionComponent_eventInitializeInteractionComponentParameters_Parms*)Obj)->bNewUseCameraViewPoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewUseCameraViewPoint = { "bNewUseCameraViewPoint", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextAwareInteractionComponent_eventInitializeInteractionComponentParameters_Parms), &Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewUseCameraViewPoint_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewUseCameraViewPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewUseCameraViewPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewUseContextAwareSolution_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewUseContextAwareSolution_SetBit(void* Obj)
	{
		((ContextAwareInteractionComponent_eventInitializeInteractionComponentParameters_Parms*)Obj)->bNewUseContextAwareSolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewUseContextAwareSolution = { "bNewUseContextAwareSolution", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextAwareInteractionComponent_eventInitializeInteractionComponentParameters_Parms), &Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewUseContextAwareSolution_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewUseContextAwareSolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewUseContextAwareSolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewEnableInteractionCheckTimer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewEnableInteractionCheckTimer_SetBit(void* Obj)
	{
		((ContextAwareInteractionComponent_eventInitializeInteractionComponentParameters_Parms*)Obj)->bNewEnableInteractionCheckTimer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewEnableInteractionCheckTimer = { "bNewEnableInteractionCheckTimer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextAwareInteractionComponent_eventInitializeInteractionComponentParameters_Parms), &Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewEnableInteractionCheckTimer_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewEnableInteractionCheckTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewEnableInteractionCheckTimer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewInteractOnlyWithinSpecifiedAngle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewInteractOnlyWithinSpecifiedAngle_SetBit(void* Obj)
	{
		((ContextAwareInteractionComponent_eventInitializeInteractionComponentParameters_Parms*)Obj)->bNewInteractOnlyWithinSpecifiedAngle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewInteractOnlyWithinSpecifiedAngle = { "bNewInteractOnlyWithinSpecifiedAngle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextAwareInteractionComponent_eventInitializeInteractionComponentParameters_Parms), &Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewInteractOnlyWithinSpecifiedAngle_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewInteractOnlyWithinSpecifiedAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewInteractOnlyWithinSpecifiedAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewAngleTolerance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewAngleTolerance = { "NewAngleTolerance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventInitializeInteractionComponentParameters_Parms, NewAngleTolerance), METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewAngleTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewAngleTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewDrawDebug_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewDrawDebug_SetBit(void* Obj)
	{
		((ContextAwareInteractionComponent_eventInitializeInteractionComponentParameters_Parms*)Obj)->bNewDrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewDrawDebug = { "bNewDrawDebug", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextAwareInteractionComponent_eventInitializeInteractionComponentParameters_Parms), &Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewDrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewDrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewDrawDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewChannelToUseForTrace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewChannelToUseForTrace = { "NewChannelToUseForTrace", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventInitializeInteractionComponentParameters_Parms, NewChannelToUseForTrace), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewChannelToUseForTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewChannelToUseForTrace_MetaData)) }; // 727872708
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewInteractionCheckTimerRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewActorRemovalTimerRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewCameraToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewInteractionRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewInteractionRangeModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewTraceStartLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewTraceStartRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewUseActorEyeViewPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewUseCameraViewPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewUseContextAwareSolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewEnableInteractionCheckTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewInteractOnlyWithinSpecifiedAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewAngleTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_bNewDrawDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::NewProp_NewChannelToUseForTrace,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "InitializeInteractionComponentParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::ContextAwareInteractionComponent_eventInitializeInteractionComponentParameters_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_PerformInteractionCheck_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_PerformInteractionCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_PerformInteractionCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "PerformInteractionCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_PerformInteractionCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_PerformInteractionCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_PerformInteractionCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_PerformInteractionCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_PerformInteractionCheck_ContextAware_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_PerformInteractionCheck_ContextAware_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_PerformInteractionCheck_ContextAware_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "PerformInteractionCheck_ContextAware", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_PerformInteractionCheck_ContextAware_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_PerformInteractionCheck_ContextAware_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_PerformInteractionCheck_ContextAware()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_PerformInteractionCheck_ContextAware_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_RemoveInteractableActorsThatAreOutOfInteractionRangeInArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_RemoveInteractableActorsThatAreOutOfInteractionRangeInArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_RemoveInteractableActorsThatAreOutOfInteractionRangeInArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "RemoveInteractableActorsThatAreOutOfInteractionRangeInArray", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_RemoveInteractableActorsThatAreOutOfInteractionRangeInArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_RemoveInteractableActorsThatAreOutOfInteractionRangeInArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_RemoveInteractableActorsThatAreOutOfInteractionRangeInArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_RemoveInteractableActorsThatAreOutOfInteractionRangeInArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_SetActorRemovalTimerRate_Statics
	{
		struct ContextAwareInteractionComponent_eventSetActorRemovalTimerRate_Parms
		{
			float NewRate;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetActorRemovalTimerRate_Statics::NewProp_NewRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetActorRemovalTimerRate_Statics::NewProp_NewRate = { "NewRate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventSetActorRemovalTimerRate_Parms, NewRate), METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetActorRemovalTimerRate_Statics::NewProp_NewRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetActorRemovalTimerRate_Statics::NewProp_NewRate_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetActorRemovalTimerRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventSetActorRemovalTimerRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_SetActorRemovalTimerRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_SetActorRemovalTimerRate_Statics::NewProp_NewRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_SetActorRemovalTimerRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetActorRemovalTimerRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetActorRemovalTimerRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "SetActorRemovalTimerRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_SetActorRemovalTimerRate_Statics::ContextAwareInteractionComponent_eventSetActorRemovalTimerRate_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_SetActorRemovalTimerRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetActorRemovalTimerRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetActorRemovalTimerRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetActorRemovalTimerRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_SetActorRemovalTimerRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_SetActorRemovalTimerRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_SetAngleToleranceForInteraction_Statics
	{
		struct ContextAwareInteractionComponent_eventSetAngleToleranceForInteraction_Parms
		{
			float NewAngleTolerance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAngleTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewAngleTolerance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetAngleToleranceForInteraction_Statics::NewProp_NewAngleTolerance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetAngleToleranceForInteraction_Statics::NewProp_NewAngleTolerance = { "NewAngleTolerance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventSetAngleToleranceForInteraction_Parms, NewAngleTolerance), METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetAngleToleranceForInteraction_Statics::NewProp_NewAngleTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetAngleToleranceForInteraction_Statics::NewProp_NewAngleTolerance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_SetAngleToleranceForInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_SetAngleToleranceForInteraction_Statics::NewProp_NewAngleTolerance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetAngleToleranceForInteraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetAngleToleranceForInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "SetAngleToleranceForInteraction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_SetAngleToleranceForInteraction_Statics::ContextAwareInteractionComponent_eventSetAngleToleranceForInteraction_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_SetAngleToleranceForInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetAngleToleranceForInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetAngleToleranceForInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetAngleToleranceForInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_SetAngleToleranceForInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_SetAngleToleranceForInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_SetCameraToUse_Statics
	{
		struct ContextAwareInteractionComponent_eventSetCameraToUse_Parms
		{
			UCameraComponent* NewCamera;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetCameraToUse_Statics::NewProp_NewCamera_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetCameraToUse_Statics::NewProp_NewCamera = { "NewCamera", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventSetCameraToUse_Parms, NewCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetCameraToUse_Statics::NewProp_NewCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetCameraToUse_Statics::NewProp_NewCamera_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_SetCameraToUse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_SetCameraToUse_Statics::NewProp_NewCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetCameraToUse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetCameraToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "SetCameraToUse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_SetCameraToUse_Statics::ContextAwareInteractionComponent_eventSetCameraToUse_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_SetCameraToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetCameraToUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetCameraToUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetCameraToUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_SetCameraToUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_SetCameraToUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_SetDrawDebug_Statics
	{
		struct ContextAwareInteractionComponent_eventSetDrawDebug_Parms
		{
			bool bNewDrawDebug;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewDrawDebug_MetaData[];
#endif
		static void NewProp_bNewDrawDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewDrawDebug;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetDrawDebug_Statics::NewProp_bNewDrawDebug_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UContextAwareInteractionComponent_SetDrawDebug_Statics::NewProp_bNewDrawDebug_SetBit(void* Obj)
	{
		((ContextAwareInteractionComponent_eventSetDrawDebug_Parms*)Obj)->bNewDrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetDrawDebug_Statics::NewProp_bNewDrawDebug = { "bNewDrawDebug", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextAwareInteractionComponent_eventSetDrawDebug_Parms), &Z_Construct_UFunction_UContextAwareInteractionComponent_SetDrawDebug_Statics::NewProp_bNewDrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetDrawDebug_Statics::NewProp_bNewDrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetDrawDebug_Statics::NewProp_bNewDrawDebug_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_SetDrawDebug_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_SetDrawDebug_Statics::NewProp_bNewDrawDebug,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetDrawDebug_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetDrawDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "SetDrawDebug", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_SetDrawDebug_Statics::ContextAwareInteractionComponent_eventSetDrawDebug_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_SetDrawDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetDrawDebug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetDrawDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetDrawDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_SetDrawDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_SetDrawDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_SetEnableInteractionCheckTimer_Statics
	{
		struct ContextAwareInteractionComponent_eventSetEnableInteractionCheckTimer_Parms
		{
			bool bNewEnable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewEnable_MetaData[];
#endif
		static void NewProp_bNewEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetEnableInteractionCheckTimer_Statics::NewProp_bNewEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UContextAwareInteractionComponent_SetEnableInteractionCheckTimer_Statics::NewProp_bNewEnable_SetBit(void* Obj)
	{
		((ContextAwareInteractionComponent_eventSetEnableInteractionCheckTimer_Parms*)Obj)->bNewEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetEnableInteractionCheckTimer_Statics::NewProp_bNewEnable = { "bNewEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextAwareInteractionComponent_eventSetEnableInteractionCheckTimer_Parms), &Z_Construct_UFunction_UContextAwareInteractionComponent_SetEnableInteractionCheckTimer_Statics::NewProp_bNewEnable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetEnableInteractionCheckTimer_Statics::NewProp_bNewEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetEnableInteractionCheckTimer_Statics::NewProp_bNewEnable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_SetEnableInteractionCheckTimer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_SetEnableInteractionCheckTimer_Statics::NewProp_bNewEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetEnableInteractionCheckTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetEnableInteractionCheckTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "SetEnableInteractionCheckTimer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_SetEnableInteractionCheckTimer_Statics::ContextAwareInteractionComponent_eventSetEnableInteractionCheckTimer_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_SetEnableInteractionCheckTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetEnableInteractionCheckTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetEnableInteractionCheckTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetEnableInteractionCheckTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_SetEnableInteractionCheckTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_SetEnableInteractionCheckTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionChannel_Statics
	{
		struct ContextAwareInteractionComponent_eventSetInteractionChannel_Parms
		{
			TEnumAsByte<ECollisionChannel> NewChannel;
			TEnumAsByte<ECollisionChannel> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewChannel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionChannel_Statics::NewProp_NewChannel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionChannel_Statics::NewProp_NewChannel = { "NewChannel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventSetInteractionChannel_Parms, NewChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionChannel_Statics::NewProp_NewChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionChannel_Statics::NewProp_NewChannel_MetaData)) }; // 727872708
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventSetInteractionChannel_Parms, ReturnValue), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) }; // 727872708
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionChannel_Statics::NewProp_NewChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "SetInteractionChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionChannel_Statics::ContextAwareInteractionComponent_eventSetInteractionChannel_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionCheckTimerRate_Statics
	{
		struct ContextAwareInteractionComponent_eventSetInteractionCheckTimerRate_Parms
		{
			float NewRate;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionCheckTimerRate_Statics::NewProp_NewRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionCheckTimerRate_Statics::NewProp_NewRate = { "NewRate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventSetInteractionCheckTimerRate_Parms, NewRate), METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionCheckTimerRate_Statics::NewProp_NewRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionCheckTimerRate_Statics::NewProp_NewRate_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionCheckTimerRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventSetInteractionCheckTimerRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionCheckTimerRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionCheckTimerRate_Statics::NewProp_NewRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionCheckTimerRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionCheckTimerRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setters" },
		{ "Comment", "//Setter functions and Initialization\n" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
		{ "ToolTip", "Setter functions and Initialization" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionCheckTimerRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "SetInteractionCheckTimerRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionCheckTimerRate_Statics::ContextAwareInteractionComponent_eventSetInteractionCheckTimerRate_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionCheckTimerRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionCheckTimerRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionCheckTimerRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionCheckTimerRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionCheckTimerRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionCheckTimerRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRange_Statics
	{
		struct ContextAwareInteractionComponent_eventSetInteractionRange_Parms
		{
			float NewRange;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRange_Statics::NewProp_NewRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRange_Statics::NewProp_NewRange = { "NewRange", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventSetInteractionRange_Parms, NewRange), METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRange_Statics::NewProp_NewRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRange_Statics::NewProp_NewRange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRange_Statics::NewProp_NewRange,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "SetInteractionRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRange_Statics::ContextAwareInteractionComponent_eventSetInteractionRange_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRangeModifier_Statics
	{
		struct ContextAwareInteractionComponent_eventSetInteractionRangeModifier_Parms
		{
			float NewModifier;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewModifier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewModifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRangeModifier_Statics::NewProp_NewModifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRangeModifier_Statics::NewProp_NewModifier = { "NewModifier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventSetInteractionRangeModifier_Parms, NewModifier), METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRangeModifier_Statics::NewProp_NewModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRangeModifier_Statics::NewProp_NewModifier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRangeModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRangeModifier_Statics::NewProp_NewModifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRangeModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRangeModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "SetInteractionRangeModifier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRangeModifier_Statics::ContextAwareInteractionComponent_eventSetInteractionRangeModifier_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRangeModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRangeModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRangeModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRangeModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRangeModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRangeModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractOnlyWithinSpecifiedAngle_Statics
	{
		struct ContextAwareInteractionComponent_eventSetInteractOnlyWithinSpecifiedAngle_Parms
		{
			bool bNewInteractOnlyWithinSpecifiedAngle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewInteractOnlyWithinSpecifiedAngle_MetaData[];
#endif
		static void NewProp_bNewInteractOnlyWithinSpecifiedAngle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewInteractOnlyWithinSpecifiedAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractOnlyWithinSpecifiedAngle_Statics::NewProp_bNewInteractOnlyWithinSpecifiedAngle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractOnlyWithinSpecifiedAngle_Statics::NewProp_bNewInteractOnlyWithinSpecifiedAngle_SetBit(void* Obj)
	{
		((ContextAwareInteractionComponent_eventSetInteractOnlyWithinSpecifiedAngle_Parms*)Obj)->bNewInteractOnlyWithinSpecifiedAngle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractOnlyWithinSpecifiedAngle_Statics::NewProp_bNewInteractOnlyWithinSpecifiedAngle = { "bNewInteractOnlyWithinSpecifiedAngle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextAwareInteractionComponent_eventSetInteractOnlyWithinSpecifiedAngle_Parms), &Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractOnlyWithinSpecifiedAngle_Statics::NewProp_bNewInteractOnlyWithinSpecifiedAngle_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractOnlyWithinSpecifiedAngle_Statics::NewProp_bNewInteractOnlyWithinSpecifiedAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractOnlyWithinSpecifiedAngle_Statics::NewProp_bNewInteractOnlyWithinSpecifiedAngle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractOnlyWithinSpecifiedAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractOnlyWithinSpecifiedAngle_Statics::NewProp_bNewInteractOnlyWithinSpecifiedAngle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractOnlyWithinSpecifiedAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractOnlyWithinSpecifiedAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "SetInteractOnlyWithinSpecifiedAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractOnlyWithinSpecifiedAngle_Statics::ContextAwareInteractionComponent_eventSetInteractOnlyWithinSpecifiedAngle_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractOnlyWithinSpecifiedAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractOnlyWithinSpecifiedAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractOnlyWithinSpecifiedAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractOnlyWithinSpecifiedAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractOnlyWithinSpecifiedAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractOnlyWithinSpecifiedAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartLocation_Statics
	{
		struct ContextAwareInteractionComponent_eventSetTraceStartLocation_Parms
		{
			FVector NewLocation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartLocation_Statics::NewProp_NewLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartLocation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventSetTraceStartLocation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartLocation_Statics::NewProp_NewLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartLocation_Statics::NewProp_NewLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartLocation_Statics::NewProp_NewLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setters | Trace" },
		{ "Comment", "/**\n\x09\x09\x09* Sets the start location for tracing.\n\x09\x09\x09* \n\x09\x09\x09* This should be used when bUseContextAwareSolution, bUseCameraViewPoint and bUseActorEyeViewPoint are all false.\n\x09\x09\x09* See [SetTraceStartRotation](@link SetTraceStartRotation) for setting rotation.\n\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
		{ "ToolTip", "Sets the start location for tracing.\n\nThis should be used when bUseContextAwareSolution, bUseCameraViewPoint and bUseActorEyeViewPoint are all false.\nSee [SetTraceStartRotation](@link SetTraceStartRotation) for setting rotation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "SetTraceStartLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartLocation_Statics::ContextAwareInteractionComponent_eventSetTraceStartLocation_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartRotation_Statics
	{
		struct ContextAwareInteractionComponent_eventSetTraceStartRotation_Parms
		{
			FRotator NewRotation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartRotation_Statics::NewProp_NewRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventSetTraceStartRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartRotation_Statics::NewProp_NewRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartRotation_Statics::NewProp_NewRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartRotation_Statics::NewProp_NewRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setters | Trace" },
		{ "Comment", "/**\n\x09\x09\x09* Sets the start rotation for tracing.\n\x09\x09\x09* \n\x09\x09\x09* This should be used when bUseContextAwareSolution, bUseCameraViewPoint and bUseActorEyeViewPoint are all false.\n\x09\x09\x09* See [SetTraceStartLocation](@link SetTraceStartLocation) for setting location.\n\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
		{ "ToolTip", "Sets the start rotation for tracing.\n\nThis should be used when bUseContextAwareSolution, bUseCameraViewPoint and bUseActorEyeViewPoint are all false.\nSee [SetTraceStartLocation](@link SetTraceStartLocation) for setting location." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "SetTraceStartRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartRotation_Statics::ContextAwareInteractionComponent_eventSetTraceStartRotation_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseActorEyeViewPoint_Statics
	{
		struct ContextAwareInteractionComponent_eventSetUseActorEyeViewPoint_Parms
		{
			bool bNewUse;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewUse_MetaData[];
#endif
		static void NewProp_bNewUse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewUse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseActorEyeViewPoint_Statics::NewProp_bNewUse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseActorEyeViewPoint_Statics::NewProp_bNewUse_SetBit(void* Obj)
	{
		((ContextAwareInteractionComponent_eventSetUseActorEyeViewPoint_Parms*)Obj)->bNewUse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseActorEyeViewPoint_Statics::NewProp_bNewUse = { "bNewUse", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextAwareInteractionComponent_eventSetUseActorEyeViewPoint_Parms), &Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseActorEyeViewPoint_Statics::NewProp_bNewUse_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseActorEyeViewPoint_Statics::NewProp_bNewUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseActorEyeViewPoint_Statics::NewProp_bNewUse_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseActorEyeViewPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseActorEyeViewPoint_Statics::NewProp_bNewUse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseActorEyeViewPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseActorEyeViewPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "SetUseActorEyeViewPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseActorEyeViewPoint_Statics::ContextAwareInteractionComponent_eventSetUseActorEyeViewPoint_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseActorEyeViewPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseActorEyeViewPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseActorEyeViewPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseActorEyeViewPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseActorEyeViewPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseActorEyeViewPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseCameraViewPoint_Statics
	{
		struct ContextAwareInteractionComponent_eventSetUseCameraViewPoint_Parms
		{
			bool bNewUse;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewUse_MetaData[];
#endif
		static void NewProp_bNewUse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewUse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseCameraViewPoint_Statics::NewProp_bNewUse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseCameraViewPoint_Statics::NewProp_bNewUse_SetBit(void* Obj)
	{
		((ContextAwareInteractionComponent_eventSetUseCameraViewPoint_Parms*)Obj)->bNewUse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseCameraViewPoint_Statics::NewProp_bNewUse = { "bNewUse", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextAwareInteractionComponent_eventSetUseCameraViewPoint_Parms), &Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseCameraViewPoint_Statics::NewProp_bNewUse_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseCameraViewPoint_Statics::NewProp_bNewUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseCameraViewPoint_Statics::NewProp_bNewUse_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseCameraViewPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseCameraViewPoint_Statics::NewProp_bNewUse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseCameraViewPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseCameraViewPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "SetUseCameraViewPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseCameraViewPoint_Statics::ContextAwareInteractionComponent_eventSetUseCameraViewPoint_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseCameraViewPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseCameraViewPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseCameraViewPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseCameraViewPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseCameraViewPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseCameraViewPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseContextAwareSolution_Statics
	{
		struct ContextAwareInteractionComponent_eventSetUseContextAwareSolution_Parms
		{
			bool bNewUse;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewUse_MetaData[];
#endif
		static void NewProp_bNewUse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewUse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseContextAwareSolution_Statics::NewProp_bNewUse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseContextAwareSolution_Statics::NewProp_bNewUse_SetBit(void* Obj)
	{
		((ContextAwareInteractionComponent_eventSetUseContextAwareSolution_Parms*)Obj)->bNewUse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseContextAwareSolution_Statics::NewProp_bNewUse = { "bNewUse", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextAwareInteractionComponent_eventSetUseContextAwareSolution_Parms), &Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseContextAwareSolution_Statics::NewProp_bNewUse_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseContextAwareSolution_Statics::NewProp_bNewUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseContextAwareSolution_Statics::NewProp_bNewUse_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseContextAwareSolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseContextAwareSolution_Statics::NewProp_bNewUse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseContextAwareSolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setters" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseContextAwareSolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "SetUseContextAwareSolution", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseContextAwareSolution_Statics::ContextAwareInteractionComponent_eventSetUseContextAwareSolution_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseContextAwareSolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseContextAwareSolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseContextAwareSolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseContextAwareSolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseContextAwareSolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseContextAwareSolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_TryInteract_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_TryInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_TryInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "TryInteract", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_TryInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_TryInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_TryInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_TryInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextAwareInteractionComponent_WasTheAttemptToAddInteractableActorToArraySuccessful_Statics
	{
		struct ContextAwareInteractionComponent_eventWasTheAttemptToAddInteractableActorToArraySuccessful_Parms
		{
			AActor* NewInteractableActor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewInteractableActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_WasTheAttemptToAddInteractableActorToArraySuccessful_Statics::NewProp_NewInteractableActor = { "NewInteractableActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextAwareInteractionComponent_eventWasTheAttemptToAddInteractableActorToArraySuccessful_Parms, NewInteractableActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UContextAwareInteractionComponent_WasTheAttemptToAddInteractableActorToArraySuccessful_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ContextAwareInteractionComponent_eventWasTheAttemptToAddInteractableActorToArraySuccessful_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextAwareInteractionComponent_WasTheAttemptToAddInteractableActorToArraySuccessful_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextAwareInteractionComponent_eventWasTheAttemptToAddInteractableActorToArraySuccessful_Parms), &Z_Construct_UFunction_UContextAwareInteractionComponent_WasTheAttemptToAddInteractableActorToArraySuccessful_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextAwareInteractionComponent_WasTheAttemptToAddInteractableActorToArraySuccessful_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_WasTheAttemptToAddInteractableActorToArraySuccessful_Statics::NewProp_NewInteractableActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextAwareInteractionComponent_WasTheAttemptToAddInteractableActorToArraySuccessful_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextAwareInteractionComponent_WasTheAttemptToAddInteractableActorToArraySuccessful_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/*\x09""check whether we could add an Interactable Actor to the storage array,\n\x09\x09\x09or whether the array already contains the Interactable Actor\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
		{ "ToolTip", "check whether we could add an Interactable Actor to the storage array,\n               or whether the array already contains the Interactable Actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextAwareInteractionComponent_WasTheAttemptToAddInteractableActorToArraySuccessful_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextAwareInteractionComponent, nullptr, "WasTheAttemptToAddInteractableActorToArraySuccessful", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextAwareInteractionComponent_WasTheAttemptToAddInteractableActorToArraySuccessful_Statics::ContextAwareInteractionComponent_eventWasTheAttemptToAddInteractableActorToArraySuccessful_Parms), Z_Construct_UFunction_UContextAwareInteractionComponent_WasTheAttemptToAddInteractableActorToArraySuccessful_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_WasTheAttemptToAddInteractableActorToArraySuccessful_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextAwareInteractionComponent_WasTheAttemptToAddInteractableActorToArraySuccessful_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextAwareInteractionComponent_WasTheAttemptToAddInteractableActorToArraySuccessful_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextAwareInteractionComponent_WasTheAttemptToAddInteractableActorToArraySuccessful()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextAwareInteractionComponent_WasTheAttemptToAddInteractableActorToArraySuccessful_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContextAwareInteractionComponent);
	UClass* Z_Construct_UClass_UContextAwareInteractionComponent_NoRegister()
	{
		return UContextAwareInteractionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UContextAwareInteractionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraToUse_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraToUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionCheckTimerRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionCheckTimerRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorRemovalTimerRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActorRemovalTimerRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionRangeModifier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionRangeModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceStartLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStartLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceStartRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStartRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseActorEyeViewPoint_MetaData[];
#endif
		static void NewProp_bUseActorEyeViewPoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseActorEyeViewPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCameraViewPoint_MetaData[];
#endif
		static void NewProp_bUseCameraViewPoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCameraViewPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseContextAwareSolution_MetaData[];
#endif
		static void NewProp_bUseContextAwareSolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseContextAwareSolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableInteractionCheckTimer_MetaData[];
#endif
		static void NewProp_bEnableInteractionCheckTimer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableInteractionCheckTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInteractOnlyWithinSpecifiedAngle_MetaData[];
#endif
		static void NewProp_bInteractOnlyWithinSpecifiedAngle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInteractOnlyWithinSpecifiedAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngleToleranceForInteraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleToleranceForInteraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContextAwareInteractionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CAIS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UContextAwareInteractionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_AreActorsFacingEachOther, "AreActorsFacingEachOther" }, // 1140515981
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_AttemptToAddInteractableActorToArray, "AttemptToAddInteractableActorToArray" }, // 2840971034
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_ClearInteractionTimer, "ClearInteractionTimer" }, // 1853334789
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_GetActorRemovalTimerHandle, "GetActorRemovalTimerHandle" }, // 2739569948
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_GetActorRemovalTimerRate, "GetActorRemovalTimerRate" }, // 3499522055
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllCurrentlyPerceivedInteractableActors, "GetAllCurrentlyPerceivedInteractableActors" }, // 2539032703
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_GetAllInteractionComponentData, "GetAllInteractionComponentData" }, // 705923829
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_GetAngleToleranceForInteraction, "GetAngleToleranceForInteraction" }, // 3666080021
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_GetCurrentInteractable, "GetCurrentInteractable" }, // 3007635922
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_GetCurrentInteractable_ContextAware, "GetCurrentInteractable_ContextAware" }, // 1707747001
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_GetDrawDebug, "GetDrawDebug" }, // 3404522832
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_GetEnableInteractionCheckTimer, "GetEnableInteractionCheckTimer" }, // 3767748694
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionChannel, "GetInteractionChannel" }, // 4188631963
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionCheckTimerHandle, "GetInteractionCheckTimerHandle" }, // 438341424
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionCheckTimerRate, "GetInteractionCheckTimerRate" }, // 2414039674
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionRange, "GetInteractionRange" }, // 2992108361
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractionRangeModifier, "GetInteractionRangeModifier" }, // 2477571871
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_GetInteractOnlyWithinSpecifiedAngle, "GetInteractOnlyWithinSpecifiedAngle" }, // 3835556724
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_GetTraceStartLocation, "GetTraceStartLocation" }, // 656667140
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_GetTraceStartRotation, "GetTraceStartRotation" }, // 3539520797
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseActorEyeViewPoint, "GetUseActorEyeViewPoint" }, // 4271138425
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseCameraViewPoint, "GetUseCameraViewPoint" }, // 3576750112
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_GetUseContextAwareSolution, "GetUseContextAwareSolution" }, // 322775510
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_InitializeInteractionComponentParameters, "InitializeInteractionComponentParameters" }, // 2066691278
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_PerformInteractionCheck, "PerformInteractionCheck" }, // 2149638260
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_PerformInteractionCheck_ContextAware, "PerformInteractionCheck_ContextAware" }, // 2663314990
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_RemoveInteractableActorsThatAreOutOfInteractionRangeInArray, "RemoveInteractableActorsThatAreOutOfInteractionRangeInArray" }, // 2222879363
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_SetActorRemovalTimerRate, "SetActorRemovalTimerRate" }, // 3277689792
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_SetAngleToleranceForInteraction, "SetAngleToleranceForInteraction" }, // 3854832747
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_SetCameraToUse, "SetCameraToUse" }, // 434351263
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_SetDrawDebug, "SetDrawDebug" }, // 2895345303
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_SetEnableInteractionCheckTimer, "SetEnableInteractionCheckTimer" }, // 3273799417
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionChannel, "SetInteractionChannel" }, // 2783611783
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionCheckTimerRate, "SetInteractionCheckTimerRate" }, // 3296032348
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRange, "SetInteractionRange" }, // 2467883601
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractionRangeModifier, "SetInteractionRangeModifier" }, // 3319467852
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_SetInteractOnlyWithinSpecifiedAngle, "SetInteractOnlyWithinSpecifiedAngle" }, // 4089686961
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartLocation, "SetTraceStartLocation" }, // 1820775856
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_SetTraceStartRotation, "SetTraceStartRotation" }, // 2881000296
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseActorEyeViewPoint, "SetUseActorEyeViewPoint" }, // 2767780255
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseCameraViewPoint, "SetUseCameraViewPoint" }, // 2989266241
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_SetUseContextAwareSolution, "SetUseContextAwareSolution" }, // 224363593
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_TryInteract, "TryInteract" }, // 2350719065
		{ &Z_Construct_UFunction_UContextAwareInteractionComponent_WasTheAttemptToAddInteractableActorToArraySuccessful, "WasTheAttemptToAddInteractableActorToArraySuccessful" }, // 3960909323
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextAwareInteractionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "DisplayName", "Context-Aware Interaction Component" },
		{ "IncludePath", "ContextAwareInteractionComponent.h" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_CameraToUse_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_CameraToUse = { "CameraToUse", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextAwareInteractionComponent, CameraToUse), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_CameraToUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_CameraToUse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_InteractionCheckTimerRate_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_InteractionCheckTimerRate = { "InteractionCheckTimerRate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextAwareInteractionComponent, InteractionCheckTimerRate), METADATA_PARAMS(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_InteractionCheckTimerRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_InteractionCheckTimerRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_ActorRemovalTimerRate_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_ActorRemovalTimerRate = { "ActorRemovalTimerRate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextAwareInteractionComponent, ActorRemovalTimerRate), METADATA_PARAMS(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_ActorRemovalTimerRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_ActorRemovalTimerRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_InteractionRange_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_InteractionRange = { "InteractionRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextAwareInteractionComponent, InteractionRange), METADATA_PARAMS(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_InteractionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_InteractionRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_InteractionRangeModifier_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_InteractionRangeModifier = { "InteractionRangeModifier", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextAwareInteractionComponent, InteractionRangeModifier), METADATA_PARAMS(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_InteractionRangeModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_InteractionRangeModifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_TraceStartLocation_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_TraceStartLocation = { "TraceStartLocation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextAwareInteractionComponent, TraceStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_TraceStartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_TraceStartLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_TraceStartRotation_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_TraceStartRotation = { "TraceStartRotation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextAwareInteractionComponent, TraceStartRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_TraceStartRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_TraceStartRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bUseActorEyeViewPoint_MetaData[] = {
		{ "Category", "Interaction | Algorithm" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bUseActorEyeViewPoint_SetBit(void* Obj)
	{
		((UContextAwareInteractionComponent*)Obj)->bUseActorEyeViewPoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bUseActorEyeViewPoint = { "bUseActorEyeViewPoint", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UContextAwareInteractionComponent), &Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bUseActorEyeViewPoint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bUseActorEyeViewPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bUseActorEyeViewPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bUseCameraViewPoint_MetaData[] = {
		{ "Category", "Interaction | Algorithm" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bUseCameraViewPoint_SetBit(void* Obj)
	{
		((UContextAwareInteractionComponent*)Obj)->bUseCameraViewPoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bUseCameraViewPoint = { "bUseCameraViewPoint", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UContextAwareInteractionComponent), &Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bUseCameraViewPoint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bUseCameraViewPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bUseCameraViewPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bUseContextAwareSolution_MetaData[] = {
		{ "Category", "Interaction | Algorithm" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bUseContextAwareSolution_SetBit(void* Obj)
	{
		((UContextAwareInteractionComponent*)Obj)->bUseContextAwareSolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bUseContextAwareSolution = { "bUseContextAwareSolution", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UContextAwareInteractionComponent), &Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bUseContextAwareSolution_SetBit, METADATA_PARAMS(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bUseContextAwareSolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bUseContextAwareSolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bEnableInteractionCheckTimer_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bEnableInteractionCheckTimer_SetBit(void* Obj)
	{
		((UContextAwareInteractionComponent*)Obj)->bEnableInteractionCheckTimer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bEnableInteractionCheckTimer = { "bEnableInteractionCheckTimer", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UContextAwareInteractionComponent), &Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bEnableInteractionCheckTimer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bEnableInteractionCheckTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bEnableInteractionCheckTimer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bInteractOnlyWithinSpecifiedAngle_MetaData[] = {
		{ "Category", "Interaction | Algorithm" },
		{ "EditCondition", "bUseActorEyeViewPoint" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bInteractOnlyWithinSpecifiedAngle_SetBit(void* Obj)
	{
		((UContextAwareInteractionComponent*)Obj)->bInteractOnlyWithinSpecifiedAngle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bInteractOnlyWithinSpecifiedAngle = { "bInteractOnlyWithinSpecifiedAngle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UContextAwareInteractionComponent), &Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bInteractOnlyWithinSpecifiedAngle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bInteractOnlyWithinSpecifiedAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bInteractOnlyWithinSpecifiedAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_AngleToleranceForInteraction_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_AngleToleranceForInteraction = { "AngleToleranceForInteraction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextAwareInteractionComponent, AngleToleranceForInteraction), METADATA_PARAMS(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_AngleToleranceForInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_AngleToleranceForInteraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((UContextAwareInteractionComponent*)Obj)->bDrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UContextAwareInteractionComponent), &Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bDrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bDrawDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_InteractionChannel_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ContextAwareInteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_InteractionChannel = { "InteractionChannel", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextAwareInteractionComponent, InteractionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_InteractionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_InteractionChannel_MetaData)) }; // 727872708
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContextAwareInteractionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_CameraToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_InteractionCheckTimerRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_ActorRemovalTimerRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_InteractionRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_InteractionRangeModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_TraceStartLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_TraceStartRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bUseActorEyeViewPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bUseCameraViewPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bUseContextAwareSolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bEnableInteractionCheckTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bInteractOnlyWithinSpecifiedAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_AngleToleranceForInteraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_bDrawDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextAwareInteractionComponent_Statics::NewProp_InteractionChannel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContextAwareInteractionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContextAwareInteractionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContextAwareInteractionComponent_Statics::ClassParams = {
		&UContextAwareInteractionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UContextAwareInteractionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContextAwareInteractionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContextAwareInteractionComponent()
	{
		if (!Z_Registration_Info_UClass_UContextAwareInteractionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContextAwareInteractionComponent.OuterSingleton, Z_Construct_UClass_UContextAwareInteractionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContextAwareInteractionComponent.OuterSingleton;
	}
	template<> CAIS_API UClass* StaticClass<UContextAwareInteractionComponent>()
	{
		return UContextAwareInteractionComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContextAwareInteractionComponent);
	UContextAwareInteractionComponent::~UContextAwareInteractionComponent() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_Statics::ScriptStructInfo[] = {
		{ FInteractionComponentData::StaticStruct, Z_Construct_UScriptStruct_FInteractionComponentData_Statics::NewStructOps, TEXT("InteractionComponentData"), &Z_Registration_Info_UScriptStruct_InteractionComponentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteractionComponentData), 1209879202U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContextAwareInteractionComponent, UContextAwareInteractionComponent::StaticClass, TEXT("UContextAwareInteractionComponent"), &Z_Registration_Info_UClass_UContextAwareInteractionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContextAwareInteractionComponent), 1706669957U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_3739423143(TEXT("/Script/CAIS"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
