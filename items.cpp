#include "Items/Items.h"
#include "DrawDebugHelpers.h"
#include "War_Creed/War_Creed.h"

#define THIRTY 30


AItems::AItems()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AItems::BeginPlay()
{
	Super::BeginPlay();

	

	UWorld* World = GetWorld();
	FVector Location = GetActorLocation();
	FVector Forward = GetActorForwardVector(); 
	
	DRAW_SPHERE(Location);
	//DRAW_LINE(Location, Location + Forward * 100.f);
    //DRAW_POINT(Location + Forward * 100.f);
	DRAW_VECTOR(Location, Location + Forward * 100.f);

}

void AItems::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
}
