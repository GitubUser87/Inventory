// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyInventoryComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FItemStruct;
#ifdef INVENTORY_MyInventoryComponent_generated_h
#error "MyInventoryComponent.generated.h already included, missing '#pragma once' in MyInventoryComponent.h"
#endif
#define INVENTORY_MyInventoryComponent_generated_h

#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Plugins_Inventory_Source_Inventory_Public_MyInventoryComponent_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FmyInventoryItems_Statics; \
	INVENTORY_API static class UScriptStruct* StaticStruct();


template<> INVENTORY_API UScriptStruct* StaticStruct<struct FmyInventoryItems>();

#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Plugins_Inventory_Source_Inventory_Public_MyInventoryComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFull); \
	DECLARE_FUNCTION(execItemSort2); \
	DECLARE_FUNCTION(execItemSort); \
	DECLARE_FUNCTION(execRemoveItems); \
	DECLARE_FUNCTION(execGetAnItem); \
	DECLARE_FUNCTION(execGetItems);


#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Plugins_Inventory_Source_Inventory_Public_MyInventoryComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyInventoryComponent(); \
	friend struct Z_Construct_UClass_UMyInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UMyInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inventory"), NO_API) \
	DECLARE_SERIALIZER(UMyInventoryComponent)


#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Plugins_Inventory_Source_Inventory_Public_MyInventoryComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyInventoryComponent(UMyInventoryComponent&&); \
	UMyInventoryComponent(const UMyInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyInventoryComponent) \
	NO_API virtual ~UMyInventoryComponent();


#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Plugins_Inventory_Source_Inventory_Public_MyInventoryComponent_h_23_PROLOG
#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Plugins_Inventory_Source_Inventory_Public_MyInventoryComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Plugins_Inventory_Source_Inventory_Public_MyInventoryComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Plugins_Inventory_Source_Inventory_Public_MyInventoryComponent_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Plugins_Inventory_Source_Inventory_Public_MyInventoryComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORY_API UClass* StaticClass<class UMyInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Plugins_Inventory_Source_Inventory_Public_MyInventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
