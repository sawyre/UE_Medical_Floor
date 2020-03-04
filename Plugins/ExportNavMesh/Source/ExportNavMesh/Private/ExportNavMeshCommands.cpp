// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ExportNavMeshCommands.h"

#define LOCTEXT_NAMESPACE "FExportNavMeshModule"

void FExportNavMeshCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "ExportNavMesh", "Execute ExportNavMesh action", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
