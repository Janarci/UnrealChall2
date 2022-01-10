// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef UNREALCHALLENGE_Destructable_generated_h
#error "Destructable.generated.h already included, missing '#pragma once' in Destructable.h"
#endif
#define UNREALCHALLENGE_Destructable_generated_h

#define UnrealChallenge_Source_UnrealChallenge_Destructable_h_15_SPARSE_DATA
#define UnrealChallenge_Source_UnrealChallenge_Destructable_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMyDestroy); \
	DECLARE_FUNCTION(execOnComponentFracture);


#define UnrealChallenge_Source_UnrealChallenge_Destructable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMyDestroy); \
	DECLARE_FUNCTION(execOnComponentFracture);


#define UnrealChallenge_Source_UnrealChallenge_Destructable_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADestructable(); \
	friend struct Z_Construct_UClass_ADestructable_Statics; \
public: \
	DECLARE_CLASS(ADestructable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealChallenge"), NO_API) \
	DECLARE_SERIALIZER(ADestructable)


#define UnrealChallenge_Source_UnrealChallenge_Destructable_h_15_INCLASS \
private: \
	static void StaticRegisterNativesADestructable(); \
	friend struct Z_Construct_UClass_ADestructable_Statics; \
public: \
	DECLARE_CLASS(ADestructable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealChallenge"), NO_API) \
	DECLARE_SERIALIZER(ADestructable)


#define UnrealChallenge_Source_UnrealChallenge_Destructable_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADestructable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADestructable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADestructable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADestructable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADestructable(ADestructable&&); \
	NO_API ADestructable(const ADestructable&); \
public:


#define UnrealChallenge_Source_UnrealChallenge_Destructable_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADestructable(ADestructable&&); \
	NO_API ADestructable(const ADestructable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADestructable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADestructable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADestructable)


#define UnrealChallenge_Source_UnrealChallenge_Destructable_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MyRootComponent() { return STRUCT_OFFSET(ADestructable, MyRootComponent); } \
	FORCEINLINE static uint32 __PPO__DestructibleComponent() { return STRUCT_OFFSET(ADestructable, DestructibleComponent); } \
	FORCEINLINE static uint32 __PPO__DebrisLifeTime() { return STRUCT_OFFSET(ADestructable, DebrisLifeTime); } \
	FORCEINLINE static uint32 __PPO__ActorToSpawn() { return STRUCT_OFFSET(ADestructable, ActorToSpawn); } \
	FORCEINLINE static uint32 __PPO__actorToSpawnIndex() { return STRUCT_OFFSET(ADestructable, actorToSpawnIndex); }


#define UnrealChallenge_Source_UnrealChallenge_Destructable_h_12_PROLOG
#define UnrealChallenge_Source_UnrealChallenge_Destructable_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealChallenge_Source_UnrealChallenge_Destructable_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealChallenge_Source_UnrealChallenge_Destructable_h_15_SPARSE_DATA \
	UnrealChallenge_Source_UnrealChallenge_Destructable_h_15_RPC_WRAPPERS \
	UnrealChallenge_Source_UnrealChallenge_Destructable_h_15_INCLASS \
	UnrealChallenge_Source_UnrealChallenge_Destructable_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealChallenge_Source_UnrealChallenge_Destructable_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealChallenge_Source_UnrealChallenge_Destructable_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealChallenge_Source_UnrealChallenge_Destructable_h_15_SPARSE_DATA \
	UnrealChallenge_Source_UnrealChallenge_Destructable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealChallenge_Source_UnrealChallenge_Destructable_h_15_INCLASS_NO_PURE_DECLS \
	UnrealChallenge_Source_UnrealChallenge_Destructable_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALCHALLENGE_API UClass* StaticClass<class ADestructable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealChallenge_Source_UnrealChallenge_Destructable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
