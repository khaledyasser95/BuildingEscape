// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT2_opendoor_generated_h
#error "opendoor.generated.h already included, missing '#pragma once' in opendoor.h"
#endif
#define MYPROJECT2_opendoor_generated_h

#define MyProject2_Source_MyProject2_opendoor_h_13_RPC_WRAPPERS
#define MyProject2_Source_MyProject2_opendoor_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject2_Source_MyProject2_opendoor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUopendoor(); \
	friend MYPROJECT2_API class UClass* Z_Construct_UClass_Uopendoor(); \
public: \
	DECLARE_CLASS(Uopendoor, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(Uopendoor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject2_Source_MyProject2_opendoor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUopendoor(); \
	friend MYPROJECT2_API class UClass* Z_Construct_UClass_Uopendoor(); \
public: \
	DECLARE_CLASS(Uopendoor, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(Uopendoor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject2_Source_MyProject2_opendoor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Uopendoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Uopendoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Uopendoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Uopendoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Uopendoor(Uopendoor&&); \
	NO_API Uopendoor(const Uopendoor&); \
public:


#define MyProject2_Source_MyProject2_opendoor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Uopendoor(Uopendoor&&); \
	NO_API Uopendoor(const Uopendoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Uopendoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Uopendoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Uopendoor)


#define MyProject2_Source_MyProject2_opendoor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__openAngle() { return STRUCT_OFFSET(Uopendoor, openAngle); } \
	FORCEINLINE static uint32 __PPO__PressurePlate() { return STRUCT_OFFSET(Uopendoor, PressurePlate); } \
	FORCEINLINE static uint32 __PPO__DoorCloseDelay() { return STRUCT_OFFSET(Uopendoor, DoorCloseDelay); }


#define MyProject2_Source_MyProject2_opendoor_h_10_PROLOG
#define MyProject2_Source_MyProject2_opendoor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_opendoor_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Source_MyProject2_opendoor_h_13_RPC_WRAPPERS \
	MyProject2_Source_MyProject2_opendoor_h_13_INCLASS \
	MyProject2_Source_MyProject2_opendoor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject2_Source_MyProject2_opendoor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_opendoor_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Source_MyProject2_opendoor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_opendoor_h_13_INCLASS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_opendoor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject2_Source_MyProject2_opendoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
