// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryCpp/Public/PlayerInventory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInventory() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
INVENTORYCPP_API UClass* Z_Construct_UClass_APlayerInventory();
INVENTORYCPP_API UClass* Z_Construct_UClass_APlayerInventory_NoRegister();
INVENTORYCPP_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryStruct();
UPackage* Z_Construct_UPackage__Script_InventoryCpp();
// End Cross Module References

// Begin ScriptStruct FInventoryStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryStruct;
class UScriptStruct* FInventoryStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryStruct, (UObject*)Z_Construct_UPackage__Script_InventoryCpp(), TEXT("InventoryStruct"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryStruct.OuterSingleton;
}
template<> INVENTORYCPP_API UScriptStruct* StaticStruct<FInventoryStruct>()
{
	return FInventoryStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
		{ "Category", "InventoryStruct" },
		{ "ModuleRelativePath", "Public/PlayerInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_spaceleft_MetaData[] = {
		{ "Category", "InventoryStruct" },
		{ "ModuleRelativePath", "Public/PlayerInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentnumcount_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_spaceleft;
	static const UECodeGen_Private::FIntPropertyParams NewProp_currentnumcount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryStruct_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryStruct, name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name_MetaData), NewProp_name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryStruct_Statics::NewProp_spaceleft = { "spaceleft", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryStruct, spaceleft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_spaceleft_MetaData), NewProp_spaceleft_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryStruct_Statics::NewProp_currentnumcount = { "currentnumcount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryStruct, currentnumcount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentnumcount_MetaData), NewProp_currentnumcount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryStruct_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryStruct_Statics::NewProp_spaceleft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryStruct_Statics::NewProp_currentnumcount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryCpp,
	nullptr,
	&NewStructOps,
	"InventoryStruct",
	Z_Construct_UScriptStruct_FInventoryStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryStruct_Statics::PropPointers),
	sizeof(FInventoryStruct),
	alignof(FInventoryStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryStruct.InnerSingleton, Z_Construct_UScriptStruct_FInventoryStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryStruct.InnerSingleton;
}
// End ScriptStruct FInventoryStruct

// Begin Class APlayerInventory
void APlayerInventory::StaticRegisterNativesAPlayerInventory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerInventory);
UClass* Z_Construct_UClass_APlayerInventory_NoRegister()
{
	return APlayerInventory::StaticClass();
}
struct Z_Construct_UClass_APlayerInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerInventory.h" },
		{ "ModuleRelativePath", "Public/PlayerInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryInfo_MetaData[] = {
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Public/PlayerInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerInventory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerInventory_Statics::NewProp_InventoryInfo = { "InventoryInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerInventory, InventoryInfo), Z_Construct_UScriptStruct_FInventoryStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryInfo_MetaData), NewProp_InventoryInfo_MetaData) }; // 1176023713
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerInventory_Statics::NewProp_InventoryInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerInventory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerInventory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryCpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerInventory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerInventory_Statics::ClassParams = {
	&APlayerInventory::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlayerInventory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerInventory_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerInventory_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerInventory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerInventory()
{
	if (!Z_Registration_Info_UClass_APlayerInventory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerInventory.OuterSingleton, Z_Construct_UClass_APlayerInventory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerInventory.OuterSingleton;
}
template<> INVENTORYCPP_API UClass* StaticClass<APlayerInventory>()
{
	return APlayerInventory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerInventory);
APlayerInventory::~APlayerInventory() {}
// End Class APlayerInventory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_D3303414_Source_repos_InventoryCpp_Source_InventoryCpp_Public_PlayerInventory_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryStruct::StaticStruct, Z_Construct_UScriptStruct_FInventoryStruct_Statics::NewStructOps, TEXT("InventoryStruct"), &Z_Registration_Info_UScriptStruct_InventoryStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryStruct), 1176023713U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerInventory, APlayerInventory::StaticClass, TEXT("APlayerInventory"), &Z_Registration_Info_UClass_APlayerInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerInventory), 2962901107U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_D3303414_Source_repos_InventoryCpp_Source_InventoryCpp_Public_PlayerInventory_h_1825651094(TEXT("/Script/InventoryCpp"),
	Z_CompiledInDeferFile_FID_Users_D3303414_Source_repos_InventoryCpp_Source_InventoryCpp_Public_PlayerInventory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_D3303414_Source_repos_InventoryCpp_Source_InventoryCpp_Public_PlayerInventory_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_D3303414_Source_repos_InventoryCpp_Source_InventoryCpp_Public_PlayerInventory_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_D3303414_Source_repos_InventoryCpp_Source_InventoryCpp_Public_PlayerInventory_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
