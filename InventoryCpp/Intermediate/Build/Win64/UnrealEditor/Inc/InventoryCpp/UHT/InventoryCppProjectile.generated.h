// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryCppProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef INVENTORYCPP_InventoryCppProjectile_generated_h
#error "InventoryCppProjectile.generated.h already included, missing '#pragma once' in InventoryCppProjectile.h"
#endif
#define INVENTORYCPP_InventoryCppProjectile_generated_h

#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_Source_InventoryCpp_InventoryCppProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_Source_InventoryCpp_InventoryCppProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInventoryCppProjectile(); \
	friend struct Z_Construct_UClass_AInventoryCppProjectile_Statics; \
public: \
	DECLARE_CLASS(AInventoryCppProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventoryCpp"), NO_API) \
	DECLARE_SERIALIZER(AInventoryCppProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_Source_InventoryCpp_InventoryCppProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AInventoryCppProjectile(AInventoryCppProjectile&&); \
	AInventoryCppProjectile(const AInventoryCppProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInventoryCppProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInventoryCppProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInventoryCppProjectile) \
	NO_API virtual ~AInventoryCppProjectile();


#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_Source_InventoryCpp_InventoryCppProjectile_h_12_PROLOG
#define FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_Source_InventoryCpp_InventoryCppProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_Source_InventoryCpp_InventoryCppProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_Source_InventoryCpp_InventoryCppProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_Source_InventoryCpp_InventoryCppProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYCPP_API UClass* StaticClass<class AInventoryCppProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_Source_InventoryCpp_InventoryCppProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
