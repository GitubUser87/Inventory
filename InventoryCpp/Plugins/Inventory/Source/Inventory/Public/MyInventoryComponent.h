// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MyItem.h"
#include "MyInventoryComponent.generated.h"

USTRUCT()
struct FmyInventoryItems2
{
	GENERATED_BODY()
	FString itemname;
	int value;
	float weight;
	float spaceleft;
};



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INVENTORY_API UMyInventoryComponent : public UActorComponent
{
	GENERATED_BODY()


public:	
	// Sets default values for this component's properties
	UMyInventoryComponent();

	UPROPERTY()
	TArray<FItemStruct2> _Items2 = {};

	UFUNCTION(BlueprintCallable, Category = something)
	TArray<FItemStruct2> GetItems2();

	UFUNCTION(BlueprintCallable, Category = something)
	FItemStruct2 GetAnItem2(int32 index);

	UFUNCTION(BlueprintCallable, Category = something)
	void RemoveItems2(int32 index);

	void AddItems2(FItemStruct2 i);

	UFUNCTION(BlueprintCallable, Category = something)
	void ItemSort3();

	UFUNCTION(BlueprintCallable, Category = something)
	void ItemSort4();

	bool CheckMaxWeight2(float GetWeight2);

	void RemoveWeight2(FItemStruct2 i);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = something)
	bool Full;

	UFUNCTION(BlueprintCallable, Category = something)
	bool GetFull2(FItemStruct2 i);

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
