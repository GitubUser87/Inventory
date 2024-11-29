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

TArray<FItemStruct> UPlayerInventoryComponent::GetItems()
{
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
	return _Items;
}

FItemStruct UPlayerInventoryComponent::GetAnItem(int32 index)
{
	//UE_LOG(LogTemp, Warning, TEXT("Item Get!"));
	//FString Item = _Items[index].name;
	return _Items[index];
}

void UPlayerInventoryComponent::AddItems(FItemStruct i)
{
	FmyInventoryItems tempstruct;

	//tempstruct.itemname = iname;
	//tempstruct.value = ivalue;

	//current weight = current weight + iweight

	_Items.Add(i);
	//_Items.Sort([](FItemStruct e1, FItemStruct e2) {
	//	return e1.value < e2.value;
	//});
}

void UPlayerInventoryComponent::ItemSort()
{
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

	//UE_LOG(LogTemp, Warning, TEXT("sorting"));

	for (auto& e: _Items)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d"), e.value);
	}

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

