// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/Public/MyPluginCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPluginCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
INVENTORY_API UClass* Z_Construct_UClass_AMyPluginCharacter();
INVENTORY_API UClass* Z_Construct_UClass_AMyPluginCharacter_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UMyInventoryComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// End Cross Module References

// Begin Class AMyPluginCharacter Function GetInventory
struct Z_Construct_UFunction_AMyPluginCharacter_GetInventory_Statics
{
	struct MyPluginCharacter_eventGetInventory_Parms
	{
		UMyInventoryComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "something" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This will return the inventory to the player so that they can see the contents.\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPluginCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will return the inventory to the player so that they can see the contents." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPluginCharacter_GetInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPluginCharacter_eventGetInventory_Parms, ReturnValue), Z_Construct_UClass_UMyInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPluginCharacter_GetInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPluginCharacter_GetInventory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPluginCharacter_GetInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPluginCharacter_GetInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPluginCharacter, nullptr, "GetInventory", nullptr, nullptr, Z_Construct_UFunction_AMyPluginCharacter_GetInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPluginCharacter_GetInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyPluginCharacter_GetInventory_Statics::MyPluginCharacter_eventGetInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPluginCharacter_GetInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPluginCharacter_GetInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyPluginCharacter_GetInventory_Statics::MyPluginCharacter_eventGetInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPluginCharacter_GetInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPluginCharacter_GetInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPluginCharacter::execGetInventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMyInventoryComponent**)Z_Param__Result=P_THIS->GetInventory();
	P_NATIVE_END;
}
// End Class AMyPluginCharacter Function GetInventory

// Begin Class AMyPluginCharacter
void AMyPluginCharacter::StaticRegisterNativesAMyPluginCharacter()
{
	UClass* Class = AMyPluginCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInventory", &AMyPluginCharacter::execGetInventory },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPluginCharacter);
UClass* Z_Construct_UClass_AMyPluginCharacter_NoRegister()
{
	return AMyPluginCharacter::StaticClass();
}
struct Z_Construct_UClass_AMyPluginCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPluginCharacter.h" },
		{ "ModuleRelativePath", "Public/MyPluginCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPluginCharacter_GetInventory, "GetInventory" }, // 4168827794
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPluginCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyPluginCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPluginCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPluginCharacter_Statics::ClassParams = {
	&AMyPluginCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPluginCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPluginCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyPluginCharacter()
{
	if (!Z_Registration_Info_UClass_AMyPluginCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPluginCharacter.OuterSingleton, Z_Construct_UClass_AMyPluginCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyPluginCharacter.OuterSingleton;
}
template<> INVENTORY_API UClass* StaticClass<AMyPluginCharacter>()
{
	return AMyPluginCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPluginCharacter);
AMyPluginCharacter::~AMyPluginCharacter() {}
// End Class AMyPluginCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Plugins_Inventory_Source_Inventory_Public_MyPluginCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyPluginCharacter, AMyPluginCharacter::StaticClass, TEXT("AMyPluginCharacter"), &Z_Registration_Info_UClass_AMyPluginCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPluginCharacter), 2403421847U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Plugins_Inventory_Source_Inventory_Public_MyPluginCharacter_h_3926522266(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Plugins_Inventory_Source_Inventory_Public_MyPluginCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Plugins_Inventory_Source_Inventory_Public_MyPluginCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
