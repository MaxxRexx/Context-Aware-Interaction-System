// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CAIS/Public/InteractableInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableInterface() {}
// Cross Module References
	CAIS_API UClass* Z_Construct_UClass_UInteractableInterface();
	CAIS_API UClass* Z_Construct_UClass_UInteractableInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CAIS();
// End Cross Module References
	DEFINE_FUNCTION(IInteractableInterface::execShowPossibleInteractionDot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowPossibleInteractionDot_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInteractableInterface::execHideInteractionWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideInteractionWidget_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInteractableInterface::execShowInteractionWidget)
	{
		P_GET_OBJECT(AActor,Z_Param_InteractingActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowInteractionWidget_Implementation(Z_Param_InteractingActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInteractableInterface::execInteract)
	{
		P_GET_OBJECT(AActor,Z_Param_InteractingActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact_Implementation(Z_Param_InteractingActor);
		P_NATIVE_END;
	}
	struct InteractableInterface_eventInteract_Parms
	{
		AActor* InteractingActor;
	};
	struct InteractableInterface_eventShowInteractionWidget_Parms
	{
		AActor* InteractingActor;
	};
	void IInteractableInterface::HideInteractionWidget()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HideInteractionWidget instead.");
	}
	void IInteractableInterface::Interact(AActor* InteractingActor)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
	}
	void IInteractableInterface::ShowInteractionWidget(AActor* InteractingActor)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShowInteractionWidget instead.");
	}
	void IInteractableInterface::ShowPossibleInteractionDot()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShowPossibleInteractionDot instead.");
	}
	void UInteractableInterface::StaticRegisterNativesUInteractableInterface()
	{
		UClass* Class = UInteractableInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideInteractionWidget", &IInteractableInterface::execHideInteractionWidget },
			{ "Interact", &IInteractableInterface::execInteract },
			{ "ShowInteractionWidget", &IInteractableInterface::execShowInteractionWidget },
			{ "ShowPossibleInteractionDot", &IInteractableInterface::execShowPossibleInteractionDot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractableInterface_HideInteractionWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableInterface_HideInteractionWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/InteractableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableInterface_HideInteractionWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableInterface, nullptr, "HideInteractionWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractableInterface_HideInteractionWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_HideInteractionWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractableInterface_HideInteractionWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractableInterface_HideInteractionWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractableInterface_Interact_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableInterface_Interact_Statics::NewProp_InteractingActor = { "InteractingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractableInterface_eventInteract_Parms, InteractingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableInterface_Interact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableInterface_Interact_Statics::NewProp_InteractingActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableInterface_Interact_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/InteractableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableInterface_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableInterface, nullptr, "Interact", nullptr, nullptr, sizeof(InteractableInterface_eventInteract_Parms), Z_Construct_UFunction_UInteractableInterface_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_Interact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractableInterface_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractableInterface_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractableInterface_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractableInterface_ShowInteractionWidget_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableInterface_ShowInteractionWidget_Statics::NewProp_InteractingActor = { "InteractingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractableInterface_eventShowInteractionWidget_Parms, InteractingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableInterface_ShowInteractionWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableInterface_ShowInteractionWidget_Statics::NewProp_InteractingActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableInterface_ShowInteractionWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/InteractableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableInterface_ShowInteractionWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableInterface, nullptr, "ShowInteractionWidget", nullptr, nullptr, sizeof(InteractableInterface_eventShowInteractionWidget_Parms), Z_Construct_UFunction_UInteractableInterface_ShowInteractionWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_ShowInteractionWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractableInterface_ShowInteractionWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_ShowInteractionWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractableInterface_ShowInteractionWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractableInterface_ShowInteractionWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractableInterface_ShowPossibleInteractionDot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableInterface_ShowPossibleInteractionDot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/InteractableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableInterface_ShowPossibleInteractionDot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableInterface, nullptr, "ShowPossibleInteractionDot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractableInterface_ShowPossibleInteractionDot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_ShowPossibleInteractionDot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractableInterface_ShowPossibleInteractionDot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractableInterface_ShowPossibleInteractionDot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractableInterface);
	UClass* Z_Construct_UClass_UInteractableInterface_NoRegister()
	{
		return UInteractableInterface::StaticClass();
	}
	struct Z_Construct_UClass_UInteractableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CAIS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractableInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractableInterface_HideInteractionWidget, "HideInteractionWidget" }, // 296992173
		{ &Z_Construct_UFunction_UInteractableInterface_Interact, "Interact" }, // 2778295570
		{ &Z_Construct_UFunction_UInteractableInterface_ShowInteractionWidget, "ShowInteractionWidget" }, // 1410601801
		{ &Z_Construct_UFunction_UInteractableInterface_ShowPossibleInteractionDot, "ShowPossibleInteractionDot" }, // 3943877953
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InteractableInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractableInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractableInterface_Statics::ClassParams = {
		&UInteractableInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractableInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractableInterface()
	{
		if (!Z_Registration_Info_UClass_UInteractableInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractableInterface.OuterSingleton, Z_Construct_UClass_UInteractableInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractableInterface.OuterSingleton;
	}
	template<> CAIS_API UClass* StaticClass<UInteractableInterface>()
	{
		return UInteractableInterface::StaticClass();
	}
	UInteractableInterface::UInteractableInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractableInterface);
	UInteractableInterface::~UInteractableInterface() {}
	static FName NAME_UInteractableInterface_HideInteractionWidget = FName(TEXT("HideInteractionWidget"));
	void IInteractableInterface::Execute_HideInteractionWidget(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractableInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInteractableInterface_HideInteractionWidget);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInteractableInterface*)(O->GetNativeInterfaceAddress(UInteractableInterface::StaticClass())))
		{
			I->HideInteractionWidget_Implementation();
		}
	}
	static FName NAME_UInteractableInterface_Interact = FName(TEXT("Interact"));
	void IInteractableInterface::Execute_Interact(UObject* O, AActor* InteractingActor)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractableInterface::StaticClass()));
		InteractableInterface_eventInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractableInterface_Interact);
		if (Func)
		{
			Parms.InteractingActor=InteractingActor;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInteractableInterface*)(O->GetNativeInterfaceAddress(UInteractableInterface::StaticClass())))
		{
			I->Interact_Implementation(InteractingActor);
		}
	}
	static FName NAME_UInteractableInterface_ShowInteractionWidget = FName(TEXT("ShowInteractionWidget"));
	void IInteractableInterface::Execute_ShowInteractionWidget(UObject* O, AActor* InteractingActor)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractableInterface::StaticClass()));
		InteractableInterface_eventShowInteractionWidget_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractableInterface_ShowInteractionWidget);
		if (Func)
		{
			Parms.InteractingActor=InteractingActor;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInteractableInterface*)(O->GetNativeInterfaceAddress(UInteractableInterface::StaticClass())))
		{
			I->ShowInteractionWidget_Implementation(InteractingActor);
		}
	}
	static FName NAME_UInteractableInterface_ShowPossibleInteractionDot = FName(TEXT("ShowPossibleInteractionDot"));
	void IInteractableInterface::Execute_ShowPossibleInteractionDot(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractableInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInteractableInterface_ShowPossibleInteractionDot);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInteractableInterface*)(O->GetNativeInterfaceAddress(UInteractableInterface::StaticClass())))
		{
			I->ShowPossibleInteractionDot_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractableInterface, UInteractableInterface::StaticClass, TEXT("UInteractableInterface"), &Z_Registration_Info_UClass_UInteractableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractableInterface), 1361757081U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_3728378172(TEXT("/Script/CAIS"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CAIS_Source_CAIS_Public_InteractableInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
