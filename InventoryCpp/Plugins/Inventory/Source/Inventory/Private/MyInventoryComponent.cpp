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


TArray<FItemStruct2> UMyInventoryComponent::GetItems2()
{

	return _Items2;
}

FItemStruct2 UMyInventoryComponent::GetAnItem2(int32 index)
{
	return _Items2[index];
}

void UMyInventoryComponent::RemoveItems2(int32 index)
{
	RemoveWeight2(_Items2[index]);
	_Items2.RemoveAt(index);

	UE_LOG(LogTemp, Warning, TEXT("REMOVE ITEMS"));
	for (auto& element : _Items2)
	{
		UE_LOG(LogTemp, Warning, TEXT("%s %d"), (*element.name), element.value);
		UE_LOG(LogTemp, Warning, TEXT("%f"), currentweight);
	}
}

void UMyInventoryComponent::AddItems2(FItemStruct2 i)
{
	FmyInventoryItems2 tempstruct;
	_Items2.Add(i);
	currentweight += i.weight;
}

void UMyInventoryComponent::ItemSort3()
{
	UE_LOG(LogTemp, Warning, TEXT("Sorting"));
	order = !order;
	if (order)
	{
		_Items2.Sort([](FItemStruct2 e1, FItemStruct2 e2) {
			return e1.value < e2.value;
			});
	}
	else
	{
		_Items2.Sort([](FItemStruct2 e1, FItemStruct2 e2) {
			return e1.value > e2.value;
			});
	}

	for (auto& e : _Items2)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d"), e.value);
	}
}

void UMyInventoryComponent::ItemSort4()
{
	order = !order;
	if (order)
	{
		_Items2.Sort([](FItemStruct2 e1, FItemStruct2 e2) {
			return e1.weight < e2.weight;
			});
	}
	else
	{
		_Items2.Sort([](FItemStruct2 e1, FItemStruct2 e2) {
			return e1.weight > e2.weight;
			});
	}
}

bool UMyInventoryComponent::CheckMaxWeight2(float GetWeight2)
{
	UE_LOG(LogTemp, Warning, TEXT("Begin adding"));
	return currentweight + GetWeight2 > maxWeight;

}

void UMyInventoryComponent::RemoveWeight2(FItemStruct2 i)
{
	UE_LOG(LogTemp, Warning, TEXT("Removing weight"));
	currentweight -= i.weight;
}

bool UMyInventoryComponent::GetFull2(FItemStruct2 i)
{
	return CheckMaxWeight2(i.weight);
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

