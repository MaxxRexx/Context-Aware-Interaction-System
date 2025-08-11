// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CAIS/Public/Abilities/GameplayAbility_Interact.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbility_Interact() {}
// Cross Module References
	CAIS_API UClass* Z_Construct_UClass_UGameplayAbility_Interact();
	CAIS_API UClass* Z_Construct_UClass_UGameplayAbility_Interact_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_CAIS();
// End Cross Module References
	void UGameplayAbility_Interact::StaticRegisterNativesUGameplayAbility_Interact()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayAbility_Interact);
	UClass* Z_Construct_UClass_UGameplayAbility_Interact_NoRegister()
	{
		return UGameplayAbility_Interact::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayAbility_Interact_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayAbility_Interact_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_CAIS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Interact_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/GameplayAbility_Interact.h" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility_Interact.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayAbility_Interact_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayAbility_Interact>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayAbility_Interact_Statics::ClassParams = {
		&UGameplayAbility_Interact::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Interact_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Interact_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayAbility_Interact()
	{
		if (!Z_Registration_Info_UClass_UGameplayAbility_Interact.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayAbility_Interact.OuterSingleton, Z_Construct_UClass_UGameplayAbility_Interact_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayAbility_Interact.OuterSingleton;
	}
	template<> CAIS_API UClass* StaticClass<UGameplayAbility_Interact>()
	{
		return UGameplayAbility_Interact::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayAbility_Interact);
	UGameplayAbility_Interact::~UGameplayAbility_Interact() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CAIS_Source_CAIS_Public_Abilities_GameplayAbility_Interact_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CAIS_Source_CAIS_Public_Abilities_GameplayAbility_Interact_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayAbility_Interact, UGameplayAbility_Interact::StaticClass, TEXT("UGameplayAbility_Interact"), &Z_Registration_Info_UClass_UGameplayAbility_Interact, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayAbility_Interact), 892962575U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CAIS_Source_CAIS_Public_Abilities_GameplayAbility_Interact_h_2480598886(TEXT("/Script/CAIS"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CAIS_Source_CAIS_Public_Abilities_GameplayAbility_Interact_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CAIS_Source_CAIS_Public_Abilities_GameplayAbility_Interact_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
