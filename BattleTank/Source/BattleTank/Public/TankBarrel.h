// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	//-1 is max down, +1 is max up movement
	void Elevate(float RelativeSpeed);
	
private:
	UPROPERTY(EditDefaultsOnly, category = Setup)
		float MaxDegreesPerSecond = 5; // sensible default
	UPROPERTY(EditDefaultsOnly, category = Setup)
		float MinElevation = 0; // sensible default
	UPROPERTY(EditDefaultsOnly, category = Setup)
		float MaxElevation = 40; // sensible default
	
};