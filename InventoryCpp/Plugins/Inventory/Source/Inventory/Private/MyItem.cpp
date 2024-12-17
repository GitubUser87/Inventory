// Fill out your copyright notice in the Description page of Project Settings.


#include "MyItem.h"
#include "MyPluginCharacter.h"
#include "Components/BoxComponent.h"

// Sets default values
AMyItem::AMyItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//ItemMesh2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root"));
	//RootComponent == ItemMesh2;

	Box = CreateDefaultSubobject<UBoxComponent>(FName("Box"));
	Box->SetBoxExtent(FVector(74.0f, 125.0f, 100.0f));
	//Box->SetupAttachment(ItemMesh2);
	Box->SetRelativeLocation(FVector(0.0f, 0.0f, 100.0f));
}

void AMyItem::OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AMyPluginCharacter* tempActor = Cast<AMyPluginCharacter>(OtherActor);

	if (IsValid(tempActor))
	{
		UE_LOG(LogTemp, Warning, TEXT("Overlapped!"));
		if (tempActor->GetInventory()->CheckMaxWeight(GetWeight()))
		{
			UE_LOG(LogTemp, Warning, TEXT("Warning Inventory Full!"));
		}
		else
		{
			tempActor->GetInventory()->AddItems(itemInfo2);
			Destroy();
		}

		return;


	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Not the player!"));
	}
}

// Called when the game starts or when spawned
void AMyItem::BeginPlay()
{
	Super::BeginPlay();
	
}

float AMyItem::GetWeight()
{
	return itemInfo2.weight;
}

// Called every frame
void AMyItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

