// Fill out your copyright notice in the Description page of Project Settings.


#include "WinVolume.h"

// Sets default values
AWinVolume::AWinVolume()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	WinVolume = CreateDefaultSubobject<UBoxComponent>("WinVolume");
	RootComponent = WinVolume;


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

