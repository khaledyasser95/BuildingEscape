// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyProject2GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProject2GameModeBase() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_AMyProject2GameModeBase_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_AMyProject2GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
// End Cross Module References
	void AMyProject2GameModeBase::StaticRegisterNativesAMyProject2GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMyProject2GameModeBase_NoRegister()
	{
		return AMyProject2GameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyProject2GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "MyProject2GameModeBase.h" },
				{ "ModuleRelativePath", "MyProject2GameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMyProject2GameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMyProject2GameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProject2GameModeBase, 652143323);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProject2GameModeBase(Z_Construct_UClass_AMyProject2GameModeBase, &AMyProject2GameModeBase::StaticClass, TEXT("/Script/MyProject2"), TEXT("AMyProject2GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProject2GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
