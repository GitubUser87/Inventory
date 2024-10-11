// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryCpp_init() {}
	INVENTORYCPP_API UFunction* Z_Construct_UDelegateFunction_InventoryCpp_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_InventoryCpp;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_InventoryCpp()
	{
		if (!Z_Registration_Info_UPackage__Script_InventoryCpp.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_InventoryCpp_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/InventoryCpp",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x70AD8C63,
				0x42AA970C,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_InventoryCpp.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_InventoryCpp.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_InventoryCpp(Z_Construct_UPackage__Script_InventoryCpp, TEXT("/Script/InventoryCpp"), Z_Registration_Info_UPackage__Script_InventoryCpp, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x70AD8C63, 0x42AA970C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
