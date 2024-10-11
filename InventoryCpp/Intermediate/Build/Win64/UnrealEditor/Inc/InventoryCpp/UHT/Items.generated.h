// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORYCPP_Items_generated_h
#error "Items.generated.h already included, missing '#pragma once' in Items.h"
#endif
#define INVENTORYCPP_Items_generated_h

#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_Source_InventoryCpp_Public_Items_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemStruct_Statics; \
	INVENTORYCPP_API static class UScriptStruct* StaticStruct();


template<> INVENTORYCPP_API UScriptStruct* StaticStruct<struct FItemStruct>();

#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_Source_InventoryCpp_Public_Items_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItems(); \
	friend struct Z_Construct_UClass_AItems_Statics; \
public: \
	DECLARE_CLASS(AItems, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventoryCpp"), NO_API) \
	DECLARE_SERIALIZER(AItems)


#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_Source_InventoryCpp_Public_Items_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AItems(AItems&&); \
	AItems(const AItems&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItems); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItems); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItems) \
	NO_API virtual ~AItems();


#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_Source_InventoryCpp_Public_Items_h_31_PROLOG
#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_Source_InventoryCpp_Public_Items_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_Source_InventoryCpp_Public_Items_h_34_INCLASS_NO_PURE_DECLS \
	FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_Source_InventoryCpp_Public_Items_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYCPP_API UClass* StaticClass<class AItems>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_Source_InventoryCpp_Public_Items_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
