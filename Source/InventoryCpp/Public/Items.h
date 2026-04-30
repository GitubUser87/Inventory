// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Items.generated.h"

class UBoxComponent;
//This Struct contains all the information that the item should possess.
USTRUCT(Blueprintable, BlueprintType)
struct FItemStruct2
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString name;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int value;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float weight;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float HealthRestore;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool consumable;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool weapon;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UStaticMesh*  _mymesh;
};


UCLASS(Blueprintable)
class INVENTORYCPP_API AItems : public AActor
{
	GENERATED_BODY()
	
public:	
	
	// Sets default values for this actor's properties
	AItems();

	UPROPERTY(EditAnywhere, BlueprintReadWrite,	Category = "Item Stats")
	FItemStruct2 itemInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* ItemMesh;

	UFUNCTION()
	void OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, 
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FString Message = FString(TEXT("Hello!"));

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBoxComponent* Box;

	UFUNCTION()
	float GetWeight();

	UFUNCTION()
	void OverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
