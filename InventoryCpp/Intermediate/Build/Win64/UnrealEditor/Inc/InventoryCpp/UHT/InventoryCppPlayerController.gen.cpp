// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryCpp/InventoryCppPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryCppPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
INVENTORYCPP_API UClass* Z_Construct_UClass_AInventoryCppPlayerController();
INVENTORYCPP_API UClass* Z_Construct_UClass_AInventoryCppPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryCpp();
// End Cross Module References

// Begin Class AInventoryCppPlayerController
void AInventoryCppPlayerController::StaticRegisterNativesAInventoryCppPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInventoryCppPlayerController);
UClass* Z_Construct_UClass_AInventoryCppPlayerController_NoRegister()
{
	return AInventoryCppPlayerController::StaticClass();
}
struct Z_Construct_UClass_AInventoryCppPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "InventoryCppPlayerController.h" },
		{ "ModuleRelativePath", "InventoryCppPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "InventoryCppPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInventoryCppPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInventoryCppPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInventoryCppPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInventoryCppPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryCppPlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryCppPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInventoryCppPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryCpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryCppPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInventoryCppPlayerController_Statics::ClassParams = {
	&AInventoryCppPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AInventoryCppPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryCppPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryCppPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AInventoryCppPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInventoryCppPlayerController()
{
	if (!Z_Registration_Info_UClass_AInventoryCppPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInventoryCppPlayerController.OuterSingleton, Z_Construct_UClass_AInventoryCppPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInventoryCppPlayerController.OuterSingleton;
}
template<> INVENTORYCPP_API UClass* StaticClass<AInventoryCppPlayerController>()
{
	return AInventoryCppPlayerController::StaticClass();
}
AInventoryCppPlayerController::AInventoryCppPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInventoryCppPlayerController);
AInventoryCppPlayerController::~AInventoryCppPlayerController() {}
// End Class AInventoryCppPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_D3303414_Source_repos_InventoryCpp_Source_InventoryCpp_InventoryCppPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInventoryCppPlayerController, AInventoryCppPlayerController::StaticClass, TEXT("AInventoryCppPlayerController"), &Z_Registration_Info_UClass_AInventoryCppPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInventoryCppPlayerController), 504422945U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_D3303414_Source_repos_InventoryCpp_Source_InventoryCpp_InventoryCppPlayerController_h_2300071225(TEXT("/Script/InventoryCpp"),
	Z_CompiledInDeferFile_FID_Users_D3303414_Source_repos_InventoryCpp_Source_InventoryCpp_InventoryCppPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_D3303414_Source_repos_InventoryCpp_Source_InventoryCpp_InventoryCppPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
