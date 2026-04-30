// Fill out your copyright notice in the Description page of Project Settings.


#include "MyInventoryComponent.h"

// Sets default values for this component's properties
UMyInventoryComponent::UMyInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

//This will get the items that have been stored in the array.
TArray<FItemStruct> UMyInventoryComponent::GetItems()
{

	return _Items;
}
//This gets an item from the array of items.
FItemStruct UMyInventoryComponent::GetAnItem(int32 index)
{
	return _Items[index];
}
//This will remove the item selected from the inventory upon the button being pressed.
void UMyInventoryComponent::RemoveItems(int32 index)
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
void UMyInventoryComponent::AddItems(FItemStruct i)
{
	FmyInventoryItems tempstruct;
	_Items.Add(i);
	currentweight += i.weight;
}
//This will sort the items based off their values.
void UMyInventoryComponent::ItemSort()
{
	UE_LOG(LogTemp, Warning, TEXT("Sorting Values"));
	order = !order;
	if (order)
	{
		_Items.Sort([](FItemStruct e1, FItemStruct e2) {
			return e1.value < e2.value;
			});
	}
	else
	{
		_Items.Sort([](FItemStruct e1, FItemStruct e2) {
			return e1.value > e2.value;
			});
	}

	for (auto& e : _Items)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d"), e.value);
	}
}
//This will sort the items based off their weights.
void UMyInventoryComponent::ItemSort2()
{
	UE_LOG(LogTemp, Warning, TEXT("Sorting Weight"));
	order = !order;
	if (order)
	{
		_Items.Sort([](FItemStruct e1, FItemStruct e2) {
			return e1.weight < e2.weight;
			});
	}
	else
	{
		_Items.Sort([](FItemStruct e1, FItemStruct e2) {
			return e1.weight > e2.weight;
			});
	}
}
//This will add the items weight to the inventories current weight. If it goes over the max weight then it will not add them. Will also work by not picking up items that would cause it to go over the max weight.

bool UMyInventoryComponent::CheckMaxWeight(float GetWeight)
{
	UE_LOG(LogTemp, Warning, TEXT("Begin adding"));
	return currentweight + GetWeight > maxWeight;

}
//This should begin to remove the weight of the items from the current weight.
void UMyInventoryComponent::RemoveWeight(FItemStruct i)
{
	UE_LOG(LogTemp, Warning, TEXT("Removing weight"));
	currentweight -= i.weight;
}
//This will tell the player that the inventory is full.
bool UMyInventoryComponent::GetFull(FItemStruct i)
{
	return CheckMaxWeight(i.weight);
}

// Called when the game starts
void UMyInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMyInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

