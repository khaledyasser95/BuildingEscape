// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "opendoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeopendoor() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_Uopendoor_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_Uopendoor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
// End Cross Module References
	void Uopendoor::StaticRegisterNativesUopendoor()
	{
	}
	UClass* Z_Construct_UClass_Uopendoor_NoRegister()
	{
		return Uopendoor::StaticClass();
	}
	UClass* Z_Construct_UClass_Uopendoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "opendoor.h" },
				{ "ModuleRelativePath", "opendoor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorCloseDelay_MetaData[] = {
				{ "Category", "opendoor" },
				{ "ModuleRelativePath", "opendoor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DoorCloseDelay = { UE4CodeGen_Private::EPropertyClass::Float, "DoorCloseDelay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(Uopendoor, DoorCloseDelay), METADATA_PARAMS(NewProp_DoorCloseDelay_MetaData, ARRAY_COUNT(NewProp_DoorCloseDelay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressurePlate_MetaData[] = {
				{ "Category", "opendoor" },
				{ "ModuleRelativePath", "opendoor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PressurePlate = { UE4CodeGen_Private::EPropertyClass::Object, "PressurePlate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(Uopendoor, PressurePlate), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(NewProp_PressurePlate_MetaData, ARRAY_COUNT(NewProp_PressurePlate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_openAngle_MetaData[] = {
				{ "Category", "opendoor" },
				{ "ModuleRelativePath", "opendoor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_openAngle = { UE4CodeGen_Private::EPropertyClass::Float, "openAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(Uopendoor, openAngle), METADATA_PARAMS(NewProp_openAngle_MetaData, ARRAY_COUNT(NewProp_openAngle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DoorCloseDelay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PressurePlate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_openAngle,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<Uopendoor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&Uopendoor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Uopendoor, 1572217604);
	static FCompiledInDefer Z_CompiledInDefer_UClass_Uopendoor(Z_Construct_UClass_Uopendoor, &Uopendoor::StaticClass, TEXT("/Script/MyProject2"), TEXT("Uopendoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Uopendoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
