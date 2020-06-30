// Fill out your copyright notice in the Description page of Project Settings.


#include "TextFileMenager.h"
#include "Misc/FileHelper.h"

bool UTextFileMenager::SaveArray(FString FileName, TArray<FVector> Array, bool AllowOverwritting = false) {
	FString StringArray = "";
	for(FVector& Vec : Array) {
		StringArray += Vec.ToString();
		StringArray += LINE_TERMINATOR;
	}

	return FFileHelper::SaveStringToFile(StringArray, *FileName);
 }