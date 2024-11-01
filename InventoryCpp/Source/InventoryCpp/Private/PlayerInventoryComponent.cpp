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

FString UPlayerInventoryComponent::GetItems()
{
	FString tempstring;

	for (int32 Index = 0; Index != _Items.Num(); ++Index)
	{
		tempstring += _Items[Index].itemname;
		tempstring += TEXT("     ");
		tempstring.AppendInt(_Items[Index].value);
		tempstring += LINE_TERMINATOR;
	}
	return FString();
}

void UPlayerInventoryComponent::AddItems(FString iname, int ivalue)
{
	FmyInventoryItems tempstruct;

	tempstruct.itemname = iname;
	tempstruct.value = ivalue;

	_Items.Add(tempstruct);
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

