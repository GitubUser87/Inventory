// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyInventoryComponent.h"
#include "MyPluginCharacter.generated.h"



UCLASS()
class INVENTORY_API AMyPluginCharacter : public ACharacter
{
	GENERATED_BODY()

	UMyInventoryComponent* _myinventory;

public:
	// Sets default values for this character's properties
	AMyPluginCharacter();

	UFUNCTION(BlueprintCallable, Category = something)
	UMyInventoryComponent* GetInventory() { return _myinventory; };



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
