// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryCpp/Public/PlayerInventoryComponent.h"
#include "InventoryCpp/Public/Items.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInventoryComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
INVENTORYCPP_API UClass* Z_Construct_UClass_UPlayerInventoryComponent();
INVENTORYCPP_API UClass* Z_Construct_UClass_UPlayerInventoryComponent_NoRegister();
INVENTORYCPP_API UScriptStruct* Z_Construct_UScriptStruct_FItemStruct2();
INVENTORYCPP_API UScriptStruct* Z_Construct_UScriptStruct_FmyInventoryItems2();
UPackage* Z_Construct_UPackage__Script_InventoryCpp();
// End Cross Module References

// Begin ScriptStruct FmyInventoryItems2
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_myInventoryItems2;
class UScriptStruct* FmyInventoryItems2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_myInventoryItems2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_myInventoryItems2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FmyInventoryItems2, (UObject*)Z_Construct_UPackage__Script_InventoryCpp(), TEXT("myInventoryItems2"));
	}
	return Z_Registration_Info_UScriptStruct_myInventoryItems2.OuterSingleton;
}
template<> INVENTORYCPP_API UScriptStruct* StaticStruct<FmyInventoryItems2>()
{
	return FmyInventoryItems2::StaticStruct();
}
struct Z_Construct_UScriptStruct_FmyInventoryItems2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FmyInventoryItems2>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FmyInventoryItems2_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryCpp,
	nullptr,
	&NewStructOps,
	"myInventoryItems2",
	nullptr,
	0,
	sizeof(FmyInventoryItems2),
	alignof(FmyInventoryItems2),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FmyInventoryItems2_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FmyInventoryItems2_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FmyInventoryItems2()
{
	if (!Z_Registration_Info_UScriptStruct_myInventoryItems2.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_myInventoryItems2.InnerSingleton, Z_Construct_UScriptStruct_FmyInventoryItems2_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_myInventoryItems2.InnerSingleton;
}
// End ScriptStruct FmyInventoryItems2

// Begin Class UPlayerInventoryComponent Function GetAnItem
struct Z_Construct_UFunction_UPlayerInventoryComponent_GetAnItem_Statics
{
	struct PlayerInventoryComponent_eventGetAnItem_Parms
	{
		int32 index;
		FItemStruct2 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInventoryComponent_GetAnItem_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInventoryComponent_eventGetAnItem_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInventoryComponent_GetAnItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInventoryComponent_eventGetAnItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FItemStruct2, METADATA_PARAMS(0, nullptr) }; // 664639469
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventoryComponent_GetAnItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryComponent_GetAnItem_Statics::NewProp_index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryComponent_GetAnItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryComponent_GetAnItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventoryComponent_GetAnItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventoryComponent, nullptr, "GetAnItem", nullptr, nullptr, Z_Construct_UFunction_UPlayerInventoryComponent_GetAnItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryComponent_GetAnItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerInventoryComponent_GetAnItem_Statics::PlayerInventoryComponent_eventGetAnItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryComponent_GetAnItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInventoryComponent_GetAnItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerInventoryComponent_GetAnItem_Statics::PlayerInventoryComponent_eventGetAnItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerInventoryComponent_GetAnItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventoryComponent_GetAnItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerInventoryComponent::execGetAnItem)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FItemStruct2*)Z_Param__Result=P_THIS->GetAnItem(Z_Param_index);
	P_NATIVE_END;
}
// End Class UPlayerInventoryComponent Function GetAnItem

// Begin Class UPlayerInventoryComponent Function GetFull
struct Z_Construct_UFunction_UPlayerInventoryComponent_GetFull_Statics
{
	struct PlayerInventoryComponent_eventGetFull_Parms
	{
		FItemStruct2 i;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_i;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInventoryComponent_GetFull_Statics::NewProp_i = { "i", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInventoryComponent_eventGetFull_Parms, i), Z_Construct_UScriptStruct_FItemStruct2, METADATA_PARAMS(0, nullptr) }; // 664639469
void Z_Construct_UFunction_UPlayerInventoryComponent_GetFull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerInventoryComponent_eventGetFull_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerInventoryComponent_GetFull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerInventoryComponent_eventGetFull_Parms), &Z_Construct_UFunction_UPlayerInventoryComponent_GetFull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventoryComponent_GetFull_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryComponent_GetFull_Statics::NewProp_i,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryComponent_GetFull_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryComponent_GetFull_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventoryComponent_GetFull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventoryComponent, nullptr, "GetFull", nullptr, nullptr, Z_Construct_UFunction_UPlayerInventoryComponent_GetFull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryComponent_GetFull_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerInventoryComponent_GetFull_Statics::PlayerInventoryComponent_eventGetFull_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryComponent_GetFull_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInventoryComponent_GetFull_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerInventoryComponent_GetFull_Statics::PlayerInventoryComponent_eventGetFull_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerInventoryComponent_GetFull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventoryComponent_GetFull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerInventoryComponent::execGetFull)
{
	P_GET_STRUCT(FItemStruct2,Z_Param_i);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetFull(Z_Param_i);
	P_NATIVE_END;
}
// End Class UPlayerInventoryComponent Function GetFull

// Begin Class UPlayerInventoryComponent Function GetItems
struct Z_Construct_UFunction_UPlayerInventoryComponent_GetItems_Statics
{
	struct PlayerInventoryComponent_eventGetItems_Parms
	{
		TArray<FItemStruct2> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInventoryComponent_GetItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemStruct2, METADATA_PARAMS(0, nullptr) }; // 664639469
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlayerInventoryComponent_GetItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInventoryComponent_eventGetItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 664639469
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventoryComponent_GetItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryComponent_GetItems_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryComponent_GetItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryComponent_GetItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventoryComponent_GetItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventoryComponent, nullptr, "GetItems", nullptr, nullptr, Z_Construct_UFunction_UPlayerInventoryComponent_GetItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryComponent_GetItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerInventoryComponent_GetItems_Statics::PlayerInventoryComponent_eventGetItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryComponent_GetItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInventoryComponent_GetItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerInventoryComponent_GetItems_Statics::PlayerInventoryComponent_eventGetItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerInventoryComponent_GetItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventoryComponent_GetItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerInventoryComponent::execGetItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FItemStruct2>*)Z_Param__Result=P_THIS->GetItems();
	P_NATIVE_END;
}
// End Class UPlayerInventoryComponent Function GetItems

// Begin Class UPlayerInventoryComponent Function ItemSort
struct Z_Construct_UFunction_UPlayerInventoryComponent_ItemSort_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventoryComponent_ItemSort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventoryComponent, nullptr, "ItemSort", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryComponent_ItemSort_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInventoryComponent_ItemSort_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerInventoryComponent_ItemSort()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventoryComponent_ItemSort_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerInventoryComponent::execItemSort)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ItemSort();
	P_NATIVE_END;
}
// End Class UPlayerInventoryComponent Function ItemSort

// Begin Class UPlayerInventoryComponent Function ItemSort2
struct Z_Construct_UFunction_UPlayerInventoryComponent_ItemSort2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventoryComponent_ItemSort2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventoryComponent, nullptr, "ItemSort2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryComponent_ItemSort2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInventoryComponent_ItemSort2_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerInventoryComponent_ItemSort2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventoryComponent_ItemSort2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerInventoryComponent::execItemSort2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ItemSort2();
	P_NATIVE_END;
}
// End Class UPlayerInventoryComponent Function ItemSort2

// Begin Class UPlayerInventoryComponent Function RemoveItems
struct Z_Construct_UFunction_UPlayerInventoryComponent_RemoveItems_Statics
{
	struct PlayerInventoryComponent_eventRemoveItems_Parms
	{
		int32 index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerInventoryComponent_RemoveItems_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerInventoryComponent_eventRemoveItems_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInventoryComponent_RemoveItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInventoryComponent_RemoveItems_Statics::NewProp_index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryComponent_RemoveItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInventoryComponent_RemoveItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInventoryComponent, nullptr, "RemoveItems", nullptr, nullptr, Z_Construct_UFunction_UPlayerInventoryComponent_RemoveItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryComponent_RemoveItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerInventoryComponent_RemoveItems_Statics::PlayerInventoryComponent_eventRemoveItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInventoryComponent_RemoveItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerInventoryComponent_RemoveItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerInventoryComponent_RemoveItems_Statics::PlayerInventoryComponent_eventRemoveItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerInventoryComponent_RemoveItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInventoryComponent_RemoveItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerInventoryComponent::execRemoveItems)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveItems(Z_Param_index);
	P_NATIVE_END;
}
// End Class UPlayerInventoryComponent Function RemoveItems

// Begin Class UPlayerInventoryComponent
void UPlayerInventoryComponent::StaticRegisterNativesUPlayerInventoryComponent()
{
	UClass* Class = UPlayerInventoryComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAnItem", &UPlayerInventoryComponent::execGetAnItem },
		{ "GetFull", &UPlayerInventoryComponent::execGetFull },
		{ "GetItems", &UPlayerInventoryComponent::execGetItems },
		{ "ItemSort", &UPlayerInventoryComponent::execItemSort },
		{ "ItemSort2", &UPlayerInventoryComponent::execItemSort2 },
		{ "RemoveItems", &UPlayerInventoryComponent::execRemoveItems },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerInventoryComponent);
UClass* Z_Construct_UClass_UPlayerInventoryComponent_NoRegister()
{
	return UPlayerInventoryComponent::StaticClass();
}
struct Z_Construct_UClass_UPlayerInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerInventoryComponent.h" },
		{ "ModuleRelativePath", "Public/PlayerInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__Items_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Full_MetaData[] = {
		{ "Category", "PlayerInventoryComponent" },
		{ "ModuleRelativePath", "Public/PlayerInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__Items;
	static void NewProp_Full_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Full;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerInventoryComponent_GetAnItem, "GetAnItem" }, // 3058357414
		{ &Z_Construct_UFunction_UPlayerInventoryComponent_GetFull, "GetFull" }, // 2528031302
		{ &Z_Construct_UFunction_UPlayerInventoryComponent_GetItems, "GetItems" }, // 3398704926
		{ &Z_Construct_UFunction_UPlayerInventoryComponent_ItemSort, "ItemSort" }, // 4126284909
		{ &Z_Construct_UFunction_UPlayerInventoryComponent_ItemSort2, "ItemSort2" }, // 1036046393
		{ &Z_Construct_UFunction_UPlayerInventoryComponent_RemoveItems, "RemoveItems" }, // 4177301931
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerInventoryComponent_Statics::NewProp__Items_Inner = { "_Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemStruct2, METADATA_PARAMS(0, nullptr) }; // 664639469
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerInventoryComponent_Statics::NewProp__Items = { "_Items", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInventoryComponent, _Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__Items_MetaData), NewProp__Items_MetaData) }; // 664639469
void Z_Construct_UClass_UPlayerInventoryComponent_Statics::NewProp_Full_SetBit(void* Obj)
{
	((UPlayerInventoryComponent*)Obj)->Full = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerInventoryComponent_Statics::NewProp_Full = { "Full", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlayerInventoryComponent), &Z_Construct_UClass_UPlayerInventoryComponent_Statics::NewProp_Full_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Full_MetaData), NewProp_Full_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventoryComponent_Statics::NewProp__Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventoryComponent_Statics::NewProp__Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventoryComponent_Statics::NewProp_Full,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventoryComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryCpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInventoryComponent_Statics::ClassParams = {
	&UPlayerInventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerInventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventoryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerInventoryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerInventoryComponent()
{
	if (!Z_Registration_Info_UClass_UPlayerInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerInventoryComponent.OuterSingleton, Z_Construct_UClass_UPlayerInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerInventoryComponent.OuterSingleton;
}
template<> INVENTORYCPP_API UClass* StaticClass<UPlayerInventoryComponent>()
{
	return UPlayerInventoryComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInventoryComponent);
UPlayerInventoryComponent::~UPlayerInventoryComponent() {}
// End Class UPlayerInventoryComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Source_InventoryCpp_Public_PlayerInventoryComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FmyInventoryItems2::StaticStruct, Z_Construct_UScriptStruct_FmyInventoryItems2_Statics::NewStructOps, TEXT("myInventoryItems2"), &Z_Registration_Info_UScriptStruct_myInventoryItems2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FmyInventoryItems2), 2098309532U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerInventoryComponent, UPlayerInventoryComponent::StaticClass, TEXT("UPlayerInventoryComponent"), &Z_Registration_Info_UClass_UPlayerInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerInventoryComponent), 962621584U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Source_InventoryCpp_Public_PlayerInventoryComponent_h_2018884610(TEXT("/Script/InventoryCpp"),
	Z_CompiledInDeferFile_FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Source_InventoryCpp_Public_PlayerInventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Source_InventoryCpp_Public_PlayerInventoryComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Source_InventoryCpp_Public_PlayerInventoryComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_D3303414_Source_repos_Inventory_InventoryCpp_5_5_Source_InventoryCpp_Public_PlayerInventoryComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
