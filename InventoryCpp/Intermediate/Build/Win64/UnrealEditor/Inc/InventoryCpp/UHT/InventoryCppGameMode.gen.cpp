// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryCpp/InventoryCppGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryCppGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
INVENTORYCPP_API UClass* Z_Construct_UClass_AInventoryCppGameMode();
INVENTORYCPP_API UClass* Z_Construct_UClass_AInventoryCppGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryCpp();
// End Cross Module References

// Begin Class AInventoryCppGameMode
void AInventoryCppGameMode::StaticRegisterNativesAInventoryCppGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInventoryCppGameMode);
UClass* Z_Construct_UClass_AInventoryCppGameMode_NoRegister()
{
	return AInventoryCppGameMode::StaticClass();
}
struct Z_Construct_UClass_AInventoryCppGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "InventoryCppGameMode.h" },
		{ "ModuleRelativePath", "InventoryCppGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInventoryCppGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AInventoryCppGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryCpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryCppGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInventoryCppGameMode_Statics::ClassParams = {
	&AInventoryCppGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryCppGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AInventoryCppGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInventoryCppGameMode()
{
	if (!Z_Registration_Info_UClass_AInventoryCppGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInventoryCppGameMode.OuterSingleton, Z_Construct_UClass_AInventoryCppGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInventoryCppGameMode.OuterSingleton;
}
template<> INVENTORYCPP_API UClass* StaticClass<AInventoryCppGameMode>()
{
	return AInventoryCppGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInventoryCppGameMode);
AInventoryCppGameMode::~AInventoryCppGameMode() {}
// End Class AInventoryCppGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_D3303414_Source_repos_InventoryCpp_Source_InventoryCpp_InventoryCppGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInventoryCppGameMode, AInventoryCppGameMode::StaticClass, TEXT("AInventoryCppGameMode"), &Z_Registration_Info_UClass_AInventoryCppGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInventoryCppGameMode), 2785747215U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_D3303414_Source_repos_InventoryCpp_Source_InventoryCpp_InventoryCppGameMode_h_337323286(TEXT("/Script/InventoryCpp"),
	Z_CompiledInDeferFile_FID_Users_D3303414_Source_repos_InventoryCpp_Source_InventoryCpp_InventoryCppGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_D3303414_Source_repos_InventoryCpp_Source_InventoryCpp_InventoryCppGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
