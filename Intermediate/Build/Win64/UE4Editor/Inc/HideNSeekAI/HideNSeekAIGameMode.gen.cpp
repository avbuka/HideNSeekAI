// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HideNSeekAI/HideNSeekAIGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHideNSeekAIGameMode() {}
// Cross Module References
	HIDENSEEKAI_API UClass* Z_Construct_UClass_AHideNSeekAIGameMode_NoRegister();
	HIDENSEEKAI_API UClass* Z_Construct_UClass_AHideNSeekAIGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HideNSeekAI();
// End Cross Module References
	void AHideNSeekAIGameMode::StaticRegisterNativesAHideNSeekAIGameMode()
	{
	}
	UClass* Z_Construct_UClass_AHideNSeekAIGameMode_NoRegister()
	{
		return AHideNSeekAIGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AHideNSeekAIGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHideNSeekAIGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HideNSeekAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHideNSeekAIGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HideNSeekAIGameMode.h" },
		{ "ModuleRelativePath", "HideNSeekAIGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHideNSeekAIGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHideNSeekAIGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHideNSeekAIGameMode_Statics::ClassParams = {
		&AHideNSeekAIGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHideNSeekAIGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHideNSeekAIGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHideNSeekAIGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHideNSeekAIGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHideNSeekAIGameMode, 753619536);
	template<> HIDENSEEKAI_API UClass* StaticClass<AHideNSeekAIGameMode>()
	{
		return AHideNSeekAIGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHideNSeekAIGameMode(Z_Construct_UClass_AHideNSeekAIGameMode, &AHideNSeekAIGameMode::StaticClass, TEXT("/Script/HideNSeekAI"), TEXT("AHideNSeekAIGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHideNSeekAIGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
