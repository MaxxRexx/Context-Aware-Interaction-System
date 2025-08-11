// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContextAwareInteractionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UCameraComponent;
struct FInteractionComponentData;
struct FTimerHandle;
#ifdef CAIS_ContextAwareInteractionComponent_generated_h
#error "ContextAwareInteractionComponent.generated.h already included, missing '#pragma once' in ContextAwareInteractionComponent.h"
#endif
#define CAIS_ContextAwareInteractionComponent_generated_h

#define FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInteractionComponentData_Statics; \
	CAIS_API static class UScriptStruct* StaticStruct();


template<> CAIS_API UScriptStruct* StaticStruct<struct FInteractionComponentData>();

#define FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_78_SPARSE_DATA
#define FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_78_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitializeInteractionComponentParameters); \
	DECLARE_FUNCTION(execSetInteractionChannel); \
	DECLARE_FUNCTION(execSetDrawDebug); \
	DECLARE_FUNCTION(execSetAngleToleranceForInteraction); \
	DECLARE_FUNCTION(execSetInteractOnlyWithinSpecifiedAngle); \
	DECLARE_FUNCTION(execSetEnableInteractionCheckTimer); \
	DECLARE_FUNCTION(execSetUseContextAwareSolution); \
	DECLARE_FUNCTION(execSetUseCameraViewPoint); \
	DECLARE_FUNCTION(execSetUseActorEyeViewPoint); \
	DECLARE_FUNCTION(execSetTraceStartRotation); \
	DECLARE_FUNCTION(execSetTraceStartLocation); \
	DECLARE_FUNCTION(execSetCameraToUse); \
	DECLARE_FUNCTION(execSetInteractionRangeModifier); \
	DECLARE_FUNCTION(execSetInteractionRange); \
	DECLARE_FUNCTION(execSetActorRemovalTimerRate); \
	DECLARE_FUNCTION(execSetInteractionCheckTimerRate); \
	DECLARE_FUNCTION(execGetAllInteractionComponentData); \
	DECLARE_FUNCTION(execGetInteractionChannel); \
	DECLARE_FUNCTION(execGetDrawDebug); \
	DECLARE_FUNCTION(execGetAngleToleranceForInteraction); \
	DECLARE_FUNCTION(execGetInteractOnlyWithinSpecifiedAngle); \
	DECLARE_FUNCTION(execGetEnableInteractionCheckTimer); \
	DECLARE_FUNCTION(execGetUseContextAwareSolution); \
	DECLARE_FUNCTION(execGetUseCameraViewPoint); \
	DECLARE_FUNCTION(execGetUseActorEyeViewPoint); \
	DECLARE_FUNCTION(execGetTraceStartRotation); \
	DECLARE_FUNCTION(execGetTraceStartLocation); \
	DECLARE_FUNCTION(execGetInteractionRangeModifier); \
	DECLARE_FUNCTION(execGetInteractionRange); \
	DECLARE_FUNCTION(execGetActorRemovalTimerHandle); \
	DECLARE_FUNCTION(execGetInteractionCheckTimerHandle); \
	DECLARE_FUNCTION(execGetActorRemovalTimerRate); \
	DECLARE_FUNCTION(execGetInteractionCheckTimerRate); \
	DECLARE_FUNCTION(execGetCurrentInteractable_ContextAware); \
	DECLARE_FUNCTION(execGetAllCurrentlyPerceivedInteractableActors); \
	DECLARE_FUNCTION(execGetCurrentInteractable); \
	DECLARE_FUNCTION(execRemoveInteractableActorsThatAreOutOfInteractionRangeInArray); \
	DECLARE_FUNCTION(execWasTheAttemptToAddInteractableActorToArraySuccessful); \
	DECLARE_FUNCTION(execAttemptToAddInteractableActorToArray); \
	DECLARE_FUNCTION(execAreActorsFacingEachOther); \
	DECLARE_FUNCTION(execClearInteractionTimer); \
	DECLARE_FUNCTION(execPerformInteractionCheck_ContextAware); \
	DECLARE_FUNCTION(execPerformInteractionCheck); \
	DECLARE_FUNCTION(execTryInteract);


#define FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitializeInteractionComponentParameters); \
	DECLARE_FUNCTION(execSetInteractionChannel); \
	DECLARE_FUNCTION(execSetDrawDebug); \
	DECLARE_FUNCTION(execSetAngleToleranceForInteraction); \
	DECLARE_FUNCTION(execSetInteractOnlyWithinSpecifiedAngle); \
	DECLARE_FUNCTION(execSetEnableInteractionCheckTimer); \
	DECLARE_FUNCTION(execSetUseContextAwareSolution); \
	DECLARE_FUNCTION(execSetUseCameraViewPoint); \
	DECLARE_FUNCTION(execSetUseActorEyeViewPoint); \
	DECLARE_FUNCTION(execSetTraceStartRotation); \
	DECLARE_FUNCTION(execSetTraceStartLocation); \
	DECLARE_FUNCTION(execSetCameraToUse); \
	DECLARE_FUNCTION(execSetInteractionRangeModifier); \
	DECLARE_FUNCTION(execSetInteractionRange); \
	DECLARE_FUNCTION(execSetActorRemovalTimerRate); \
	DECLARE_FUNCTION(execSetInteractionCheckTimerRate); \
	DECLARE_FUNCTION(execGetAllInteractionComponentData); \
	DECLARE_FUNCTION(execGetInteractionChannel); \
	DECLARE_FUNCTION(execGetDrawDebug); \
	DECLARE_FUNCTION(execGetAngleToleranceForInteraction); \
	DECLARE_FUNCTION(execGetInteractOnlyWithinSpecifiedAngle); \
	DECLARE_FUNCTION(execGetEnableInteractionCheckTimer); \
	DECLARE_FUNCTION(execGetUseContextAwareSolution); \
	DECLARE_FUNCTION(execGetUseCameraViewPoint); \
	DECLARE_FUNCTION(execGetUseActorEyeViewPoint); \
	DECLARE_FUNCTION(execGetTraceStartRotation); \
	DECLARE_FUNCTION(execGetTraceStartLocation); \
	DECLARE_FUNCTION(execGetInteractionRangeModifier); \
	DECLARE_FUNCTION(execGetInteractionRange); \
	DECLARE_FUNCTION(execGetActorRemovalTimerHandle); \
	DECLARE_FUNCTION(execGetInteractionCheckTimerHandle); \
	DECLARE_FUNCTION(execGetActorRemovalTimerRate); \
	DECLARE_FUNCTION(execGetInteractionCheckTimerRate); \
	DECLARE_FUNCTION(execGetCurrentInteractable_ContextAware); \
	DECLARE_FUNCTION(execGetAllCurrentlyPerceivedInteractableActors); \
	DECLARE_FUNCTION(execGetCurrentInteractable); \
	DECLARE_FUNCTION(execRemoveInteractableActorsThatAreOutOfInteractionRangeInArray); \
	DECLARE_FUNCTION(execWasTheAttemptToAddInteractableActorToArraySuccessful); \
	DECLARE_FUNCTION(execAttemptToAddInteractableActorToArray); \
	DECLARE_FUNCTION(execAreActorsFacingEachOther); \
	DECLARE_FUNCTION(execClearInteractionTimer); \
	DECLARE_FUNCTION(execPerformInteractionCheck_ContextAware); \
	DECLARE_FUNCTION(execPerformInteractionCheck); \
	DECLARE_FUNCTION(execTryInteract);


#define FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_78_ACCESSORS
#define FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContextAwareInteractionComponent(); \
	friend struct Z_Construct_UClass_UContextAwareInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UContextAwareInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CAIS"), NO_API) \
	DECLARE_SERIALIZER(UContextAwareInteractionComponent)


#define FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_78_INCLASS \
private: \
	static void StaticRegisterNativesUContextAwareInteractionComponent(); \
	friend struct Z_Construct_UClass_UContextAwareInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UContextAwareInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CAIS"), NO_API) \
	DECLARE_SERIALIZER(UContextAwareInteractionComponent)


#define FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_78_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContextAwareInteractionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextAwareInteractionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContextAwareInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextAwareInteractionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContextAwareInteractionComponent(UContextAwareInteractionComponent&&); \
	NO_API UContextAwareInteractionComponent(const UContextAwareInteractionComponent&); \
public: \
	NO_API virtual ~UContextAwareInteractionComponent();


#define FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_78_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContextAwareInteractionComponent(UContextAwareInteractionComponent&&); \
	NO_API UContextAwareInteractionComponent(const UContextAwareInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContextAwareInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextAwareInteractionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UContextAwareInteractionComponent) \
	NO_API virtual ~UContextAwareInteractionComponent();


#define FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_75_PROLOG
#define FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_78_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_78_SPARSE_DATA \
	FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_78_RPC_WRAPPERS \
	FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_78_ACCESSORS \
	FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_78_INCLASS \
	FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_78_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_78_SPARSE_DATA \
	FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_78_ACCESSORS \
	FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_78_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAIS_API UClass* StaticClass<class UContextAwareInteractionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CAIS_Source_CAIS_Public_ContextAwareInteractionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
