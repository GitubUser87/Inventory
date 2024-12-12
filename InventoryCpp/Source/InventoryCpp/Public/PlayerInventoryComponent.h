// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Items.h"
#include "PlayerInventoryComponent.generated.h"


USTRUCT()
struct FmyInventoryItems
{
	GENERATED_BODY()
	FString itemname;
	int value;
	float weight;
	float spaceleft;
};



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INVENTORYCPP_API UPlayerInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPlayerInventoryComponent();

	UPROPERTY()
	TArray<FItemStruct> _Items = {};

	UFUNCTION(BlueprintCallable)
	TArray<FItemStruct> GetItems();

	UFUNCTION(BlueprintCallable)
	FItemStruct GetAnItem(int32 index);

	UFUNCTION (BlueprintCallable)
	void RemoveItems(int32 index);

	void AddItems(FItemStruct i);

	UFUNCTION(BlueprintCallable)
	void ItemSort();

	UFUNCTION(BlueprintCallable)
	void ItemSort2();

	bool CheckMaxWeight(float GetWeight);

	void RemoveWeight(FItemStruct i);

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool Full;

	UFUNCTION(BlueprintCallable)
	bool GetFull(FItemStruct i);

	float currentweight =0;
	float maxWeight = 50;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;


	bool order = true;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
