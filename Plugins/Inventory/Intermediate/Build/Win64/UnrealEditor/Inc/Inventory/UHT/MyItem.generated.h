// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef INVENTORY_MyItem_generated_h
#error "MyItem.generated.h already included, missing '#pragma once' in MyItem.h"
#endif
#define INVENTORY_MyItem_generated_h

#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Plugins_Inventory_Source_Inventory_Public_MyItem_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemStruct_Statics; \
	INVENTORY_API static class UScriptStruct* StaticStruct();


template<> INVENTORY_API UScriptStruct* StaticStruct<struct FItemStruct>();

#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Plugins_Inventory_Source_Inventory_Public_MyItem_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOverlapEnd); \
	DECLARE_FUNCTION(execGetWeight); \
	DECLARE_FUNCTION(execOverlapBegin);


#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Plugins_Inventory_Source_Inventory_Public_MyItem_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyItem(); \
	friend struct Z_Construct_UClass_AMyItem_Statics; \
public: \
	DECLARE_CLASS(AMyItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inventory"), NO_API) \
	DECLARE_SERIALIZER(AMyItem)


#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Plugins_Inventory_Source_Inventory_Public_MyItem_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyItem(AMyItem&&); \
	AMyItem(const AMyItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyItem) \
	NO_API virtual ~AMyItem();


#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Plugins_Inventory_Source_Inventory_Public_MyItem_h_41_PROLOG
#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Plugins_Inventory_Source_Inventory_Public_MyItem_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Plugins_Inventory_Source_Inventory_Public_MyItem_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Plugins_Inventory_Source_Inventory_Public_MyItem_h_44_INCLASS_NO_PURE_DECLS \
	FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Plugins_Inventory_Source_Inventory_Public_MyItem_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORY_API UClass* StaticClass<class AMyItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Plugins_Inventory_Source_Inventory_Public_MyItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
