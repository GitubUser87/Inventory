// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MyItem.h"
#include "MyInventoryComponent.generated.h"

USTRUCT()
struct FmyInventoryItems
{
	GENERATED_BODY()
	FString itemname;
	int value;
	float weight;
	float spaceleft;
	float Names;
};



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INVENTORY_API UMyInventoryComponent : public UActorComponent
{
	GENERATED_BODY()


public:	
	// Sets default values for this component's properties
	UMyInventoryComponent();

	UPROPERTY()
	TArray<FItemStruct> _Items = {};

	UFUNCTION(BlueprintCallable, Category = something)
	TArray<FItemStruct> GetItems();

	UFUNCTION(BlueprintCallable, Category = something)
	FItemStruct GetAnItem(int32 index);

	UFUNCTION(BlueprintCallable, Category = something)
	void RemoveItems(int32 index);

	void AddItems(FItemStruct i);

	UFUNCTION(BlueprintCallable, Category = something)
	void ItemSort();

	UFUNCTION(BlueprintCallable, Category = something)
	void ItemSort2();

	bool CheckMaxWeight(float GetWeight);

	void RemoveWeight(FItemStruct i);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = something)
	bool Full;

	UFUNCTION(BlueprintCallable, Category = something)
	bool GetFull(FItemStruct i);

	float currentweight = 0;
	float maxWeight = 50;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	bool order = true;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
