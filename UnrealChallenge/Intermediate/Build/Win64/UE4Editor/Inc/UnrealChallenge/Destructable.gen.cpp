// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealChallenge/Destructable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestructable() {}
// Cross Module References
	UNREALCHALLENGE_API UClass* Z_Construct_UClass_ADestructable_NoRegister();
	UNREALCHALLENGE_API UClass* Z_Construct_UClass_ADestructable();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealChallenge();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	APEXDESTRUCTION_API UClass* Z_Construct_UClass_UDestructibleComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADestructable::execMyDestroy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MyDestroy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADestructable::execOnComponentFracture)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitPoint);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentFracture(Z_Param_Out_HitPoint,Z_Param_Out_HitDirection);
		P_NATIVE_END;
	}
	void ADestructable::StaticRegisterNativesADestructable()
	{
		UClass* Class = ADestructable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MyDestroy", &ADestructable::execMyDestroy },
			{ "OnComponentFracture", &ADestructable::execOnComponentFracture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADestructable_MyDestroy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADestructable_MyDestroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Destructable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADestructable_MyDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADestructable, nullptr, "MyDestroy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADestructable_MyDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructable_MyDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADestructable_MyDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADestructable_MyDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADestructable_OnComponentFracture_Statics
	{
		struct Destructable_eventOnComponentFracture_Parms
		{
			FVector HitPoint;
			FVector HitDirection;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADestructable_OnComponentFracture_Statics::NewProp_HitPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADestructable_OnComponentFracture_Statics::NewProp_HitPoint = { "HitPoint", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Destructable_eventOnComponentFracture_Parms, HitPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ADestructable_OnComponentFracture_Statics::NewProp_HitPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructable_OnComponentFracture_Statics::NewProp_HitPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADestructable_OnComponentFracture_Statics::NewProp_HitDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADestructable_OnComponentFracture_Statics::NewProp_HitDirection = { "HitDirection", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Destructable_eventOnComponentFracture_Parms, HitDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ADestructable_OnComponentFracture_Statics::NewProp_HitDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructable_OnComponentFracture_Statics::NewProp_HitDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADestructable_OnComponentFracture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADestructable_OnComponentFracture_Statics::NewProp_HitPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADestructable_OnComponentFracture_Statics::NewProp_HitDirection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADestructable_OnComponentFracture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Destructable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADestructable_OnComponentFracture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADestructable, nullptr, "OnComponentFracture", nullptr, nullptr, sizeof(Destructable_eventOnComponentFracture_Parms), Z_Construct_UFunction_ADestructable_OnComponentFracture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructable_OnComponentFracture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADestructable_OnComponentFracture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructable_OnComponentFracture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADestructable_OnComponentFracture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADestructable_OnComponentFracture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADestructable_NoRegister()
	{
		return ADestructable::StaticClass();
	}
	struct Z_Construct_UClass_ADestructable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyRootComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyRootComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestructibleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestructibleComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFractured_MetaData[];
#endif
		static void NewProp_bFractured_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFractured;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebrisLifeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebrisLifeTime;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorToSpawn_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorToSpawnIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_actorToSpawnIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADestructable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealChallenge,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADestructable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADestructable_MyDestroy, "MyDestroy" }, // 1938463382
		{ &Z_Construct_UFunction_ADestructable_OnComponentFracture, "OnComponentFracture" }, // 756135548
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestructable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Destructable.h" },
		{ "ModuleRelativePath", "Destructable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestructable_Statics::NewProp_MyRootComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Custom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Destructable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADestructable_Statics::NewProp_MyRootComponent = { "MyRootComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADestructable, MyRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADestructable_Statics::NewProp_MyRootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADestructable_Statics::NewProp_MyRootComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestructable_Statics::NewProp_DestructibleComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Custom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Destructable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADestructable_Statics::NewProp_DestructibleComponent = { "DestructibleComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADestructable, DestructibleComponent), Z_Construct_UClass_UDestructibleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADestructable_Statics::NewProp_DestructibleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADestructable_Statics::NewProp_DestructibleComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestructable_Statics::NewProp_bFractured_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Destructable.h" },
	};
#endif
	void Z_Construct_UClass_ADestructable_Statics::NewProp_bFractured_SetBit(void* Obj)
	{
		((ADestructable*)Obj)->bFractured = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADestructable_Statics::NewProp_bFractured = { "bFractured", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ADestructable), &Z_Construct_UClass_ADestructable_Statics::NewProp_bFractured_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADestructable_Statics::NewProp_bFractured_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADestructable_Statics::NewProp_bFractured_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestructable_Statics::NewProp_DebrisLifeTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Destructable.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADestructable_Statics::NewProp_DebrisLifeTime = { "DebrisLifeTime", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADestructable, DebrisLifeTime), METADATA_PARAMS(Z_Construct_UClass_ADestructable_Statics::NewProp_DebrisLifeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADestructable_Statics::NewProp_DebrisLifeTime_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADestructable_Statics::NewProp_ActorToSpawn_Inner = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestructable_Statics::NewProp_ActorToSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Destructable" },
		{ "ModuleRelativePath", "Destructable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADestructable_Statics::NewProp_ActorToSpawn = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADestructable, ActorToSpawn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADestructable_Statics::NewProp_ActorToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADestructable_Statics::NewProp_ActorToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestructable_Statics::NewProp_actorToSpawnIndex_MetaData[] = {
		{ "Category", "Destructable" },
		{ "ModuleRelativePath", "Destructable.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADestructable_Statics::NewProp_actorToSpawnIndex = { "actorToSpawnIndex", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADestructable, actorToSpawnIndex), METADATA_PARAMS(Z_Construct_UClass_ADestructable_Statics::NewProp_actorToSpawnIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADestructable_Statics::NewProp_actorToSpawnIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADestructable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructable_Statics::NewProp_MyRootComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructable_Statics::NewProp_DestructibleComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructable_Statics::NewProp_bFractured,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructable_Statics::NewProp_DebrisLifeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructable_Statics::NewProp_ActorToSpawn_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructable_Statics::NewProp_ActorToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructable_Statics::NewProp_actorToSpawnIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADestructable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADestructable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADestructable_Statics::ClassParams = {
		&ADestructable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADestructable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADestructable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADestructable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADestructable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADestructable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADestructable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADestructable, 1488384051);
	template<> UNREALCHALLENGE_API UClass* StaticClass<ADestructable>()
	{
		return ADestructable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADestructable(Z_Construct_UClass_ADestructable, &ADestructable::StaticClass, TEXT("/Script/UnrealChallenge"), TEXT("ADestructable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADestructable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
