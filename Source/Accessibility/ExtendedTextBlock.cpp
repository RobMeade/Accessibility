// Fill out your copyright notice in the Description page of Project Settings.


#include "ExtendedTextBlock.h"
#include "Widgets/Text/STextBlock.h"

void UExtendedTextBlock::SetLineHeightPercentage(float newLineHeightPercentage)
{
	MyTextBlock->SetLineHeightPercentage(newLineHeightPercentage);
}
