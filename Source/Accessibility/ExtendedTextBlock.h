// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "ExtendedTextBlock.generated.h"

/**
 * 
 */
UCLASS()
class ACCESSIBILITY_API UExtendedTextBlock : public UTextBlock
{
	GENERATED_BODY()


	UFUNCTION(BlueprintCallable) void SetLineHeightPercentage(float newLineHeightPercentage);
};
