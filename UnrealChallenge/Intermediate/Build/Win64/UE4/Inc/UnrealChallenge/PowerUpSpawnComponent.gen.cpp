// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealChallenge/PowerUpSpawnComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerUpSpawnComponent() {}
// Cross Module References
	UNREALCHALLENGE_API UClass* Z_Construct_UClass_UPowerUpSpawnComponent_NoRegister();
	UNREALCHALLENGE_API UClass* Z_Construct_UClass_UPowerUpSpawnComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_UnrealChallenge();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPowerUpSpawnComponent::execGetActorToSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<AActor> *)Z_Param__Result=P_THIS->GetActorToSpawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPowerUpSpawnComponent::execSpawnRandom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SpawnRandom();
		P_NATIVE_END;
	}
	void UPowerUpSpawnComponent::StaticRegisterNativesUPowerUpSpawnComponent()
	{
		UClass* Class = UPowerUpSpawnComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorToSpawn", &UPowerUpSpawnComponent::execGetActorToSpawn },
			{ "SpawnRandom", &UPowerUpSpawnComponent::execSpawnRandom },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPowerUpSpawnComponent_GetActorToSpawn_Statics
	{
		struct PowerUpSpawnComponent_eventGetActorToSpawn_Parms
		{
			TSubclassOf<AActor>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPowerUpSpawnComponent_GetActorToSpawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PowerUpSpawnComponent_eventGetActorToSpawn_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPowerUpSpawnComponent_GetActorToSpawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPowerUpSpawnComponent_GetActorToSpawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPowerUpSpawnComponent_GetActorToSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PowerUpSpawnComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPowerUpSpawnComponent_GetActorToSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPowerUpSpawnComponent, nullptr, "GetActorToSpawn", nullptr, nullptr, sizeof(PowerUpSpawnComponent_eventGetActorToSpawn_Parms), Z_Construct_UFunction_UPowerUpSpawnComponent_GetActorToSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerUpSpawnComponent_GetActorToSpawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPowerUpSpawnComponent_GetActorToSpawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerUpSpawnComponent_GetActorToSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPowerUpSpawnComponent_GetActorToSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPowerUpSpawnComponent_GetActorToSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPowerUpSpawnComponent_SpawnRandom_Statics
	{
		struct PowerUpSpawnComponent_eventSpawnRandom_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPowerUpSpawnComponent_SpawnRandom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PowerUpSpawnComponent_eventSpawnRandom_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPowerUpSpawnComponent_SpawnRandom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPowerUpSpawnComponent_SpawnRandom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPowerUpSpawnComponent_SpawnRandom_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called every frame\n" },
		{ "ModuleRelativePath", "PowerUpSpawnComponent.h" },
		{ "ToolTip", "Called every frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPowerUpSpawnComponent_SpawnRandom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPowerUpSpawnComponent, nullptr, "SpawnRandom", nullptr, nullptr, sizeof(PowerUpSpawnComponent_eventSpawnRandom_Parms), Z_Construct_UFunction_UPowerUpSpawnComponent_SpawnRandom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerUpSpawnComponent_SpawnRandom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPowerUpSpawnComponent_SpawnRandom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerUpSpawnComponent_SpawnRandom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPowerUpSpawnComponent_SpawnRandom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPowerUpSpawnComponent_SpawnRandom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPowerUpSpawnComponent_NoRegister()
	{
		return UPowerUpSpawnComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPowerUpSpawnComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasSpawned_MetaData[];
#endif
		static void NewProp_hasSpawned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasSpawned;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorToSpawn_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPowerUpSpawnComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealChallenge,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPowerUpSpawnComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPowerUpSpawnComponent_GetActorToSpawn, "GetActorToSpawn" }, // 2713826197
		{ &Z_Construct_UFunction_UPowerUpSpawnComponent_SpawnRandom, "SpawnRandom" }, // 651337645
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerUpSpawnComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PowerUpSpawnComponent.h" },
		{ "ModuleRelativePath", "PowerUpSpawnComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerUpSpawnComponent_Statics::NewProp_hasSpawned_MetaData[] = {
		{ "Category", "PowerUpSpawnComponent" },
		{ "ModuleRelativePath", "PowerUpSpawnComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPowerUpSpawnComponent_Statics::NewProp_hasSpawned_SetBit(void* Obj)
	{
		((UPowerUpSpawnComponent*)Obj)->hasSpawned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPowerUpSpawnComponent_Statics::NewProp_hasSpawned = { "hasSpawned", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPowerUpSpawnComponent), &Z_Construct_UClass_UPowerUpSpawnComponent_Statics::NewProp_hasSpawned_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPowerUpSpawnComponent_Statics::NewProp_hasSpawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerUpSpawnComponent_Statics::NewProp_hasSpawned_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPowerUpSpawnComponent_Statics::NewProp_ActorToSpawn_Inner = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerUpSpawnComponent_Statics::NewProp_ActorToSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PowerUpSpawnComponent" },
		{ "ModuleRelativePath", "PowerUpSpawnComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPowerUpSpawnComponent_Statics::NewProp_ActorToSpawn = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPowerUpSpawnComponent, ActorToSpawn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPowerUpSpawnComponent_Statics::NewProp_ActorToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerUpSpawnComponent_Statics::NewProp_ActorToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPowerUpSpawnComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerUpSpawnComponent_Statics::NewProp_hasSpawned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerUpSpawnComponent_Statics::NewProp_ActorToSpawn_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerUpSpawnComponent_Statics::NewProp_ActorToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPowerUpSpawnComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPowerUpSpawnComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPowerUpSpawnComponent_Statics::ClassParams = {
		&UPowerUpSpawnComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPowerUpSpawnComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPowerUpSpawnComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPowerUpSpawnComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerUpSpawnComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPowerUpSpawnComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPowerUpSpawnComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPowerUpSpawnComponent, 1496687664);
	template<> UNREALCHALLENGE_API UClass* StaticClass<UPowerUpSpawnComponent>()
	{
		return UPowerUpSpawnComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPowerUpSpawnComponent(Z_Construct_UClass_UPowerUpSpawnComponent, &UPowerUpSpawnComponent::StaticClass, TEXT("/Script/UnrealChallenge"), TEXT("UPowerUpSpawnComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPowerUpSpawnComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
