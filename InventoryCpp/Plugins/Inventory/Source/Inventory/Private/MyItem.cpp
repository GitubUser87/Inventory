// Fill out your copyright notice in the Description page of Project Settings.


#include "MyItem.h"
//#include "MyPluginCharacter.h"
#include "Inventory/Public/MyPluginCharacter.h"
#include "Components/BoxComponent.h"

// Sets default values
AMyItem::AMyItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//ItemMesh2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root"));
	//RootComponent = ItemMesh2;

	Box = CreateDefaultSubobject<UBoxComponent>(FName("Box"));
	Box->SetBoxExtent(FVector(74.0f, 125.0f, 100.0f));
	//Box->SetupAttachment(ItemMesh2);
	Box->SetRelativeLocation(FVector(0.0f, 0.0f, 100.0f));
}

//Will add the item to the inventory. Won't add the item if it exceeds the max weight.
void AMyItem::OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, 
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
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
// Called when the game starts or when spawned
void AMyItem::BeginPlay()
{
	Super::BeginPlay();

	Box->OnComponentBeginOverlap.AddDynamic(this, &AMyItem::OverlapBegin);
	Box->OnComponentEndOverlap.AddDynamic(this, &AMyItem::OverlapEnd);

}
//Gets the items weight for reference.
float AMyItem::GetWeight()
{
	return itemInfo.weight;
}
void AMyItem::OverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

}




// Called every frame
void AMyItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

