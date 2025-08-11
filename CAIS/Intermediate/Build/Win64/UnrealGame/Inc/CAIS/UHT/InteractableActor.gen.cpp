// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CAIS/Public/InteractableActor.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableActor() {}
// Cross Module References
	CAIS_API UClass* Z_Construct_UClass_AInteractableActor();
	CAIS_API UClass* Z_Construct_UClass_AInteractableActor_NoRegister();
	CAIS_API UClass* Z_Construct_UClass_UInteractableInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CAIS();
// End Cross Module References
	void AInteractableActor::StaticRegisterNativesAInteractableActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractableActor);
	UClass* Z_Construct_UClass_AInteractableActor_NoRegister()
	{
		return AInteractableActor::StaticClass();
	}
	struct Z_Construct_UClass_AInteractableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CAIS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractableActor.h" },
		{ "ModuleRelativePath", "Public/InteractableActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableActor_Statics::NewProp_InteractionWidget_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractableActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableActor_Statics::NewProp_InteractionWidget = { "InteractionWidget", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractableActor, InteractionWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractableActor_Statics::NewProp_InteractionWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableActor_Statics::NewProp_InteractionWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableActor_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Public/InteractableActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInteractableActor_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractableActor, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_AInteractableActor_Statics::NewProp_GameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableActor_Statics::NewProp_GameplayTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractableActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableActor_Statics::NewProp_InteractionWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableActor_Statics::NewProp_GameplayTags,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInteractableActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractableInterface_NoRegister, (int32)VTABLE_OFFSET(AInteractableActor, IInteractableInterface), false },  // 1361757081
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractableActor_Statics::ClassParams = {
		&AInteractableActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInteractableActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractableActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractableActor()
	{
		if (!Z_Registration_Info_UClass_AInteractableActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractableActor.OuterSingleton, Z_Construct_UClass_AInteractableActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInteractableActor.OuterSingleton;
	}
	template<> CAIS_API UClass* StaticClass<AInteractableActor>()
	{
		return AInteractableActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableActor);
	AInteractableActor::~AInteractableActor() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInteractableActor, AInteractableActor::StaticClass, TEXT("AInteractableActor"), &Z_Registration_Info_UClass_AInteractableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractableActor), 3819250265U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableActor_h_2204802586(TEXT("/Script/CAIS"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
