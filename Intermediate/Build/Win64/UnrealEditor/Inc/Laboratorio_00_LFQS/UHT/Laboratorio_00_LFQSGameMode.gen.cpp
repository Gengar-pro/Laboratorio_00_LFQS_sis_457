// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Laboratorio_00_LFQS/Laboratorio_00_LFQSGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaboratorio_00_LFQSGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
LABORATORIO_00_LFQS_API UClass* Z_Construct_UClass_ALaboratorio_00_LFQSGameMode();
LABORATORIO_00_LFQS_API UClass* Z_Construct_UClass_ALaboratorio_00_LFQSGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Laboratorio_00_LFQS();
// End Cross Module References

// Begin Class ALaboratorio_00_LFQSGameMode
void ALaboratorio_00_LFQSGameMode::StaticRegisterNativesALaboratorio_00_LFQSGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALaboratorio_00_LFQSGameMode);
UClass* Z_Construct_UClass_ALaboratorio_00_LFQSGameMode_NoRegister()
{
	return ALaboratorio_00_LFQSGameMode::StaticClass();
}
struct Z_Construct_UClass_ALaboratorio_00_LFQSGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Laboratorio_00_LFQSGameMode.h" },
		{ "ModuleRelativePath", "Laboratorio_00_LFQSGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaboratorio_00_LFQSGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALaboratorio_00_LFQSGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Laboratorio_00_LFQS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaboratorio_00_LFQSGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALaboratorio_00_LFQSGameMode_Statics::ClassParams = {
	&ALaboratorio_00_LFQSGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALaboratorio_00_LFQSGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ALaboratorio_00_LFQSGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALaboratorio_00_LFQSGameMode()
{
	if (!Z_Registration_Info_UClass_ALaboratorio_00_LFQSGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALaboratorio_00_LFQSGameMode.OuterSingleton, Z_Construct_UClass_ALaboratorio_00_LFQSGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALaboratorio_00_LFQSGameMode.OuterSingleton;
}
template<> LABORATORIO_00_LFQS_API UClass* StaticClass<ALaboratorio_00_LFQSGameMode>()
{
	return ALaboratorio_00_LFQSGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALaboratorio_00_LFQSGameMode);
ALaboratorio_00_LFQSGameMode::~ALaboratorio_00_LFQSGameMode() {}
// End Class ALaboratorio_00_LFQSGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_LUIS_FERNANDO_OneDrive_Documents_Unreal_Projects_Laboratorio_00_LFQS_Source_Laboratorio_00_LFQS_Laboratorio_00_LFQSGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALaboratorio_00_LFQSGameMode, ALaboratorio_00_LFQSGameMode::StaticClass, TEXT("ALaboratorio_00_LFQSGameMode"), &Z_Registration_Info_UClass_ALaboratorio_00_LFQSGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALaboratorio_00_LFQSGameMode), 3328947487U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_LUIS_FERNANDO_OneDrive_Documents_Unreal_Projects_Laboratorio_00_LFQS_Source_Laboratorio_00_LFQS_Laboratorio_00_LFQSGameMode_h_153360506(TEXT("/Script/Laboratorio_00_LFQS"),
	Z_CompiledInDeferFile_FID_Users_LUIS_FERNANDO_OneDrive_Documents_Unreal_Projects_Laboratorio_00_LFQS_Source_Laboratorio_00_LFQS_Laboratorio_00_LFQSGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_LUIS_FERNANDO_OneDrive_Documents_Unreal_Projects_Laboratorio_00_LFQS_Source_Laboratorio_00_LFQS_Laboratorio_00_LFQSGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
