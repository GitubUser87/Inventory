// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyItem.generated.h"

class UBoxComponent;
//This Struct contains all the information that the item should possess.
USTRUCT(Blueprintable, BlueprintType)
struct FItemStruct2
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = something)
	FString name;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = something)
	int value;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = something)
	float weight;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = something)
	float HealthRestore;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = something)
	bool consumable;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = something)
	bool weapon;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = something)
	UStaticMesh* _mymesh;
};

UCLASS(Blueprintable)
class INVENTORY_API AMyItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyItem();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Stats")
	FItemStruct2 itemInfo2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = something)
	UStaticMeshComponent* ItemMesh2;

	UFUNCTION()
	void OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = something)
	UBoxComponent* Box;

	UFUNCTION()
	float GetWeight();

	UFUNCTION()
	void OverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
