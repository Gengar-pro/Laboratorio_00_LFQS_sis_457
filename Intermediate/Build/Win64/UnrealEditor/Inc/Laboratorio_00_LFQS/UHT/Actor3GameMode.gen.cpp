// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Laboratorio_00_LFQS/Actor3GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActor3GameMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
LABORATORIO_00_LFQS_API UClass* Z_Construct_UClass_AActor3GameMode();
LABORATORIO_00_LFQS_API UClass* Z_Construct_UClass_AActor3GameMode_NoRegister();
LABORATORIO_00_LFQS_API UClass* Z_Construct_UClass_ARampa2_NoRegister();
LABORATORIO_00_LFQS_API UClass* Z_Construct_UClass_ARampa_NoRegister();
UPackage* Z_Construct_UPackage__Script_Laboratorio_00_LFQS();
// End Cross Module References

// Begin Class AActor3GameMode
void AActor3GameMode::StaticRegisterNativesAActor3GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActor3GameMode);
UClass* Z_Construct_UClass_AActor3GameMode_NoRegister()
{
	return AActor3GameMode::StaticClass();
}
struct Z_Construct_UClass_AActor3GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Actor3GameMode.h" },
		{ "ModuleRelativePath", "Actor3GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rampa2Class_MetaData[] = {
		{ "Category", "Spawning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clase de Rampa2 para instanciar\n" },
#endif
		{ "ModuleRelativePath", "Actor3GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clase de Rampa2 para instanciar" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RampaClass_MetaData[] = {
		{ "Category", "Spawning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clase de Rampa para instanciar\n" },
#endif
		{ "ModuleRelativePath", "Actor3GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clase de Rampa para instanciar" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rampa2SpawnLocation_MetaData[] = {
		{ "Category", "Spawning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Coordenadas de spawn de ambos actores\n" },
#endif
		{ "ModuleRelativePath", "Actor3GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Coordenadas de spawn de ambos actores" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RampaSpawnLocation_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Actor3GameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Rampa2Class;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RampaClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rampa2SpawnLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RampaSpawnLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActor3GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AActor3GameMode_Statics::NewProp_Rampa2Class = { "Rampa2Class", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor3GameMode, Rampa2Class), Z_Construct_UClass_UClass, Z_Construct_UClass_ARampa2_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rampa2Class_MetaData), NewProp_Rampa2Class_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AActor3GameMode_Statics::NewProp_RampaClass = { "RampaClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor3GameMode, RampaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ARampa_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RampaClass_MetaData), NewProp_RampaClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AActor3GameMode_Statics::NewProp_Rampa2SpawnLocation = { "Rampa2SpawnLocation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor3GameMode, Rampa2SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rampa2SpawnLocation_MetaData), NewProp_Rampa2SpawnLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AActor3GameMode_Statics::NewProp_RampaSpawnLocation = { "RampaSpawnLocation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActor3GameMode, RampaSpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RampaSpawnLocation_MetaData), NewProp_RampaSpawnLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActor3GameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor3GameMode_Statics::NewProp_Rampa2Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor3GameMode_Statics::NewProp_RampaClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor3GameMode_Statics::NewProp_Rampa2SpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActor3GameMode_Statics::NewProp_RampaSpawnLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActor3GameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AActor3GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Laboratorio_00_LFQS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActor3GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AActor3GameMode_Statics::ClassParams = {
	&AActor3GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AActor3GameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AActor3GameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActor3GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AActor3GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AActor3GameMode()
{
	if (!Z_Registration_Info_UClass_AActor3GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActor3GameMode.OuterSingleton, Z_Construct_UClass_AActor3GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AActor3GameMode.OuterSingleton;
}
template<> LABORATORIO_00_LFQS_API UClass* StaticClass<AActor3GameMode>()
{
	return AActor3GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AActor3GameMode);
AActor3GameMode::~AActor3GameMode() {}
// End Class AActor3GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_LUIS_FERNANDO_OneDrive_Documents_Unreal_Projects_Laboratorio_00_LFQS_Source_Laboratorio_00_LFQS_Actor3GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AActor3GameMode, AActor3GameMode::StaticClass, TEXT("AActor3GameMode"), &Z_Registration_Info_UClass_AActor3GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActor3GameMode), 2001086943U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_LUIS_FERNANDO_OneDrive_Documents_Unreal_Projects_Laboratorio_00_LFQS_Source_Laboratorio_00_LFQS_Actor3GameMode_h_1410329489(TEXT("/Script/Laboratorio_00_LFQS"),
	Z_CompiledInDeferFile_FID_Users_LUIS_FERNANDO_OneDrive_Documents_Unreal_Projects_Laboratorio_00_LFQS_Source_Laboratorio_00_LFQS_Actor3GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_LUIS_FERNANDO_OneDrive_Documents_Unreal_Projects_Laboratorio_00_LFQS_Source_Laboratorio_00_LFQS_Actor3GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
