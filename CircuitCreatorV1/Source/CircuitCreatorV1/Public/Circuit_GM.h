// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "Circuit_GM.generated.h"

/**
 * 
 */
UCLASS()
class CIRCUITCREATORV1_API ACircuit_GM : public AGameMode
{
	GENERATED_BODY()
	
public:

	virtual void BeginPlay() override;
	
	
};
