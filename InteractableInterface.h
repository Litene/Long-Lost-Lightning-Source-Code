﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractableInterface.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UInteractableInterface : public UInterface {
	GENERATED_BODY()
};

class LONGLOSTLIGHTNING_API IInteractableInterface {
	GENERATED_BODY()
public:
	virtual void OnInteract();

	virtual bool GroundCheck(AActor* Actor,FVector ActorLocation, UWorld* World);
	
	bool AttachedToPlayer;
};
