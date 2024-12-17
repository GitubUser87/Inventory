// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPluginCharacter.h"
//#include "Components/CapsuleComponent.h"

// Sets default values
AMyPluginCharacter::AMyPluginCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	_myinventory = CreateDefaultSubobject<UMyInventoryComponent>(TEXT("Inventory"));

}

// Called when the game starts or when spawned
void AMyPluginCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPluginCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPluginCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

