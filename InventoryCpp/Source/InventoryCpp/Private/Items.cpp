// Fill out your copyright notice in the Description page of Project Settings.


#include "Items.h"
#include "InventoryCpp/InventoryCppCharacter.h"
#include "Components/BoxComponent.h"


//.class AInventoryCppCharacter : public UObject {};


// Sets default values
AItems::AItems()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root"));
	RootComponent = ItemMesh;

	Box = CreateDefaultSubobject<UBoxComponent>(FName("Box"));
	Box->SetBoxExtent(FVector(74.0f, 125.0f, 100.0f));
	Box->SetupAttachment(ItemMesh);
	Box->SetRelativeLocation(FVector(0.0f, 0.0f, 100.0f));


}


//Will add the item to the inventory. Won't add the item if it exceeds the max weight.
void AItems::OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
	
	AInventoryCppCharacter* tempActor = (AInventoryCppCharacter*)OtherActor;

	if (IsValid(tempActor)) 
	{
		UE_LOG(LogTemp, Warning, TEXT("Overlapped!"));
		if (tempActor->GetInventory()->CheckMaxWeight(GetWeight()))
		{
			UE_LOG(LogTemp, Warning, TEXT("Warning Inventory Full!"));
		} else
		{	
			tempActor->GetInventory()->AddItems(itemInfo);
			Destroy();
		}

		return;

		
	}
	else 
	{
		UE_LOG(LogTemp, Warning, TEXT("Not the player!"));
	}
}


//Gets the items weight for reference.
float AItems::GetWeight()
{
	return itemInfo.weight;
}

void AItems::OverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

}
// Called when the game starts or when spawned
void AItems::BeginPlay()
{
	Super::BeginPlay();
	Box->OnComponentBeginOverlap.AddDynamic(this, &AItems::OverlapBegin);
	Box->OnComponentEndOverlap.AddDynamic(this, &AItems::OverlapEnd);
}




// Called every frame
void AItems::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

