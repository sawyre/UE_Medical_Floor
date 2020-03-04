// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ExportNavMesh.h"
#include "ExportNavMeshStyle.h"
#include "ExportNavMeshCommands.h"
#include "Misc/MessageDialog.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "DrawDebugHelpers.h"
#include "Misc/FileHelper.h"

#include <NavigationSystemTypes.h>
#include "NavigationSystem.h"
#include "NavMesh/RecastNavMeshGenerator.h"
#include <GameFramework/Actor.h>

#include "LevelEditor.h"
#include "Core/Public/HAL//PlatformFilemanager.h"

static const FName ExportNavMeshTabName("ExportNavMesh");

#define LOCTEXT_NAMESPACE "FExportNavMeshModule"

void FExportNavMeshModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	FExportNavMeshStyle::Initialize();
	FExportNavMeshStyle::ReloadTextures();

	FExportNavMeshCommands::Register();

	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FExportNavMeshCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FExportNavMeshModule::PluginButtonClicked),
		FCanExecuteAction());

	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");

	{
		TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
		MenuExtender->AddMenuExtension("WindowLayout", EExtensionHook::After, PluginCommands, FMenuExtensionDelegate::CreateRaw(this, &FExportNavMeshModule::AddMenuExtension));

		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
	}

	{
		TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
		ToolbarExtender->AddToolBarExtension("Settings", EExtensionHook::After, PluginCommands, FToolBarExtensionDelegate::CreateRaw(this, &FExportNavMeshModule::AddToolbarExtension));

		LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	}
}

void FExportNavMeshModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FExportNavMeshStyle::Shutdown();

	FExportNavMeshCommands::Unregister();
}

void FExportNavMeshModule::PluginButtonClicked()
{
	// Put your "OnButtonClicked" stuff here
	Export();
	/*FText DialogText = FText::Format(
		LOCTEXT("PluginButtonDialogText", "Add code to {0} in {1} to override this button's actions"),
		FText::FromString(TEXT("FExportNavMeshModule::PluginButtonClicked()")),
		FText::FromString(TEXT("ExportNavMesh.cpp"))
					   );
	FMessageDialog::Open(EAppMsgType::Ok, DialogText);*/
}

void FExportNavMeshModule::AddMenuExtension(FMenuBuilder& Builder)
{
	Builder.AddMenuEntry(FExportNavMeshCommands::Get().PluginAction);
}

void FExportNavMeshModule::AddToolbarExtension(FToolBarBuilder& Builder)
{
	Builder.AddToolBarButton(FExportNavMeshCommands::Get().PluginAction);
}

bool FExportNavMeshModule::TileIsValid(const ARecastNavMesh* NavMesh, int32 TileIndex)
{
	if (!NavMesh) return false;
	//~~~~~~~~~~~~~~
	const FBox TileBounds = NavMesh->GetNavMeshTileBounds(TileIndex);
	return TileBounds.IsValid != 0;
}

bool FExportNavMeshModule::WriteToFile(TArray<FVector> vertexN, TArray<FEdgeMenge> edges, TArray<FObstacleMenge> obstaclesM, TArray<FNodeGroop> nodes)
{
	FString SaveDirectory = FPaths::ProjectDir() + "/Content/NavMeshes";
	FString FileName = FString("graph.nav");
	TArray<FString> arrayVertexString;
	arrayVertexString.Add(FString::FromInt(vertexN.Num()));
	for (int i = 0; i < vertexN.Num(); i++)
	{//зачем делить на 100?
		FString buffer = FString::SanitizeFloat(vertexN[i].X / 100) + " " + FString::SanitizeFloat(vertexN[i].Y / 100);
		arrayVertexString.Add(buffer);
	}
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	FString buffer = FString::FromInt(edges.Num());
	arrayVertexString.Add(buffer);
	for (int32 i = 0; i < edges.Num(); i++)
	{
		buffer = FString::FromInt(edges[i].v0) + " " + FString::FromInt(edges[i].v1) + " " + FString::FromInt(edges[i].n0) + " " + FString::FromInt(edges[i].n1);
		arrayVertexString.Add(buffer); // v и n - вершины граней?
	}
	buffer = FString::FromInt(obstaclesM.Num());
	arrayVertexString.Add(buffer);
	for (int32 i = 0; i < obstaclesM.Num(); i++)
	{
		buffer = FString::FromInt(obstaclesM[i].v0) + " " + FString::FromInt(obstaclesM[i].v1) + " " + FString::FromInt(obstaclesM[i].node) + " " + FString::FromInt(obstaclesM[i].nextObs);
		arrayVertexString.Add(buffer);
	}
	buffer = "nodes";
	arrayVertexString.Add(buffer);


	buffer = FString::FromInt(nodes.Num());

	arrayVertexString.Add(buffer);
	for (int32 i = 0; i < nodes.Num(); i++)
	{
		//if (nodes[i].edges.Num() == 0) continue; //FIX: REMOVE 0-EDGED NODES

		buffer = FString::SanitizeFloat(nodes[i].centre.X / 100) + " " + FString::SanitizeFloat(nodes[i].centre.Y / 100);
		arrayVertexString.Add(buffer);
		buffer = FString::FromInt(nodes[i].vertexs.Num());
		for (int j = 0; j < nodes[i].vertexs.Num(); j++)
		{
			buffer = buffer + " " + FString::FromInt(nodes[i].vertexs[j]);
		}
		arrayVertexString.Add(buffer);
		buffer = FString::SanitizeFloat(nodes[i].elevation.X / 100) + " " + FString::SanitizeFloat(nodes[i].elevation.Y / 100) + " " + FString::SanitizeFloat(nodes[i].elevation.Z / 100);
		arrayVertexString.Add(buffer);
		buffer = FString::FromInt(nodes[i].edges.Num());
		if (nodes[i].edges.Num() == 0) buffer += " ";
		for (int j = 0; j < nodes[i].edges.Num(); j++)
		{
			buffer = buffer + " " + FString::FromInt(nodes[i].edges[j]);
		}
		arrayVertexString.Add(buffer);
		buffer = FString::FromInt(nodes[i].obstacles.Num());
		if (nodes[i].obstacles.Num() == 0) buffer += " ";
		for (int j = 0; j < nodes[i].obstacles.Num(); j++)
		{
			buffer = buffer + " " + FString::FromInt(nodes[i].obstacles[j]);
		}
		arrayVertexString.Add(buffer);
		//buffer = "";
		//arrayVertexString.Add(buffer);
	}
	if (PlatformFile.CreateDirectoryTree(*SaveDirectory))
	{
		FString AbsoluteFilePath = SaveDirectory + "/" + FileName;
		FFileHelper::SaveStringArrayToFile(arrayVertexString, *AbsoluteFilePath);
		return true;
	}
	return false;
}

bool FExportNavMeshModule::Export()
{
	TArray<FNodeGroop> nodes;

	UWorld* World = GEditor->GetEditorWorldContext().World();
	UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(World);
	ANavigationData* a = NavSys->GetDefaultNavDataInstance(FNavigationSystem::ECreateIfEmpty::DontCreate);
	if (a == NULL) return false;

	const ARecastNavMesh* NavMesh = Cast<ARecastNavMesh>(a);
	if (!NavMesh)
	{
		exit(0);
	}
	FRecastDebugGeometry debugGeometry;
	debugGeometry.bGatherNavMeshEdges = true;
	int TilesCount = NavMesh->GetNavMeshTilesCount();
	TSet<FVector> vertisesContour;
	for (int32 v = 0; v < TilesCount; v++)
	{
		if (!TileIsValid(NavMesh, v))
		{
			continue;
		}
		NavMesh->GetDebugGeometry(debugGeometry, v);
		for (auto& vert : debugGeometry.NavMeshEdges)
		{
			if (vertisesContour.Find(vert) == NULL)
			{
				vertisesContour.Add(vert);
				//DrawDebugPoint(GetWorld(), vert, 5, FColor::Red, true);
			}
		}
	}

	TArray<FNavPoly> EachPolys;
	TArray<FNavPoly>AllPolys;
	for (int32 v = 0; v < NavMesh->GetNavMeshTilesCount(); v++)
	{
		if (!TileIsValid(NavMesh, v))
		{
			continue;
		}
		NavMesh->GetPolysInTile(v, EachPolys);
		AllPolys.Append(EachPolys);
	}
	TArray<NavNodeRef> polys;
	polys.Add(AllPolys[0].Ref);
	FNodeGroop node;
	if (DrawDebug) DrawDebugSphere(World, AllPolys[0].Center, 5, 15, FColor::Cyan, true, -1, 0, 5);
	node.centre = (FVector2D)AllPolys[0].Center;
	node.refPoly = AllPolys[0].Ref;
	node.elevation = FVector::ZeroVector;
	nodes.Add(node);
	for (int32 v = 0; v < AllPolys.Num(); v++) //remove doubled poligons
	{
		if (polys.Find(AllPolys[v].Ref) == INDEX_NONE)
		{
			polys.Add(AllPolys[v].Ref);
			if (DrawDebug) DrawDebugSphere(World, AllPolys[v].Center, 5, 15, FColor::Cyan, true, -1, 0, 5);
			node.refPoly = AllPolys[v].Ref;
			node.centre = (FVector2D)AllPolys[v].Center;
			node.elevation = FVector::ZeroVector;
			nodes.Add(node);
		}
	}
	TArray<FVector> vertexN;
	for (int32 v = 0; v < polys.Num(); v++) //fill vertices array, create ID for nodes
	{
		//FNodeGroop newNode;
		TArray<FVector> test; //Doubled vertices
		NavMesh->GetPolyVerts(polys[v], test);
		if (vertexN.Num() == 0)
		{
			for (int32 i = 0; i < test.Num(); i++)
			{
				vertexN.Add(test[i]);
				nodes[v].vertexs.Add(i);
			}
		}
		else
		{
			for (int32 i = 0; i < test.Num(); i++)
			{
				if (vertexN.Find(test[i]) == INDEX_NONE)
				{
					vertexN.Add(test[i]);
					nodes[v].vertexs.Add(vertexN.Num() - 1);
				}
				else
				{
					nodes[v].vertexs.Add(vertexN.Find(test[i]));
				}
			}
		}
	}

	if (DrawDebug) {
		for (int i = 0; i < vertexN.Num(); i++)
		{
			DrawDebugSphere(World, vertexN[i], 5, 15, FColor::Blue, true, -1, 0, 5);
		}
	}

	TArray<NavNodeRef> cor;
	TArray<FEdgeMenge> edges;
	TArray<FObstacleMenge> obstaclesM;
	for (int32 v = 0; v < polys.Num(); v++) //fill edges and obstacles arrays
	{
		TArray<FNavigationPortalEdge> test;
		NavMesh->GetPolyEdges(polys[v], test);
		TArray<FNavigationPortalEdge> path;
		NavMesh->GetPolyNeighbors(polys[v], cor);


		TArray<NavNodeRef> cor1;
		for (int32 i = 0; i < cor.Num(); i++)
		{
			cor1.Add(polys[v]);
			cor1.Add(cor[i]);
			TArray<FVector> test1v;
			NavMesh->GetPolyVerts(cor1[0], test1v);
			TArray<FNavigationPortalEdge> allEd;
			for (int j = 0; j < test1v.Num() - 1; j++)
			{
				allEd.Add(FNavigationPortalEdge(test1v[j], test1v[j + 1], 0));
			}
			allEd.Add(FNavigationPortalEdge(test1v[test1v.Num() - 1], test1v[0], 0));

			TArray<FVector> test2v;
			NavMesh->GetPolyVerts(cor1[1], test2v);
			for (int j = 0; j < test2v.Num() - 1; j++)
			{
				allEd.Add(FNavigationPortalEdge(test2v[j], test2v[j + 1], 0));
			}
			allEd.Add(FNavigationPortalEdge(test2v[test2v.Num() - 1], test2v[0], 0));
			TArray<FNavigationPortalEdge> ed;
			NavMesh->GetPolyEdges(cor1[0], ed);
			TArray<FNavigationPortalEdge> ed1;
			NavMesh->GetPolyEdges(cor1[1], ed1);
			NavMesh->GetEdgesForPathCorridor(&cor1, &path);

			NavNodeRef idPolyM = cor1[0];
			//------------------------------------
			for (int j = 0; j < allEd.Num() - 1; j++)
			{
				bool flagOs = false;
				for (int e = 0; e < ed.Num(); e++)
				{
					if (((allEd[j].Left == ed[e].Left) && (allEd[j].Right == ed[e].Right)) || ((allEd[j].Right == ed[e].Left) && (allEd[j].Left == ed[e].Right)))
					{
						flagOs = true;
						e = ed.Num();
					}
					else
					{
						flagOs = false;
					}
				}
				if (!flagOs)
				{
					for (int e = 0; e < ed1.Num(); e++)
					{
						if (((allEd[j].Left == ed1[e].Left) && (allEd[j].Right == ed1[e].Right)) || ((allEd[j].Right == ed1[e].Left) && (allEd[j].Left == ed1[e].Right)))
						{
							flagOs = true;
							e = ed1.Num();
						}
						else
						{
							flagOs = false;
						}
					}
				}
				if (!flagOs) //not connected polygons are obstacles
				{
					FObstacleMenge obstacleMe;
					obstacleMe.v0 = vertexN.Find(allEd[j].Left);
					obstacleMe.v1 = vertexN.Find(allEd[j].Right);
					FNodeGroop node;
					if ((test1v.Find(allEd[j].Left) != INDEX_NONE) && (test1v.Find(allEd[j].Right) != INDEX_NONE))
					{
						node.refPoly = cor1[0];
					}
					else
					{
						node.refPoly = cor1[1];
					}
					obstacleMe.node = nodes.Find(node);
					obstacleMe.nextObs = -1;
					if (obstaclesM.Num() == 0)
					{
						obstaclesM.Add(obstacleMe);
						nodes[obstacleMe.node].obstacles.Add(obstaclesM.Num() - 1);
						if (DrawDebug) DrawDebugLine(World, allEd[j].Left, allEd[j].Right, FColor::Yellow, true, -1, 0, 5);
					}
					else
					{
						if (obstaclesM.Find(obstacleMe) == INDEX_NONE)
						{
							obstaclesM.Add(obstacleMe);
							nodes[obstacleMe.node].obstacles.Add(obstaclesM.Num() - 1);
							if (DrawDebug) DrawDebugLine(World, allEd[j].Left, allEd[j].Right, FColor::Yellow, true, -1, 0, 5);
						}
					}
				}
			}

			TArray<FVector> left;
			FVector norm;
			int32 v0 = vertexN.Find(path[0].Left);
			int32 v1 = vertexN.Find(path[0].Right);
			//both vertices on edge
			if ((v0 != -1) && (v1 != -1))
			{
				FEdgeMenge edge1;
				if (v0 < v1)
				{
					edge1.v0 = v0;
					edge1.v1 = v1;
				}
				else
				{
					edge1.v0 = v1;
					edge1.v1 = v0;
				}
				FNodeGroop node;
				node.refPoly = cor1[0];
				int32 n0 = nodes.Find(node);
				node.refPoly = cor1[1];
				int32 n1 = nodes.Find(node);
				if (n0 < n1)
				{
					edge1.n0 = n0;
					edge1.n1 = n1;
				}
				else
				{
					edge1.n0 = n1;
					edge1.n1 = n0;
				}
				left.Add(path[0].Left);
				left.Add(path[0].Right);
				if (edges.Num() == 0)
				{
					edges.Add(edge1);
					nodes[edge1.n0].edges.Add(edges.Num() - 1);
					nodes[edge1.n1].edges.Add(edges.Num() - 1);
					if (DrawDebug) DrawDebugLine(World, left[0], left[1], FColor::Green, true, -1, 0, 5);
				}
				else
				{
					if (edges.Find(edge1) == INDEX_NONE)
					{
						edges.Add(edge1);
						nodes[edge1.n0].edges.Add(edges.Num() - 1);
						nodes[edge1.n1].edges.Add(edges.Num() - 1);
						if (DrawDebug) DrawDebugLine(World, left[0], left[1], FColor::Green, true, -1, 0, 5);
					}
				}

			}
			else
			{
				if ((v0 == -1) && (v1 != -1))
				{
					v1 = vertexN.Find(path[0].Right);
					FVector vr1 = path[0].Left;
					TArray<FVector> allVerPolys;
					allVerPolys.Append(test1v);
					allVerPolys.Append(test2v);
					float yMin = 40000;
					for (int i = 0; i < allVerPolys.Num(); i++)
					{
						if (allVerPolys[i].X == path[0].Left.X)
						{
							float yz = FGenericPlatformMath::Abs(path[0].Left.Y);
							float yy = FGenericPlatformMath::Abs(allVerPolys[i].Y);
							float r = FGenericPlatformMath::Abs(yy - yz);
							if (yMin > r)
							{
								vr1 = allVerPolys[i];
								yMin = r;
							}
						}
					}
					if (vertexN.Find(vr1) == INDEX_NONE)
					{
						for (int i = 0; i < allVerPolys.Num(); i++)
						{
							if (allVerPolys[i].Y == path[0].Left.Y)
							{
								float yz = FGenericPlatformMath::Abs(path[0].Left.X);
								float yy = FGenericPlatformMath::Abs(allVerPolys[i].X);
								float r = FGenericPlatformMath::Abs(yy - yz);
								if (yMin > r)
								{
									vr1 = allVerPolys[i];
									yMin = r;
								}
							}
						}
					}
					v0 = vertexN.Find(vr1);
					FEdgeMenge edge1;
					if (v0 < v1)
					{
						edge1.v0 = v0;
						edge1.v1 = v1;
					}
					else
					{
						edge1.v0 = v1;
						edge1.v1 = v0;
					}
					FNodeGroop node;
					node.refPoly = cor1[0];
					int32 n0 = nodes.Find(node);
					node.refPoly = cor1[1];
					int32 n1 = nodes.Find(node);
					if (n0 < n1)
					{
						edge1.n0 = n0;
						edge1.n1 = n1;
					}
					else
					{
						edge1.n0 = n1;
						edge1.n1 = n0;
					}
					left.Add(path[0].Left);
					left.Add(path[0].Right);
					if (edges.Num() == 0)
					{
						edges.Add(edge1);
						nodes[edge1.n0].edges.Add(edges.Num() - 1);
						nodes[edge1.n1].edges.Add(edges.Num() - 1);
						if (DrawDebug) DrawDebugLine(World, left[0], left[1], FColor::Green, true, -1, 0, 5);
					}
					else
					{
						if (edges.Find(edge1) == INDEX_NONE)
						{
							edges.Add(edge1);
							nodes[edge1.n0].edges.Add(edges.Num() - 1);
							nodes[edge1.n1].edges.Add(edges.Num() - 1);
							if (DrawDebug) DrawDebugLine(World, left[0], left[1], FColor::Green, true, -1, 0, 5);
						}
					}
				}
				if ((v0 != -1) && (v1 == -1))
				{
					v0 = vertexN.Find(path[0].Left);
					FVector vr1 = path[0].Right;
					TArray<FVector> allVerPolys;
					allVerPolys.Append(test1v);
					allVerPolys.Append(test2v);
					float yMin = 40000;
					for (int i = 0; i < allVerPolys.Num(); i++)
					{
						if (allVerPolys[i].X == path[0].Right.X)
						{
							float yz = FGenericPlatformMath::Abs(path[0].Right.Y);
							float yy = FGenericPlatformMath::Abs(allVerPolys[i].Y);
							float r = FGenericPlatformMath::Abs(yy - yz);
							if (yMin > r)
							{
								vr1 = allVerPolys[i];
								yMin = r;
							}
						}
					}
					if (vertexN.Find(vr1) == INDEX_NONE)
					{
						for (int i = 0; i < allVerPolys.Num(); i++)
						{
							if (allVerPolys[i].Y == path[0].Right.Y)
							{
								float yz = FGenericPlatformMath::Abs(path[0].Right.X);
								float yy = FGenericPlatformMath::Abs(allVerPolys[i].X);
								float r = FGenericPlatformMath::Abs(yy - yz);
								if (yMin > r)
								{
									vr1 = allVerPolys[i];
									yMin = r;
								}
							}
						}
					}
					v1 = vertexN.Find(vr1);
					FEdgeMenge edge1;
					if (v0 < v1)
					{
						edge1.v0 = v0;
						edge1.v1 = v1;
					}
					else
					{
						edge1.v0 = v1;
						edge1.v1 = v0;
					}
					FNodeGroop node;
					node.refPoly = cor1[0];
					int32 n0 = nodes.Find(node);
					node.refPoly = cor1[1];
					int32 n1 = nodes.Find(node);
					if (n0 < n1)
					{
						edge1.n0 = n0;
						edge1.n1 = n1;
					}
					else
					{
						edge1.n0 = n1;
						edge1.n1 = n0;
					}
					left.Add(path[0].Left);
					left.Add(path[0].Right);
					if (edges.Num() == 0)
					{
						edges.Add(edge1);
						nodes[edge1.n0].edges.Add(edges.Num() - 1);
						nodes[edge1.n1].edges.Add(edges.Num() - 1);
						if (DrawDebug) DrawDebugLine(World, left[0], left[1], FColor::Green, true, -1, 0, 5);
					}
					else
					{
						if (edges.Find(edge1) == INDEX_NONE)
						{
							edges.Add(edge1);
							nodes[edge1.n0].edges.Add(edges.Num() - 1);
							nodes[edge1.n1].edges.Add(edges.Num() - 1);
							if (DrawDebug) DrawDebugLine(World, left[0], left[1], FColor::Green, true, -1, 0, 5);
						}
					}
				}
			}
			cor1.Empty();
		}
		cor.Empty();
	}
	TArray<FObstacleMenge> contourObstacleMenge;
	TArray<FObstacleMenge> obstaclesMCopy;
	TArray<FObstacleCont>  contourN;
	obstaclesMCopy.Append(obstaclesM);
	bool r = WriteToFile(vertexN, edges, obstaclesM, nodes);

	while (obstaclesMCopy.Num() != 0) //получение контура препятствий
	{
		contourObstacleMenge.Add(obstaclesMCopy[0]);
		int der = 0;
		while (contourObstacleMenge.Num() != der)
		{
			der = contourObstacleMenge.Num();
			for (int i = 0; i < obstaclesMCopy.Num(); i++)
			{
				if (obstaclesMCopy[i].v0 == contourObstacleMenge[contourObstacleMenge.Num() - 1].v1)
				{
					contourObstacleMenge.Add(obstaclesMCopy[i]);
				}
			}
			if (contourObstacleMenge[contourObstacleMenge.Num() - 1].v1 == contourObstacleMenge[0].v0)
			{
				der = contourObstacleMenge.Num();
				FObstacleCont contourEd;
				for (int i = 0; i < contourObstacleMenge.Num(); i++)
				{
					obstaclesMCopy.Remove(contourObstacleMenge[i]);
					contourEd.vert.Add(vertexN[contourObstacleMenge[i].v0]);
				}
				contourN.Add(contourEd);
			}
		}
		contourObstacleMenge.Empty();
	}
	/*FString SaveDirectory = FPaths::ProjectDir() + "/Menge/core/";
	FString FileName = FString("test_input.txt"); //вывод контура препятствий
	TArray<FString> arrayVertexString;
	arrayVertexString.Add(FString::FromInt(contourN.Num()));
	for (int i = 0; i < contourN.Num(); i++)
	{
		arrayVertexString.Add(FString::FromInt(contourN[i].vert.Num()));
		arrayVertexString.Add(FString::FromInt(i));
		for (int j = 0; j < contourN[i].vert.Num(); j++)
		{
			FString buffer = FString::SanitizeFloat(contourN[i].vert[j].X / 100) + " " + FString::SanitizeFloat(contourN[i].vert[j].Y / 100) + " " + FString::SanitizeFloat(contourN[i].vert[j].Z / 100);
			if (DrawDebug) DrawDebugPoint(World, contourN[i].vert[j], 5, FColor::Red, true);
			arrayVertexString.Add(buffer);
		}
	}
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	if (PlatformFile.CreateDirectoryTree(*SaveDirectory))
	{
		FString AbsoluteFilePath = SaveDirectory + "/" + FileName;
		FFileHelper::SaveStringArrayToFile(arrayVertexString, *AbsoluteFilePath);
	}*/
	//bool r = WriteMavMeshFile(vertexN, edges, obstaclesM, nodes);
	return r;


	//return true;
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FExportNavMeshModule, ExportNavMesh)