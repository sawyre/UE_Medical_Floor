// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TextFileMenager.generated.h"

/**
 * 
 */
UCLASS()
class FCTEST_API UTextFileMenager : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "Save"))
		static bool SaveArray(FString FileName, TArray<FVector> Array, bool AllowOverwritting);
};
