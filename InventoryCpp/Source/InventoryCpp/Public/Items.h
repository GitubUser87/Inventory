// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Items.generated.h"

USTRUCT()
struct FItemStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	FString name;

	UPROPERTY(EditAnywhere)
	int value;

	UPROPERTY(EditAnywhere)
	float weight;

	UPROPERTY(EditAnywhere)
	bool consumable;

	UPROPERTY(EditAnywhere)
	bool weapon;


};
//UCLASS()
//class UBoxComponent : public UShapeComponent
//{
//
//};

UCLASS()
class INVENTORYCPP_API AItems : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItems();

	UPROPERTY(EditAnywhere, Category = "Item Stats")
	FItemStruct itemInfo;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* ItemMesh;

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
