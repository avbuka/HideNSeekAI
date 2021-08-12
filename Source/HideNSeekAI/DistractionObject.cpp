// Fill out your copyright notice in the Description page of Project Settings.


#include "DistractionObject.h"

// Sets default values
ADistractionObject::ADistractionObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADistractionObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADistractionObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

