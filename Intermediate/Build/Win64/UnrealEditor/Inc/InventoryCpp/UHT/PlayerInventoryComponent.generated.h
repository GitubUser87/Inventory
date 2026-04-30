// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerInventoryComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FItemStruct2;
#ifdef INVENTORYCPP_PlayerInventoryComponent_generated_h
#error "PlayerInventoryComponent.generated.h already included, missing '#pragma once' in PlayerInventoryComponent.h"
#endif
#define INVENTORYCPP_PlayerInventoryComponent_generated_h

#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Source_InventoryCpp_Public_PlayerInventoryComponent_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FmyInventoryItems2_Statics; \
	INVENTORYCPP_API static class UScriptStruct* StaticStruct();


template<> INVENTORYCPP_API UScriptStruct* StaticStruct<struct FmyInventoryItems2>();

#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Source_InventoryCpp_Public_PlayerInventoryComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFull); \
	DECLARE_FUNCTION(execItemSort2); \
	DECLARE_FUNCTION(execItemSort); \
	DECLARE_FUNCTION(execRemoveItems); \
	DECLARE_FUNCTION(execGetAnItem); \
	DECLARE_FUNCTION(execGetItems);


#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Source_InventoryCpp_Public_PlayerInventoryComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerInventoryComponent(); \
	friend struct Z_Construct_UClass_UPlayerInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventoryCpp"), NO_API) \
	DECLARE_SERIALIZER(UPlayerInventoryComponent)


#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Source_InventoryCpp_Public_PlayerInventoryComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerInventoryComponent(UPlayerInventoryComponent&&); \
	UPlayerInventoryComponent(const UPlayerInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerInventoryComponent) \
	NO_API virtual ~UPlayerInventoryComponent();


#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Source_InventoryCpp_Public_PlayerInventoryComponent_h_23_PROLOG
#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Source_InventoryCpp_Public_PlayerInventoryComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Source_InventoryCpp_Public_PlayerInventoryComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Source_InventoryCpp_Public_PlayerInventoryComponent_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Source_InventoryCpp_Public_PlayerInventoryComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYCPP_API UClass* StaticClass<class UPlayerInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Source_InventoryCpp_Public_PlayerInventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
