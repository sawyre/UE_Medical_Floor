// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "NavigationSystem.h"

class FToolBarBuilder;
class FMenuBuilder;
class ARecastNavMesh;

struct FNodeGroop
{
	NavNodeRef refPoly;
	FVector2D centre;
	TArray<int32> vertexs;
	FVector elevation;
	TArray<int32> edges;
	TArray<int32> obstacles;

	bool operator==(const FNodeGroop &nodeNext) const
	{
		if ((refPoly == nodeNext.refPoly))
			return true;
		return false;
	}
};

struct FEdgeMenge
{

	int32 v0 = 0;
	int32 v1 = 0;
	int32 n0 = 0; //Group ID
	int32 n1 = 0; //neighbor ID

	bool operator==(const FEdgeMenge &edgeNext) const
	{
		if ((v0 == edgeNext.v0) && (v1 == edgeNext.v1) && (n0 == edgeNext.n0) && (n1 == edgeNext.n1))
			return true;
		return false;
	}
};

struct FObstacleMenge
{

	int32 v0;
	int32 v1;
	int32 node; //Obstacle group ID
	int32 nextObs; //Next obstacle ID

	bool operator==(const FObstacleMenge &obstacleNext) const
	{
		if ((v0 == obstacleNext.v0) && (v1 == obstacleNext.v1) && (node == obstacleNext.node) && (nextObs == obstacleNext.nextObs))
			return true;
		return false;
	}
};

struct FObstacleCont
{
	TArray<FVector> vert;
};

class FExportNavMeshModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	/** This function will be bound to Command. */
	void PluginButtonClicked();

private:

	void AddToolbarExtension(FToolBarBuilder& Builder);
	void AddMenuExtension(FMenuBuilder& Builder);
	bool Export();
	bool WriteToFile(TArray<FVector> vertexN, TArray<FEdgeMenge> edges, TArray<FObstacleMenge> obstaclesM, TArray<FNodeGroop> nodes);
	bool TileIsValid(const ARecastNavMesh* NavMesh, int32 TileIndex);
	bool DrawDebug = false;



private:
	TSharedPtr<class FUICommandList> PluginCommands;
};
