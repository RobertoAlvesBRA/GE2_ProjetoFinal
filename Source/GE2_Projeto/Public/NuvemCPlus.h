// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NuvemCPlus.generated.h"

UCLASS()
class GE2_PROJETO_API ANuvemCPlus : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANuvemCPlus();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere, Category = "Velocidade")
		float veloMin;
	UPROPERTY(EditAnywhere, Category = "Velocidade")
		float veloMax;
	UPROPERTY(EditAnywhere, Category="Velocidade")
	FVector velocidade;


};
