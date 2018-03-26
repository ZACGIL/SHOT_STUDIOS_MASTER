// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOT_STUDIOS_MASTER_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define SHOT_STUDIOS_MASTER_BaseCharacter_generated_h

#define SHOT_STUDIOS_MASTER_Copy_Source_SHOT_STUDIOS_MASTER_BaseCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalculateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CalculateHealth(Z_Param_delta); \
		P_NATIVE_END; \
	}


#define SHOT_STUDIOS_MASTER_Copy_Source_SHOT_STUDIOS_MASTER_BaseCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalculateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CalculateHealth(Z_Param_delta); \
		P_NATIVE_END; \
	}


#define SHOT_STUDIOS_MASTER_Copy_Source_SHOT_STUDIOS_MASTER_BaseCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend SHOT_STUDIOS_MASTER_API class UClass* Z_Construct_UClass_ABaseCharacter(); \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SHOT_STUDIOS_MASTER"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SHOT_STUDIOS_MASTER_Copy_Source_SHOT_STUDIOS_MASTER_BaseCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend SHOT_STUDIOS_MASTER_API class UClass* Z_Construct_UClass_ABaseCharacter(); \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SHOT_STUDIOS_MASTER"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SHOT_STUDIOS_MASTER_Copy_Source_SHOT_STUDIOS_MASTER_BaseCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public:


#define SHOT_STUDIOS_MASTER_Copy_Source_SHOT_STUDIOS_MASTER_BaseCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter)


#define SHOT_STUDIOS_MASTER_Copy_Source_SHOT_STUDIOS_MASTER_BaseCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define SHOT_STUDIOS_MASTER_Copy_Source_SHOT_STUDIOS_MASTER_BaseCharacter_h_9_PROLOG
#define SHOT_STUDIOS_MASTER_Copy_Source_SHOT_STUDIOS_MASTER_BaseCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SHOT_STUDIOS_MASTER_Copy_Source_SHOT_STUDIOS_MASTER_BaseCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	SHOT_STUDIOS_MASTER_Copy_Source_SHOT_STUDIOS_MASTER_BaseCharacter_h_12_RPC_WRAPPERS \
	SHOT_STUDIOS_MASTER_Copy_Source_SHOT_STUDIOS_MASTER_BaseCharacter_h_12_INCLASS \
	SHOT_STUDIOS_MASTER_Copy_Source_SHOT_STUDIOS_MASTER_BaseCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SHOT_STUDIOS_MASTER_Copy_Source_SHOT_STUDIOS_MASTER_BaseCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SHOT_STUDIOS_MASTER_Copy_Source_SHOT_STUDIOS_MASTER_BaseCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	SHOT_STUDIOS_MASTER_Copy_Source_SHOT_STUDIOS_MASTER_BaseCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SHOT_STUDIOS_MASTER_Copy_Source_SHOT_STUDIOS_MASTER_BaseCharacter_h_12_INCLASS_NO_PURE_DECLS \
	SHOT_STUDIOS_MASTER_Copy_Source_SHOT_STUDIOS_MASTER_BaseCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SHOT_STUDIOS_MASTER_Copy_Source_SHOT_STUDIOS_MASTER_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
