// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractableInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef CAIS_InteractableInterface_generated_h
#error "InteractableInterface.generated.h already included, missing '#pragma once' in InteractableInterface.h"
#endif
#define CAIS_InteractableInterface_generated_h

#define FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_10_SPARSE_DATA
#define FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_10_RPC_WRAPPERS \
	virtual void ShowPossibleInteractionDot_Implementation() {}; \
	virtual void HideInteractionWidget_Implementation() {}; \
	virtual void ShowInteractionWidget_Implementation(AActor* InteractingActor) {}; \
	virtual void Interact_Implementation(AActor* InteractingActor) {}; \
 \
	DECLARE_FUNCTION(execShowPossibleInteractionDot); \
	DECLARE_FUNCTION(execHideInteractionWidget); \
	DECLARE_FUNCTION(execShowInteractionWidget); \
	DECLARE_FUNCTION(execInteract);


#define FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ShowPossibleInteractionDot_Implementation() {}; \
	virtual void HideInteractionWidget_Implementation() {}; \
	virtual void ShowInteractionWidget_Implementation(AActor* InteractingActor) {}; \
	virtual void Interact_Implementation(AActor* InteractingActor) {}; \
 \
	DECLARE_FUNCTION(execShowPossibleInteractionDot); \
	DECLARE_FUNCTION(execHideInteractionWidget); \
	DECLARE_FUNCTION(execShowInteractionWidget); \
	DECLARE_FUNCTION(execInteract);


#define FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_10_ACCESSORS
#define FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_10_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractableInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractableInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractableInterface(UInteractableInterface&&); \
	NO_API UInteractableInterface(const UInteractableInterface&); \
public: \
	NO_API virtual ~UInteractableInterface();


#define FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractableInterface(UInteractableInterface&&); \
	NO_API UInteractableInterface(const UInteractableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractableInterface) \
	NO_API virtual ~UInteractableInterface();


#define FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractableInterface(); \
	friend struct Z_Construct_UClass_UInteractableInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CAIS"), NO_API) \
	DECLARE_SERIALIZER(UInteractableInterface)


#define FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_10_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_10_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractableInterface() {} \
public: \
	typedef UInteractableInterface UClassType; \
	typedef IInteractableInterface ThisClass; \
	static void Execute_HideInteractionWidget(UObject* O); \
	static void Execute_Interact(UObject* O, AActor* InteractingActor); \
	static void Execute_ShowInteractionWidget(UObject* O, AActor* InteractingActor); \
	static void Execute_ShowPossibleInteractionDot(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractableInterface() {} \
public: \
	typedef UInteractableInterface UClassType; \
	typedef IInteractableInterface ThisClass; \
	static void Execute_HideInteractionWidget(UObject* O); \
	static void Execute_Interact(UObject* O, AActor* InteractingActor); \
	static void Execute_ShowInteractionWidget(UObject* O, AActor* InteractingActor); \
	static void Execute_ShowPossibleInteractionDot(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_7_PROLOG
#define FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_10_SPARSE_DATA \
	FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_10_RPC_WRAPPERS \
	FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_10_ACCESSORS \
	FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_10_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_10_SPARSE_DATA \
	FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_10_ACCESSORS \
	FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_10_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAIS_API UClass* StaticClass<class UInteractableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
