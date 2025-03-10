// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Laboratorio_00_LFQS/ActorGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
LABORATORIO_00_LFQS_API UClass* Z_Construct_UClass_AActorGameMode();
LABORATORIO_00_LFQS_API UClass* Z_Construct_UClass_AActorGameMode_NoRegister();
LABORATORIO_00_LFQS_API UClass* Z_Construct_UClass_ARampa_NoRegister();
UPackage* Z_Construct_UPackage__Script_Laboratorio_00_LFQS();
// End Cross Module References

// Begin Class AActorGameMode Function DestroyRampa
struct Z_Construct_UFunction_AActorGameMode_DestroyRampa_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Funci\xef\xbf\xbdn para destruir el actor\n" },
#endif
		{ "ModuleRelativePath", "ActorGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Funci\xef\xbf\xbdn para destruir el actor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActorGameMode_DestroyRampa_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActorGameMode, nullptr, "DestroyRampa", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AActorGameMode_DestroyRampa_Statics::Function_MetaDataParams), Z_Construct_UFunction_AActorGameMode_DestroyRampa_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AActorGameMode_DestroyRampa()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActorGameMode_DestroyRampa_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AActorGameMode::execDestroyRampa)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyRampa();
	P_NATIVE_END;
}
// End Class AActorGameMode Function DestroyRampa

// Begin Class AActorGameMode
void AActorGameMode::StaticRegisterNativesAActorGameMode()
{
	UClass* Class = AActorGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DestroyRampa", &AActorGameMode::execDestroyRampa },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActorGameMode);
UClass* Z_Construct_UClass_AActorGameMode_NoRegister()
{
	return AActorGameMode::StaticClass();
}
struct Z_Construct_UClass_AActorGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ActorGameMode.h" },
		{ "ModuleRelativePath", "ActorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedRampa_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Variable para almacenar la referencia a la rampa\n" },
#endif
		{ "ModuleRelativePath", "ActorGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variable para almacenar la referencia a la rampa" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedRampa;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AActorGameMode_DestroyRampa, "DestroyRampa" }, // 3131943601
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorGameMode_Statics::NewProp_SpawnedRampa = { "SpawnedRampa", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActorGameMode, SpawnedRampa), Z_Construct_UClass_ARampa_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedRampa_MetaData), NewProp_SpawnedRampa_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActorGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorGameMode_Statics::NewProp_SpawnedRampa,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AActorGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Laboratorio_00_LFQS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AActorGameMode_Statics::ClassParams = {
	&AActorGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AActorGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AActorGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActorGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AActorGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AActorGameMode()
{
	if (!Z_Registration_Info_UClass_AActorGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActorGameMode.OuterSingleton, Z_Construct_UClass_AActorGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AActorGameMode.OuterSingleton;
}
template<> LABORATORIO_00_LFQS_API UClass* StaticClass<AActorGameMode>()
{
	return AActorGameMode::StaticClass();
}
AActorGameMode::AActorGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AActorGameMode);
AActorGameMode::~AActorGameMode() {}
// End Class AActorGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_LUIS_FERNANDO_OneDrive_Documents_Unreal_Projects_Laboratorio_00_LFQS_Source_Laboratorio_00_LFQS_ActorGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AActorGameMode, AActorGameMode::StaticClass, TEXT("AActorGameMode"), &Z_Registration_Info_UClass_AActorGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActorGameMode), 3982605844U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_LUIS_FERNANDO_OneDrive_Documents_Unreal_Projects_Laboratorio_00_LFQS_Source_Laboratorio_00_LFQS_ActorGameMode_h_3350345639(TEXT("/Script/Laboratorio_00_LFQS"),
	Z_CompiledInDeferFile_FID_Users_LUIS_FERNANDO_OneDrive_Documents_Unreal_Projects_Laboratorio_00_LFQS_Source_Laboratorio_00_LFQS_ActorGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_LUIS_FERNANDO_OneDrive_Documents_Unreal_Projects_Laboratorio_00_LFQS_Source_Laboratorio_00_LFQS_ActorGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
