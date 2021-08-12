// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HideNSeekAI/WinVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWinVolume() {}
// Cross Module References
	HIDENSEEKAI_API UClass* Z_Construct_UClass_AWinVolume_NoRegister();
	HIDENSEEKAI_API UClass* Z_Construct_UClass_AWinVolume();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HideNSeekAI();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void AWinVolume::StaticRegisterNativesAWinVolume()
	{
	}
	UClass* Z_Construct_UClass_AWinVolume_NoRegister()
	{
		return AWinVolume::StaticClass();
	}
	struct Z_Construct_UClass_AWinVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WinVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWinVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HideNSeekAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWinVolume_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WinVolume.h" },
		{ "ModuleRelativePath", "WinVolume.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWinVolume_Statics::NewProp_WinVolume_MetaData[] = {
		{ "Category", "Volume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WinVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWinVolume_Statics::NewProp_WinVolume = { "WinVolume", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWinVolume, WinVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWinVolume_Statics::NewProp_WinVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWinVolume_Statics::NewProp_WinVolume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWinVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWinVolume_Statics::NewProp_WinVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWinVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWinVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWinVolume_Statics::ClassParams = {
		&AWinVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWinVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWinVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWinVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWinVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWinVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWinVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWinVolume, 453821895);
	template<> HIDENSEEKAI_API UClass* StaticClass<AWinVolume>()
	{
		return AWinVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWinVolume(Z_Construct_UClass_AWinVolume, &AWinVolume::StaticClass, TEXT("/Script/HideNSeekAI"), TEXT("AWinVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWinVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
