// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerInventoryComponent.h"
#include "InventoryCppCharacter.generated.h"

// Sets default values for this component's properties
UPlayerInventoryComponent::UPlayerInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

//This will get the items that have been stored in the array.
TArray<FItemStruct2> UPlayerInventoryComponent::GetItems()
{

	return _Items;
}
//FString tempstruct;

//for (int32 Index = 0; Index != _Items.Num(); ++Index)
//{
//	tempstruct += _Items[Index].name;
//	tempstruct += TEXT(" Value: ");
//	tempstruct.AppendInt(_Items[Index].value);
//	//tempstring += TEXT(" Weight: ");
//	//tempstring.AppendInt( _Items[Index].weight);
//	tempstruct += LINE_TERMINATOR;
//	
//}
//return tempstruct;

//This gets an item from the array of items.
FItemStruct2 UPlayerInventoryComponent::GetAnItem(int32 index)
{
	return _Items[index];
}
//UE_LOG(LogTemp, Warning, TEXT("Item Get!"));
//FString Item = _Items[index].name;

//This will remove the item selected from the inventory upon the button being pressed.
void UPlayerInventoryComponent::RemoveItems(int32 index)
{
	RemoveWeight(_Items[index]);
	_Items.RemoveAt(index);

	UE_LOG(LogTemp, Warning, TEXT("REMOVE ITEMS"));
	for (auto& element : _Items)
	{
		UE_LOG(LogTemp, Warning, TEXT("%s %d"), (*element.name), element.value);
		UE_LOG(LogTemp, Warning, TEXT("%f"), currentweight);
	}
}

//This will add the items to the inventory array.
void UPlayerInventoryComponent::AddItems(FItemStruct2 i)
{
	FmyInventoryItems2 tempstruct;
	_Items.Add(i);
	currentweight += i.weight;
}

//tempstruct.itemname = iname;
//tempstruct.value = ivalue;
//tempstruct.weight = iweight;
//currentweight = currentweight + iweight;

//_Items.Sort([](FItemStruct e1, FItemStruct e2) {
//	return e1.value < e2.value;
//});


//This will sort the items based off their values.
void UPlayerInventoryComponent::ItemSort()
{
	order = !order;
	if (order)
	{
		_Items.Sort([](FItemStruct2 e1, FItemStruct2 e2) {
			return e1.value < e2.value;
			});
	}
	else
	{
		_Items.Sort([](FItemStruct2 e1, FItemStruct2 e2) {
			return e1.value > e2.value;
			});
	}

	for (auto& e: _Items)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d"), e.value);
	}

}

//This will sort the items based off their weights.
void UPlayerInventoryComponent::ItemSort2()
{
	order = !order;
	if (order)
	{
		_Items.Sort([](FItemStruct2 e1, FItemStruct2 e2) {
			return e1.weight < e2.weight;
			});
	}
	else
	{
		_Items.Sort([](FItemStruct2 e1, FItemStruct2 e2) {
			return e1.weight > e2.weight;
			});
	}
}

//This will add the items weight to the inventories current weight. If it goes over the max weight then it will not add them. Will also work by not picking up items that would cause it to go over the max weight.
bool UPlayerInventoryComponent::CheckMaxWeight(float GetWeight)
{
	UE_LOG(LogTemp, Warning, TEXT("Begin adding"));
	return currentweight + GetWeight > maxWeight;

}

//for (auto& item: _Items)
//{
//	currentweight = currentweight + item.weight;
//	currentweight = currentweight + GetWeight;
//}

//if (currentweight > maxWeight)
//{
//	UE_LOG(LogTemp, Warning, TEXT("Full"));
//	Full = true;
//	return;
//}

//This should begin to remove the weight of the items from the current weight.
void UPlayerInventoryComponent::RemoveWeight(FItemStruct2 i)
{
	UE_LOG(LogTemp, Warning, TEXT("Removing weight"));
	currentweight -= i.weight;
}



//This will tell the player that the inventory is full.
bool UPlayerInventoryComponent::GetFull(FItemStruct2 i)
{
	return CheckMaxWeight(i.weight);
}

// Called when the game starts
void UPlayerInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPlayerInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

