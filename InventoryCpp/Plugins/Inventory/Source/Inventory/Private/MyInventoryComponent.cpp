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


TArray<FItemStruct2> UMyInventoryComponent::GetItems()
{

	return _Items;
}

FItemStruct2 UMyInventoryComponent::GetAnItem(int32 index)
{
	return _Items[index];
}

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

void UMyInventoryComponent::AddItems(FItemStruct2 i)
{
	FmyInventoryItems2 tempstruct;
	_Items.Add(i);
	currentweight += i.weight;
}

void UMyInventoryComponent::ItemSort()
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

	for (auto& e : _Items)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d"), e.value);
	}
}

void UMyInventoryComponent::ItemSort2()
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

bool UMyInventoryComponent::CheckMaxWeight(float GetWeight)
{
	UE_LOG(LogTemp, Warning, TEXT("Begin adding"));
	return currentweight + GetWeight > maxWeight;
}

void UMyInventoryComponent::RemoveWeight(FItemStruct2 i)
{
	UE_LOG(LogTemp, Warning, TEXT("Removing weight"));
	currentweight -= i.weight;
}

bool UMyInventoryComponent::GetFull(FItemStruct2 i)
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

