// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Items.generated.h"

class UBoxComponent;

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


UCLASS(Blueprintable, Abstract)
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

	FString Message = FString(TEXT("Hello!"));

	UPROPERTY()
	UBoxComponent* Box;

	UFUNCTION()
	void OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
