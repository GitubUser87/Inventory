// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyInventoryComponent.h"
#include "MyPluginCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class UCameraComponent;
class UInputAction;
class UInputMappingContext;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config = Game)
class INVENTORY_API AMyPluginCharacter : public ACharacter
{
	GENERATED_BODY()

	//This will set a reference to the inventory component with in the players C++ file.
	UMyInventoryComponent* _myinventory;

public:
	// Sets default values for this character's properties
	AMyPluginCharacter();

	//This will return the inventory to the player so that they can see the contents.
	UFUNCTION(BlueprintCallable, Category = something)
	UMyInventoryComponent* GetInventory() { return _myinventory; };



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime);

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:

};
