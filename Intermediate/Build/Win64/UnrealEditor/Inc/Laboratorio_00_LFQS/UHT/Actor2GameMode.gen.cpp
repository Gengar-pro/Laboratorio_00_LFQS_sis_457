// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Laboratorio_00_LFQS/Actor2GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActor2GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
LABORATORIO_00_LFQS_API UClass* Z_Construct_UClass_AActor2GameMode();
LABORATORIO_00_LFQS_API UClass* Z_Construct_UClass_AActor2GameMode_NoRegister();
LABORATORIO_00_LFQS_API UClass* Z_Construct_UClass_ARampa_NoRegister();
UPackage* Z_Construct_UPackage__Script_Laboratorio_00_LFQS();
// End Cross Module References

// Begin Class AActor2GameMode
void AActor2GameMode::StaticRegisterNativesAActor2GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActor2GameMode);
UClass* Z_Construct_UClass_AActor2GameMode_NoRegister()
{
	return AActor2GameMode::StaticClass();
}
struct Z_Construct_UClass_AActor2GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Actor2GameMode.h" },
		{ "ModuleRelativePath", "Actor2GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedRampa_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Variable para almacenar la referencia a la rampa\n" },
#endif
		{ "ModuleRelativePath", "Actor2GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variable para almacenar la referencia a la rampa" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedRampa;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActor2GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActor2GameMode_Statics::NewProp_SpawnedRampa = { "SpawnedRampa", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor2GameMode, SpawnedRampa), Z_Construct_UClass_ARampa_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedRampa_MetaData), NewProp_SpawnedRampa_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActor2GameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor2GameMode_Statics::NewProp_SpawnedRampa,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActor2GameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AActor2GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Laboratorio_00_LFQS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActor2GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AActor2GameMode_Statics::ClassParams = {
	&AActor2GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AActor2GameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AActor2GameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActor2GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AActor2GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AActor2GameMode()
{
	if (!Z_Registration_Info_UClass_AActor2GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActor2GameMode.OuterSingleton, Z_Construct_UClass_AActor2GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AActor2GameMode.OuterSingleton;
}
template<> LABORATORIO_00_LFQS_API UClass* StaticClass<AActor2GameMode>()
{
	return AActor2GameMode::StaticClass();
}
AActor2GameMode::AActor2GameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AActor2GameMode);
AActor2GameMode::~AActor2GameMode() {}
// End Class AActor2GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_LUIS_FERNANDO_OneDrive_Documents_Unreal_Projects_Laboratorio_00_LFQS_Source_Laboratorio_00_LFQS_Actor2GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AActor2GameMode, AActor2GameMode::StaticClass, TEXT("AActor2GameMode"), &Z_Registration_Info_UClass_AActor2GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActor2GameMode), 746080738U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_LUIS_FERNANDO_OneDrive_Documents_Unreal_Projects_Laboratorio_00_LFQS_Source_Laboratorio_00_LFQS_Actor2GameMode_h_104894422(TEXT("/Script/Laboratorio_00_LFQS"),
	Z_CompiledInDeferFile_FID_Users_LUIS_FERNANDO_OneDrive_Documents_Unreal_Projects_Laboratorio_00_LFQS_Source_Laboratorio_00_LFQS_Actor2GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_LUIS_FERNANDO_OneDrive_Documents_Unreal_Projects_Laboratorio_00_LFQS_Source_Laboratorio_00_LFQS_Actor2GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
