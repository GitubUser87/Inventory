// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyPluginCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMyInventoryComponent;
#ifdef INVENTORY_MyPluginCharacter_generated_h
#error "MyPluginCharacter.generated.h already included, missing '#pragma once' in MyPluginCharacter.h"
#endif
#define INVENTORY_MyPluginCharacter_generated_h

#define FID_Users_D3303414_Source_Inventory_Plugins_Inventory_Source_Inventory_Public_MyPluginCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInventory);


#define FID_Users_D3303414_Source_Inventory_Plugins_Inventory_Source_Inventory_Public_MyPluginCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPluginCharacter(); \
	friend struct Z_Construct_UClass_AMyPluginCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyPluginCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inventory"), NO_API) \
	DECLARE_SERIALIZER(AMyPluginCharacter)


#define FID_Users_D3303414_Source_Inventory_Plugins_Inventory_Source_Inventory_Public_MyPluginCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyPluginCharacter(AMyPluginCharacter&&); \
	AMyPluginCharacter(const AMyPluginCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPluginCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPluginCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPluginCharacter) \
	NO_API virtual ~AMyPluginCharacter();


#define FID_Users_D3303414_Source_Inventory_Plugins_Inventory_Source_Inventory_Public_MyPluginCharacter_h_19_PROLOG
#define FID_Users_D3303414_Source_Inventory_Plugins_Inventory_Source_Inventory_Public_MyPluginCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_D3303414_Source_Inventory_Plugins_Inventory_Source_Inventory_Public_MyPluginCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_D3303414_Source_Inventory_Plugins_Inventory_Source_Inventory_Public_MyPluginCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_D3303414_Source_Inventory_Plugins_Inventory_Source_Inventory_Public_MyPluginCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORY_API UClass* StaticClass<class AMyPluginCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_D3303414_Source_Inventory_Plugins_Inventory_Source_Inventory_Public_MyPluginCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
