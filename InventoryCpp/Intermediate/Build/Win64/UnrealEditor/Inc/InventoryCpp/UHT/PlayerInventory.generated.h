// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerInventory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORYCPP_PlayerInventory_generated_h
#error "PlayerInventory.generated.h already included, missing '#pragma once' in PlayerInventory.h"
#endif
#define INVENTORYCPP_PlayerInventory_generated_h

#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_Source_InventoryCpp_Public_PlayerInventory_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryStruct_Statics; \
	INVENTORYCPP_API static class UScriptStruct* StaticStruct();


template<> INVENTORYCPP_API UScriptStruct* StaticStruct<struct FInventoryStruct>();

#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_Source_InventoryCpp_Public_PlayerInventory_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerInventory(); \
	friend struct Z_Construct_UClass_APlayerInventory_Statics; \
public: \
	DECLARE_CLASS(APlayerInventory, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventoryCpp"), NO_API) \
	DECLARE_SERIALIZER(APlayerInventory)


#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_Source_InventoryCpp_Public_PlayerInventory_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerInventory(APlayerInventory&&); \
	APlayerInventory(const APlayerInventory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerInventory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerInventory) \
	NO_API virtual ~APlayerInventory();


#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_Source_InventoryCpp_Public_PlayerInventory_h_25_PROLOG
#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_Source_InventoryCpp_Public_PlayerInventory_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_Source_InventoryCpp_Public_PlayerInventory_h_28_INCLASS_NO_PURE_DECLS \
	FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_Source_InventoryCpp_Public_PlayerInventory_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYCPP_API UClass* StaticClass<class APlayerInventory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_Source_InventoryCpp_Public_PlayerInventory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
