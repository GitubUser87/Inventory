// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/Public/MyInventoryComponent.h"
#include "Inventory/Public/MyItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyInventoryComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
INVENTORY_API UClass* Z_Construct_UClass_UMyInventoryComponent();
INVENTORY_API UClass* Z_Construct_UClass_UMyInventoryComponent_NoRegister();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FItemStruct();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FmyInventoryItems();
UPackage* Z_Construct_UPackage__Script_Inventory();
// End Cross Module References

// Begin ScriptStruct FmyInventoryItems
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_myInventoryItems;
class UScriptStruct* FmyInventoryItems::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_myInventoryItems.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_myInventoryItems.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FmyInventoryItems, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("myInventoryItems"));
	}
	return Z_Registration_Info_UScriptStruct_myInventoryItems.OuterSingleton;
}
template<> INVENTORY_API UScriptStruct* StaticStruct<FmyInventoryItems>()
{
	return FmyInventoryItems::StaticStruct();
}
struct Z_Construct_UScriptStruct_FmyInventoryItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FmyInventoryItems>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FmyInventoryItems_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	nullptr,
	&NewStructOps,
	"myInventoryItems",
	nullptr,
	0,
	sizeof(FmyInventoryItems),
	alignof(FmyInventoryItems),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FmyInventoryItems_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FmyInventoryItems_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FmyInventoryItems()
{
	if (!Z_Registration_Info_UScriptStruct_myInventoryItems.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_myInventoryItems.InnerSingleton, Z_Construct_UScriptStruct_FmyInventoryItems_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_myInventoryItems.InnerSingleton;
}
// End ScriptStruct FmyInventoryItems

// Begin Class UMyInventoryComponent Function GetAnItem
struct Z_Construct_UFunction_UMyInventoryComponent_GetAnItem_Statics
{
	struct MyInventoryComponent_eventGetAnItem_Parms
	{
		int32 index;
		FItemStruct ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "something" },
		{ "ModuleRelativePath", "Public/MyInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyInventoryComponent_GetAnItem_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyInventoryComponent_eventGetAnItem_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyInventoryComponent_GetAnItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyInventoryComponent_eventGetAnItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FItemStruct, METADATA_PARAMS(0, nullptr) }; // 3360267000
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyInventoryComponent_GetAnItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyInventoryComponent_GetAnItem_Statics::NewProp_index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyInventoryComponent_GetAnItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInventoryComponent_GetAnItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyInventoryComponent_GetAnItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyInventoryComponent, nullptr, "GetAnItem", nullptr, nullptr, Z_Construct_UFunction_UMyInventoryComponent_GetAnItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInventoryComponent_GetAnItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyInventoryComponent_GetAnItem_Statics::MyInventoryComponent_eventGetAnItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInventoryComponent_GetAnItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyInventoryComponent_GetAnItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyInventoryComponent_GetAnItem_Statics::MyInventoryComponent_eventGetAnItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyInventoryComponent_GetAnItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyInventoryComponent_GetAnItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyInventoryComponent::execGetAnItem)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FItemStruct*)Z_Param__Result=P_THIS->GetAnItem(Z_Param_index);
	P_NATIVE_END;
}
// End Class UMyInventoryComponent Function GetAnItem

// Begin Class UMyInventoryComponent Function GetFull
struct Z_Construct_UFunction_UMyInventoryComponent_GetFull_Statics
{
	struct MyInventoryComponent_eventGetFull_Parms
	{
		FItemStruct i;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "something" },
		{ "ModuleRelativePath", "Public/MyInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_i;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyInventoryComponent_GetFull_Statics::NewProp_i = { "i", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyInventoryComponent_eventGetFull_Parms, i), Z_Construct_UScriptStruct_FItemStruct, METADATA_PARAMS(0, nullptr) }; // 3360267000
void Z_Construct_UFunction_UMyInventoryComponent_GetFull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MyInventoryComponent_eventGetFull_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyInventoryComponent_GetFull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyInventoryComponent_eventGetFull_Parms), &Z_Construct_UFunction_UMyInventoryComponent_GetFull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyInventoryComponent_GetFull_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyInventoryComponent_GetFull_Statics::NewProp_i,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyInventoryComponent_GetFull_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInventoryComponent_GetFull_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyInventoryComponent_GetFull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyInventoryComponent, nullptr, "GetFull", nullptr, nullptr, Z_Construct_UFunction_UMyInventoryComponent_GetFull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInventoryComponent_GetFull_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyInventoryComponent_GetFull_Statics::MyInventoryComponent_eventGetFull_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInventoryComponent_GetFull_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyInventoryComponent_GetFull_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyInventoryComponent_GetFull_Statics::MyInventoryComponent_eventGetFull_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyInventoryComponent_GetFull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyInventoryComponent_GetFull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyInventoryComponent::execGetFull)
{
	P_GET_STRUCT(FItemStruct,Z_Param_i);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetFull(Z_Param_i);
	P_NATIVE_END;
}
// End Class UMyInventoryComponent Function GetFull

// Begin Class UMyInventoryComponent Function GetItems
struct Z_Construct_UFunction_UMyInventoryComponent_GetItems_Statics
{
	struct MyInventoryComponent_eventGetItems_Parms
	{
		TArray<FItemStruct> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "something" },
		{ "ModuleRelativePath", "Public/MyInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyInventoryComponent_GetItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemStruct, METADATA_PARAMS(0, nullptr) }; // 3360267000
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyInventoryComponent_GetItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyInventoryComponent_eventGetItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3360267000
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyInventoryComponent_GetItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyInventoryComponent_GetItems_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyInventoryComponent_GetItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInventoryComponent_GetItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyInventoryComponent_GetItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyInventoryComponent, nullptr, "GetItems", nullptr, nullptr, Z_Construct_UFunction_UMyInventoryComponent_GetItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInventoryComponent_GetItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyInventoryComponent_GetItems_Statics::MyInventoryComponent_eventGetItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInventoryComponent_GetItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyInventoryComponent_GetItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyInventoryComponent_GetItems_Statics::MyInventoryComponent_eventGetItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyInventoryComponent_GetItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyInventoryComponent_GetItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyInventoryComponent::execGetItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FItemStruct>*)Z_Param__Result=P_THIS->GetItems();
	P_NATIVE_END;
}
// End Class UMyInventoryComponent Function GetItems

// Begin Class UMyInventoryComponent Function ItemSort
struct Z_Construct_UFunction_UMyInventoryComponent_ItemSort_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "something" },
		{ "ModuleRelativePath", "Public/MyInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyInventoryComponent_ItemSort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyInventoryComponent, nullptr, "ItemSort", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInventoryComponent_ItemSort_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyInventoryComponent_ItemSort_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyInventoryComponent_ItemSort()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyInventoryComponent_ItemSort_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyInventoryComponent::execItemSort)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ItemSort();
	P_NATIVE_END;
}
// End Class UMyInventoryComponent Function ItemSort

// Begin Class UMyInventoryComponent Function ItemSort2
struct Z_Construct_UFunction_UMyInventoryComponent_ItemSort2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "something" },
		{ "ModuleRelativePath", "Public/MyInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyInventoryComponent_ItemSort2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyInventoryComponent, nullptr, "ItemSort2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInventoryComponent_ItemSort2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyInventoryComponent_ItemSort2_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyInventoryComponent_ItemSort2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyInventoryComponent_ItemSort2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyInventoryComponent::execItemSort2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ItemSort2();
	P_NATIVE_END;
}
// End Class UMyInventoryComponent Function ItemSort2

// Begin Class UMyInventoryComponent Function RemoveItems
struct Z_Construct_UFunction_UMyInventoryComponent_RemoveItems_Statics
{
	struct MyInventoryComponent_eventRemoveItems_Parms
	{
		int32 index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "something" },
		{ "ModuleRelativePath", "Public/MyInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyInventoryComponent_RemoveItems_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyInventoryComponent_eventRemoveItems_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyInventoryComponent_RemoveItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyInventoryComponent_RemoveItems_Statics::NewProp_index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInventoryComponent_RemoveItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyInventoryComponent_RemoveItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyInventoryComponent, nullptr, "RemoveItems", nullptr, nullptr, Z_Construct_UFunction_UMyInventoryComponent_RemoveItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInventoryComponent_RemoveItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyInventoryComponent_RemoveItems_Statics::MyInventoryComponent_eventRemoveItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInventoryComponent_RemoveItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyInventoryComponent_RemoveItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyInventoryComponent_RemoveItems_Statics::MyInventoryComponent_eventRemoveItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyInventoryComponent_RemoveItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyInventoryComponent_RemoveItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyInventoryComponent::execRemoveItems)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveItems(Z_Param_index);
	P_NATIVE_END;
}
// End Class UMyInventoryComponent Function RemoveItems

// Begin Class UMyInventoryComponent
void UMyInventoryComponent::StaticRegisterNativesUMyInventoryComponent()
{
	UClass* Class = UMyInventoryComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAnItem", &UMyInventoryComponent::execGetAnItem },
		{ "GetFull", &UMyInventoryComponent::execGetFull },
		{ "GetItems", &UMyInventoryComponent::execGetItems },
		{ "ItemSort", &UMyInventoryComponent::execItemSort },
		{ "ItemSort2", &UMyInventoryComponent::execItemSort2 },
		{ "RemoveItems", &UMyInventoryComponent::execRemoveItems },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyInventoryComponent);
UClass* Z_Construct_UClass_UMyInventoryComponent_NoRegister()
{
	return UMyInventoryComponent::StaticClass();
}
struct Z_Construct_UClass_UMyInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MyInventoryComponent.h" },
		{ "ModuleRelativePath", "Public/MyInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__Items_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Full_MetaData[] = {
		{ "Category", "something" },
		{ "ModuleRelativePath", "Public/MyInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__Items;
	static void NewProp_Full_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Full;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyInventoryComponent_GetAnItem, "GetAnItem" }, // 675674568
		{ &Z_Construct_UFunction_UMyInventoryComponent_GetFull, "GetFull" }, // 305122414
		{ &Z_Construct_UFunction_UMyInventoryComponent_GetItems, "GetItems" }, // 1412621278
		{ &Z_Construct_UFunction_UMyInventoryComponent_ItemSort, "ItemSort" }, // 3440161644
		{ &Z_Construct_UFunction_UMyInventoryComponent_ItemSort2, "ItemSort2" }, // 4159440377
		{ &Z_Construct_UFunction_UMyInventoryComponent_RemoveItems, "RemoveItems" }, // 3773682610
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp__Items_Inner = { "_Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemStruct, METADATA_PARAMS(0, nullptr) }; // 3360267000
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp__Items = { "_Items", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInventoryComponent, _Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__Items_MetaData), NewProp__Items_MetaData) }; // 3360267000
void Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp_Full_SetBit(void* Obj)
{
	((UMyInventoryComponent*)Obj)->Full = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp_Full = { "Full", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMyInventoryComponent), &Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp_Full_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Full_MetaData), NewProp_Full_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp__Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp__Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp_Full,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInventoryComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyInventoryComponent_Statics::ClassParams = {
	&UMyInventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMyInventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyInventoryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyInventoryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyInventoryComponent()
{
	if (!Z_Registration_Info_UClass_UMyInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyInventoryComponent.OuterSingleton, Z_Construct_UClass_UMyInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyInventoryComponent.OuterSingleton;
}
template<> INVENTORY_API UClass* StaticClass<UMyInventoryComponent>()
{
	return UMyInventoryComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyInventoryComponent);
UMyInventoryComponent::~UMyInventoryComponent() {}
// End Class UMyInventoryComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_D3303414_Source_Inventory_Plugins_Inventory_Source_Inventory_Public_MyInventoryComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FmyInventoryItems::StaticStruct, Z_Construct_UScriptStruct_FmyInventoryItems_Statics::NewStructOps, TEXT("myInventoryItems"), &Z_Registration_Info_UScriptStruct_myInventoryItems, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FmyInventoryItems), 1444951152U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyInventoryComponent, UMyInventoryComponent::StaticClass, TEXT("UMyInventoryComponent"), &Z_Registration_Info_UClass_UMyInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyInventoryComponent), 3909320798U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_D3303414_Source_Inventory_Plugins_Inventory_Source_Inventory_Public_MyInventoryComponent_h_4124656046(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Users_D3303414_Source_Inventory_Plugins_Inventory_Source_Inventory_Public_MyInventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_D3303414_Source_Inventory_Plugins_Inventory_Source_Inventory_Public_MyInventoryComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_D3303414_Source_Inventory_Plugins_Inventory_Source_Inventory_Public_MyInventoryComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_D3303414_Source_Inventory_Plugins_Inventory_Source_Inventory_Public_MyInventoryComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
