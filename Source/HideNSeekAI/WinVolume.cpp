// Fill out your copyright notice in the Description page of Project Settings.


#include "WinVolume.h"
#include "HideNSeekAICharacter.h"
#include "HideNSeekAIGameMode.h"

// Sets default values
AWinVolume::AWinVolume()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	WinVolume = CreateDefaultSubobject<UBoxComponent>("WinVolume");
	RootComponent = WinVolume;

	WinVolume->OnComponentBeginOverlap.AddDynamic(this, &AWinVolume::OnActorBeginOverlap);

}

// Called when the game starts or when spawned
void AWinVolume::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWinVolume::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWinVolume::OnActorBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AHideNSeekAICharacter* Character = Cast<AHideNSeekAICharacter>(OtherActor);
	
	if (Character != nullptr)
	{
		AHideNSeekAIGameMode* GM=Cast<AHideNSeekAIGameMode>(GetWorld()->GetAuthGameMode());

		if (GM != nullptr)
		{
			GM->WinGameFunction();
		}

	}
}

