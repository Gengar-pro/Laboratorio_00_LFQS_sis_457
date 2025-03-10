// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Laboratorio_00_LFQS/Rampa.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRampa() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
LABORATORIO_00_LFQS_API UClass* Z_Construct_UClass_ARampa();
LABORATORIO_00_LFQS_API UClass* Z_Construct_UClass_ARampa_NoRegister();
UPackage* Z_Construct_UPackage__Script_Laboratorio_00_LFQS();
// End Cross Module References

// Begin Class ARampa
void ARampa::StaticRegisterNativesARampa()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARampa);
UClass* Z_Construct_UClass_ARampa_NoRegister()
{
	return ARampa::StaticClass();
}
struct Z_Construct_UClass_ARampa_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Rampa.h" },
		{ "ModuleRelativePath", "Rampa.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RampaMesh_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Componente de malla de la rampa\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Rampa.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Componente de malla de la rampa" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Definici\xef\xbf\xbdn de componentes que conformar\xef\xbf\xbdn la jerarqu\xef\xbf\xbd""a del actor.\n// Root: Componente ra\xef\xbf\xbdz que act\xef\xbf\xbd""a como base para los dem\xef\xbf\xbds.\n// ChildSceneComponent: Componente secundario que se adjunta al Root y sirve como un intermediario para m\xef\xbf\xbds personalizaci\xef\xbf\xbdn.\n// BoxOne: Primer componente visual (malla est\xef\xbf\xbdtica) que se adjunta al Root.\n// BoxTwo: Segundo componente visual (malla est\xef\xbf\xbdtica) que ser\xef\xbf\xbd hijo de ChildSceneComponent.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Rampa.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Definici\xef\xbf\xbdn de componentes que conformar\xef\xbf\xbdn la jerarqu\xef\xbf\xbd""a del actor.\nRoot: Componente ra\xef\xbf\xbdz que act\xef\xbf\xbd""a como base para los dem\xef\xbf\xbds.\nChildSceneComponent: Componente secundario que se adjunta al Root y sirve como un intermediario para m\xef\xbf\xbds personalizaci\xef\xbf\xbdn.\nBoxOne: Primer componente visual (malla est\xef\xbf\xbdtica) que se adjunta al Root.\nBoxTwo: Segundo componente visual (malla est\xef\xbf\xbdtica) que ser\xef\xbf\xbd hijo de ChildSceneComponent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildSceneComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Rampa.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxOne_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Rampa.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxTwo_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Rampa.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RampaMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildSceneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxOne;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxTwo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARampa>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARampa_Statics::NewProp_RampaMesh = { "RampaMesh", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARampa, RampaMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RampaMesh_MetaData), NewProp_RampaMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARampa_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARampa, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARampa_Statics::NewProp_ChildSceneComponent = { "ChildSceneComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARampa, ChildSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildSceneComponent_MetaData), NewProp_ChildSceneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARampa_Statics::NewProp_BoxOne = { "BoxOne", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARampa, BoxOne), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxOne_MetaData), NewProp_BoxOne_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARampa_Statics::NewProp_BoxTwo = { "BoxTwo", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARampa, BoxTwo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxTwo_MetaData), NewProp_BoxTwo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARampa_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARampa_Statics::NewProp_RampaMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARampa_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARampa_Statics::NewProp_ChildSceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARampa_Statics::NewProp_BoxOne,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARampa_Statics::NewProp_BoxTwo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARampa_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARampa_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Laboratorio_00_LFQS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARampa_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARampa_Statics::ClassParams = {
	&ARampa::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARampa_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARampa_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARampa_Statics::Class_MetaDataParams), Z_Construct_UClass_ARampa_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARampa()
{
	if (!Z_Registration_Info_UClass_ARampa.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARampa.OuterSingleton, Z_Construct_UClass_ARampa_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARampa.OuterSingleton;
}
template<> LABORATORIO_00_LFQS_API UClass* StaticClass<ARampa>()
{
	return ARampa::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARampa);
ARampa::~ARampa() {}
// End Class ARampa

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_LUIS_FERNANDO_OneDrive_Documents_Unreal_Projects_Laboratorio_00_LFQS_Source_Laboratorio_00_LFQS_Rampa_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARampa, ARampa::StaticClass, TEXT("ARampa"), &Z_Registration_Info_UClass_ARampa, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARampa), 2038168893U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_LUIS_FERNANDO_OneDrive_Documents_Unreal_Projects_Laboratorio_00_LFQS_Source_Laboratorio_00_LFQS_Rampa_h_1846816006(TEXT("/Script/Laboratorio_00_LFQS"),
	Z_CompiledInDeferFile_FID_Users_LUIS_FERNANDO_OneDrive_Documents_Unreal_Projects_Laboratorio_00_LFQS_Source_Laboratorio_00_LFQS_Rampa_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_LUIS_FERNANDO_OneDrive_Documents_Unreal_Projects_Laboratorio_00_LFQS_Source_Laboratorio_00_LFQS_Rampa_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
