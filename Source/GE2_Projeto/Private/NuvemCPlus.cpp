// Fill out your copyright notice in the Description page of Project Settings.


#include "NuvemCPlus.h"

// Sets default values
ANuvemCPlus::ANuvemCPlus()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANuvemCPlus::BeginPlay()
{
	Super::BeginPlay();
	velocidade.X = FMath::RandRange(veloMin, veloMax);
	
}

// Called every frame
void ANuvemCPlus::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	SetActorLocation(GetActorLocation() + velocidade*DeltaTime);

}

