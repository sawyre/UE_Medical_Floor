// Fill out your copyright notice in the Description page of Project Settings.


#include "FCNavMesh.h"
#include "Export/Export.h"
#include "DrawDebugHelpers.h"

// Sets default values
AFCNavMesh::AFCNavMesh()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	vertexNavMeshCount = 0;

	mesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("GeneratedMesh"));
	RootComponent = mesh;
	// New in UE 4.17, multi-threaded PhysX cooking.
	mesh->bUseAsyncCooking = true;
}

float AFCNavMesh::CutTest(UFCController* controller, TArray<FVector> polygon) {
	return controller->CutPolygon(polygon);
}

void AFCNavMesh::DrawObstacles(UFCController* controller) {
	TArray<FusionCrowd::EdgeInfo> obstacles = controller->GetObstacles();
	for (auto obstacle : obstacles) {
		FVector start(obstacle.x1, obstacle.y1, 5);
		FVector end(obstacle.x2, obstacle.y2, 5);
		FVector node(obstacle.nx0, obstacle.ny0, 5);
		DrawDebugLine(
			GetWorld(),
			start,
			end,
			FColor(255, 0, 0),
			true, -1, 0,
			EdgeWidth
		);
		DrawDebugSphere(GetWorld(), start, EdgeWidth * 4, 4, FColor(255, 0, 0), true, -1, 0, EdgeWidth / 3.0f);
		DrawDebugSphere(GetWorld(), end, EdgeWidth * 4, 4, FColor(255, 0, 0), true, -1, 0, EdgeWidth / 3.0f);
		//node link
		DrawDebugSphere(GetWorld(), node, EdgeWidth / 2.0f, 4, FColor(255, 255, 0), true, -1, 0, EdgeWidth / 3.0f);
		DrawDebugLine(
			GetWorld(),
			(start+end)/2,
			node,
			FColor(255, 255, 0),
			true, -1, 0,
			EdgeWidth/3.0
		);

		if (obstacle.error_code != 0) {
			DrawDebugLine(
				GetWorld(),
				((start + end) / 2),
				((start + end) / 2 + FVector(0, 0, 1500)),
				FColor(0, 255, 0),
				true, -1, 0,
				EdgeWidth * 3
			);

		}
	}
}

void AFCNavMesh::FlushLines() {
	FlushPersistentDebugLines(GetWorld());
}

void AFCNavMesh::DrawEdges(UFCController* controller) {
	TArray<FusionCrowd::EdgeInfo> edges = controller->GetEdges();
	for (auto edge : edges) {
		FVector start(edge.x1, edge.y1, 5);
		FVector end(edge.x2, edge.y2, 5);
		DrawDebugLine(
			GetWorld(),
			start,
			end,
			FColor(0, 255, 0),
			true, -1, 0,
			EdgeWidth
		);
		FVector node0(edge.nx0, edge.ny0, 5);
		FVector node1(edge.nx1, edge.ny1, 5);
		DrawDebugSphere(GetWorld(), start, EdgeWidth * 4, 4, FColor(0, 255, 0), true, -1, 0, EdgeWidth / 3.0f);
		DrawDebugSphere(GetWorld(), end, EdgeWidth * 4, 4, FColor(0, 255, 0), true, -1, 0, EdgeWidth/3.0f);
		
		DrawDebugSphere(GetWorld(), node0, EdgeWidth * 2, 4, FColor(255, 255, 0), true, -1, 0, EdgeWidth / 3.0f);
		DrawDebugSphere(GetWorld(), node1, EdgeWidth * 2, 4, FColor(255, 255, 0), true, -1, 0, EdgeWidth / 3.0f);DrawDebugLine(
			GetWorld(),
			node0,
			(start+end)/2,
			FColor(255, 255, 0),
			true, -1, 0,
			EdgeWidth/3
		);
		DrawDebugLine(
			GetWorld(),
			(start + end) / 2,
			node1,
			FColor(255, 255, 0),
			true, -1, 0,
			EdgeWidth/3
		);

		if (edge.error_code != 0) {
			DrawDebugLine(
				GetWorld(),
				((start+end)/2),
				((start + end) / 2 + FVector(0,0,1500)),
				FColor(255, 0, 0),
				true, -1, 0,
				EdgeWidth * 3
			);

		}
	}
}

bool AFCNavMesh::BuildRuntimeMesh(UFCController* controller, TArray<int32> to_draw) {
	TArray<FVector> nodes_vert = controller->GetVerices();
	TArray<int32> nodes_info = controller->GetNodesVertexesCount();
	TArray<int32> Triangles;
	for (int i = 0; i < nodes_info.Num(); i++) {
		if (!to_draw.Contains(i)) continue;

		TArray<int32> vertex_ids = controller->GetNodesVertexesInfo(i, nodes_info[i]);
		if (vertex_ids.Num() == 0) return false;
		FVector node_center(0, 0, 0);
		for (auto vid : vertex_ids) {
			node_center += nodes_vert[vid];
		}
		node_center /= (float)vertex_ids.Num();

		//add node triangles
		nodes_vert.Add(node_center);
		for (int j = 0; j < vertex_ids.Num()-1; j++) {
			Triangles.Add(nodes_vert.Num() - 1);
			Triangles.Add(vertex_ids[j]);
			Triangles.Add(vertex_ids[j+1]);
		}
		//add final triangle
		Triangles.Add(nodes_vert.Num() - 1);
		Triangles.Add(vertex_ids[vertex_ids.Num() - 1]);
		Triangles.Add(vertex_ids[0]);
	}

	TArray<FVector> normals;
	for (int i = 0; i < nodes_vert.Num(); i++)
	{
		normals.Add(FVector(0, 0, 1));
	}

	TArray<FVector2D> UV0;
	UV0.Add(FVector2D(0, 0));
	UV0.Add(FVector2D(10, 0));
	UV0.Add(FVector2D(0, 10));
	UV0.Add(FVector2D(10, 10));

	TArray<FProcMeshTangent> tangents;
	for (int i = 0; i < nodes_vert.Num(); i++)
	{
		tangents.Add(FProcMeshTangent(1, 0, 0));
	}
	TArray<FLinearColor> vertexColors;
	for (int i = 0; i < nodes_vert.Num(); i++)
	{
		vertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1));
	}

	mesh->CreateMeshSection_LinearColor(0, nodes_vert, Triangles, normals, UV0, vertexColors, tangents, true);
	// Enable collision data
	//mesh->ContainsPhysicsTriMeshData(true);
	return true;
}

// Called when the game starts or when spawned
void AFCNavMesh::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AFCNavMesh::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFCNavMesh::PostLoad()
{
	Super::PostLoad();

}

void AFCNavMesh::LoadMesh(FString path)
{
	//ReadNavMesh(path);
	//CreateTriangle();
}

void AFCNavMesh::CheckCPP(FString path)
{
	ReadNavMesh(path);
	CreateTriangle();
}

void AFCNavMesh::ReadNavMesh(FString path)
{
	vertexNavMesh.Empty();
	obstNavMes.Empty();
	edgeNavMesh.Empty();
	nodeNavMesh.Empty();

	FString myFile = path;
	FString result;
	FFileHelper::LoadFileToString(result, *myFile);

	//return result;
	//int vertexCount = FCString::Atoi(*result);
	FString buffer = "";
	float v = 0;
	bool readVertexNavMesh = true;
	bool readObstclNavMesh = false;
	bool readEdgeNaVMesh = false;
	bool readNodeNavMesh = false;
	int64 numStr = 0;

	for (int i = 0; i < result.Len(); i++)
	{
		if (result[i] == '\n')
		{
			if (buffer.Find(" ", ESearchCase::IgnoreCase, ESearchDir::FromStart, 0) == -1)
			{
				if (readNodeNavMesh)
				{
					if ((buffer != "/n") && (buffer != "") && (!buffer.Equals("nodeGroup")))
					{

						nodeNavMeshCount = FCString::Atoi64(*buffer);
						readNodeNavMesh = false;
					}
				}
				if (readObstclNavMesh)
				{
					if ((buffer != "/n") && (buffer != ""))
					{
						obstNavMeshCount = FCString::Atoi64(*buffer);

						readObstclNavMesh = false;
						readNodeNavMesh = true;
					}
				}
				if (readEdgeNaVMesh)
				{
					if ((buffer != "/n") && (buffer != ""))
					{
						edgeNavMeshCount = FCString::Atoi64(*buffer);

						readEdgeNaVMesh = false;
						readObstclNavMesh = true;
					}
				}
				if (readVertexNavMesh)
				{
					if ((buffer != "/n") && (buffer != ""))
					{
						vertexNavMeshCount = FCString::Atoi64(*buffer);

						readVertexNavMesh = false;
						readEdgeNaVMesh = true;
					}
				}
			}
			else
			{
				if (vertexNavMeshCount != vertexNavMesh.Num())
				{
					if ((buffer != "/n") && (buffer != ""))
					{
						VertexNavMesh(buffer);
					}
				}
				else
				{
					if (edgeNavMeshCount != edgeNavMesh.Num())
					{
						if ((buffer != "/n") && (buffer != ""))
						{
							EdgeNavMes(buffer);
						}
					}
					else
					{
						if (obstNavMeshCount != obstNavMes.Num())
						{
							if ((buffer != "/n") && (buffer != ""))
							{
								ObstNavMesh(buffer);
							}
						}
						else
						{
							if ((buffer != "/n") && (buffer != ""))
							{
								if (numStr == 0)
								{
									nodeNavMesh.Add(FNodeGroop());
								}
								NodeNavMesh(buffer, numStr);
								if (numStr == 4)
								{
									numStr = 0;
								}
								else
								{
									numStr++;
								}
							}
						}
					}
				}
			}
			buffer = "";
		}
		else
		{
			buffer += result[i];
		}
	}
	//for (int i = 0; i < obstNavMes.Num(); i++)
	//{
	//	DrawDebugLine(GetWorld(), vertexNavMesh[obstNavMes[i]._v0], vertexNavMesh[obstNavMes[i]._v1], FColor::Yellow, true, -1, 0, 5);
	//}

	//for (int i = 0; i < edgeNavMesh.Num(); i++)
	//{
	//	DrawDebugLine(GetWorld(), vertexNavMesh[edgeNavMesh[i]._v0], vertexNavMesh[edgeNavMesh[i]._v1], FColor::Blue, true, -1, 0, 5);
	//}
}

void AFCNavMesh::VertexNavMesh(FString info)
{
	float x = FCString::Atof(*info);

	int spaseIndex = info.Find(" ", ESearchCase::IgnoreCase, ESearchDir::FromStart, 0);
	info.RemoveAt(0, spaseIndex + 1);

	float y = FCString::Atof(*info);

	vertexNavMesh.Add(FVector(x * 100, y * 100, 0.0f));
}

void AFCNavMesh::EdgeNavMes(FString info)
{
	int32 v0 = FCString::Atoi(*info);

	int spaseIndex = info.Find(" ", ESearchCase::IgnoreCase, ESearchDir::FromStart, 0);
	info.RemoveAt(0, spaseIndex + 1);

	int32 v1 = FCString::Atoi(*info);

	spaseIndex = info.Find(" ", ESearchCase::IgnoreCase, ESearchDir::FromStart, 0);
	info.RemoveAt(0, spaseIndex + 1);

	int32 n0 = FCString::Atoi(*info);

	spaseIndex = info.Find(" ", ESearchCase::IgnoreCase, ESearchDir::FromStart, 0);
	info.RemoveAt(0, spaseIndex + 1);

	int32 n1 = FCString::Atoi(*info);

	FEdgeMenge em;
	em.v0 = v0;
	em.v1 = v1;
	em.n0 = n0;
	em.n1 = n1;
	edgeNavMesh.Add(em);
}

void AFCNavMesh::ObstNavMesh(FString info)
{
	int32 v0 = FCString::Atoi(*info);

	int spaseIndex = info.Find(" ", ESearchCase::IgnoreCase, ESearchDir::FromStart, 0);
	info.RemoveAt(0, spaseIndex + 1);

	int32 v1 = FCString::Atoi(*info);

	spaseIndex = info.Find(" ", ESearchCase::IgnoreCase, ESearchDir::FromStart, 0);
	info.RemoveAt(0, spaseIndex + 1);

	int32 node = FCString::Atoi(*info);

	spaseIndex = info.Find(" ", ESearchCase::IgnoreCase, ESearchDir::FromStart, 0);
	info.RemoveAt(0, spaseIndex + 1);

	int32 nextObs = FCString::Atoi(*info);

	FObstacleMenge om;
	om.v0 = v0;
	om.v1 = v1;
	om.node = node;
	om.nextObs = nextObs;
	obstNavMes.Add(om);
}

void AFCNavMesh::NodeNavMesh(FString info, int64 numStr)
{
	switch (numStr)
	{
	case 0:
	{
		float x = FCString::Atof(*info);

		int spaseIndex = info.Find(" ", ESearchCase::IgnoreCase, ESearchDir::FromStart, 0);
		info.RemoveAt(0, spaseIndex + 1);

		float y = FCString::Atof(*info);

		nodeNavMesh[nodeNavMesh.Num() - 1].centre = FVector2D(x * 100, y * 100);
		break;
	}
	case 1:
	{
		int64 countVertex = FCString::Atoi(*info);

		int spaseIndex = info.Find(" ", ESearchCase::IgnoreCase, ESearchDir::FromStart, 0);
		info.RemoveAt(0, spaseIndex + 1);
		if (countVertex > 0)
		{
			nodeNavMesh[nodeNavMesh.Num() - 1].vertexs = ParsInt(info);
		}
		break;
	}
	case 2:
	{
		nodeNavMesh[nodeNavMesh.Num() - 1].elevation = ParsElevation(info);
		break;
	}
	case 3:
	{
		int64 countEdges = FCString::Atoi(*info);

		int spaseIndex = info.Find(" ", ESearchCase::IgnoreCase, ESearchDir::FromStart, 0);
		info.RemoveAt(0, spaseIndex + 1);
		if (countEdges > 0)
		{
			nodeNavMesh[nodeNavMesh.Num() - 1].edges = ParsInt(info);
		}
		break;
	}
	case 4:
	{
		int64 countObstacles = FCString::Atoi(*info);

		int spaseIndex = info.Find(" ", ESearchCase::IgnoreCase, ESearchDir::FromStart, 0);
		info.RemoveAt(0, spaseIndex + 1);
		if (countObstacles > 0)
		{
			nodeNavMesh[nodeNavMesh.Num() - 1].obstacles = ParsInt(info);
		}
		break;
	}
	default:
		break;
	}
}

TArray<int32> AFCNavMesh::ParsInt(FString info)
{
	info.TrimEndInline();
	info += ' ';
	TArray<int32> result;
	while (info != "")
	{
		int32 v1 = FCString::Atoi(*info);

		int spaseIndex = info.Find(" ", ESearchCase::IgnoreCase, ESearchDir::FromStart, 0);
		info.RemoveAt(0, spaseIndex + 1);

		result.Add(v1);
	}
	return result;
}

FVector AFCNavMesh::ParsElevation(FString info)
{
	float x = FCString::Atof(*info);

	int spaseIndex = info.Find(" ", ESearchCase::IgnoreCase, ESearchDir::FromStart, 0);
	info.RemoveAt(0, spaseIndex + 1);

	float y = FCString::Atof(*info);

	spaseIndex = info.Find(" ", ESearchCase::IgnoreCase, ESearchDir::FromStart, 0);
	info.RemoveAt(0, spaseIndex + 1);

	float z = FCString::Atof(*info);

	return FVector(x, y, z);
}

void AFCNavMesh::CreateTriangle()
{
	TArray<FVector> vertices = vertexNavMesh;
	//vertices.Add(FVector(0, 0, 0));
	//vertices.Add(FVector(0, 100, 0));
	//vertices.Add(FVector(100, 0, 0));
	//vertices.Add(FVector(100, 100, 0));

	TArray<int32> Triangles;
	for (int i = 0; i < nodeNavMesh.Num(); i++)
	{
		vertices.Add(FVector(nodeNavMesh[i].centre, 0));
		for (int j = 0; j < nodeNavMesh[i].vertexs.Num(); j++)
		{
			if (j + 1 >= nodeNavMesh[i].vertexs.Num())
			{
				Triangles.Add(vertices.Num() - 1);
				Triangles.Add(nodeNavMesh[i].vertexs[j]);
				Triangles.Add(nodeNavMesh[i].vertexs[0]);
			}
			else
			{
				Triangles.Add(vertices.Num() - 1);
				Triangles.Add(nodeNavMesh[i].vertexs[j]);
				Triangles.Add(nodeNavMesh[i].vertexs[j + 1]);
			}
		}
	}

	TArray<FVector> normals;
	for (int i = 0; i < vertices.Num(); i++)
	{
		normals.Add(FVector(0, 0, 1));
	}
	//normals.Add(FVector(1, 0, 0));
	//normals.Add(FVector(1, 0, 0));
	//normals.Add(FVector(1, 0, 0));
	//normals.Add(FVector(1, 0, 0));

	TArray<FVector2D> UV0;
	UV0.Add(FVector2D(0, 0));
	UV0.Add(FVector2D(10, 0));
	UV0.Add(FVector2D(0, 10));
	UV0.Add(FVector2D(10, 10));

	TArray<FProcMeshTangent> tangents;
	for (int i = 0; i < vertices.Num(); i++)
	{
		tangents.Add(FProcMeshTangent(1, 0, 0));
	}
	//tangents.Add(FProcMeshTangent(0, 1, 0));
	//tangents.Add(FProcMeshTangent(0, 1, 0));
	//tangents.Add(FProcMeshTangent(0, 1, 0));
	//tangents.Add(FProcMeshTangent(0, 1, 0));

	TArray<FLinearColor> vertexColors;
	for (int i = 0; i < vertices.Num(); i++)
	{
		vertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1));
	}
	//vertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1));
	//vertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1));
	//vertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1));
	//vertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1));

	mesh->CreateMeshSection_LinearColor(0, vertices, Triangles, normals, UV0, vertexColors, tangents, true);

	// Enable collision data
	mesh->ContainsPhysicsTriMeshData(true);
}


