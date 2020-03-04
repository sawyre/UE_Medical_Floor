// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FusionCrowd.h"
//#include "Core.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "HAL/PlatformFilemanager.h"
#include "Misc/LocalTimestampDirectoryVisitor.h"
#include "Misc/Paths.h"

#define LOCTEXT_NAMESPACE "FFusionCrowdModule"

void FFusionCrowdModule::StartupModule()
{
	//Search project plugins folder for Dll
	FString dllName = "FusionCrowd.dll";
	if (SearchForDllPath(FPaths::GamePluginsDir(), dllName))
	{
	}
	else if (SearchForDllPath(FPaths::EnginePluginsDir(), dllName)) //Failed in project dir, try engine plugins dir
	{
	}
	else
	{
		//Stop loading - plugin required DLL to load successfully
		checkf(false, TEXT("Failed to load dll"));
	}
}

void FFusionCrowdModule::ShutdownModule()
{

}

bool FFusionCrowdModule::SearchForDllPath(FString _searchBase, FString _dllName)
{
	//Search Plugins folder for an instance of Dll.dll, and add to platform search path
	TArray<FString> directoriesToSkip;
	IPlatformFile &PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	FLocalTimestampDirectoryVisitor Visitor(PlatformFile, directoriesToSkip, directoriesToSkip, false);
	PlatformFile.IterateDirectory(*_searchBase, Visitor);

	for (TMap<FString, FDateTime>::TIterator TimestampIt(Visitor.FileTimes); TimestampIt; ++TimestampIt)
	{
		const FString file = TimestampIt.Key();
		const FString filePath = FPaths::GetPath(file);
		const FString fileName = FPaths::GetCleanFilename(file);
		if (fileName.Compare(_dllName) == 0)
		{
			FPlatformProcess::AddDllDirectory(*filePath); // only load dll when needed for use. Broken with 4.11.
			FPlatformProcess::GetDllHandle(*file); // auto-load dll with plugin - needed as 4.11 breaks above line.
			return true;
		}
	}
	return false;
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FFusionCrowdModule, FusionCrowd)
