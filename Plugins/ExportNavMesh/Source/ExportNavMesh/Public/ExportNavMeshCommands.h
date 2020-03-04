// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "ExportNavMeshStyle.h"

class FExportNavMeshCommands : public TCommands<FExportNavMeshCommands>
{
public:

	FExportNavMeshCommands()
		: TCommands<FExportNavMeshCommands>(TEXT("ExportNavMesh"), NSLOCTEXT("Contexts", "ExportNavMesh", "ExportNavMesh Plugin"), NAME_None, FExportNavMeshStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};
