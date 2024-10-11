// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Items.h"
#include "PlayerInventory.generated.h"

USTRUCT()
struct FInventoryStruct
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere)
	FString name;

	UPROPERTY(VisibleAnywhere)
	int spaceleft[10];

	UPROPERTY()
	int currentnumcount;

	UPROPERTY()
	AItems* item;
};


UCLASS()
class INVENTORYCPP_API APlayerInventory : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlayerInventory();

	UPROPERTY(EditAnywhere, Category = "Items")
	FInventoryStruct InventoryInfo;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
