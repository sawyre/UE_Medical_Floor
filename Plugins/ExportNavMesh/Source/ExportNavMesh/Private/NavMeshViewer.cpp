// Fill out your copyright notice in the Description page of Project Settings.

#include "NavMeshViewer.h"

// Sets default values
ANavMeshViewer::ANavMeshViewer()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	vertexNavMeshCount = 0;

	mesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("GeneratedMesh"));
	RootComponent = mesh;
	// New in UE 4.17, multi-threaded PhysX cooking.
	mesh->bUseAsyncCooking = true;
}

// Called when the game starts or when spawned
void ANavMeshViewer::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ANavMeshViewer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANavMeshViewer::PostLoad()
{
	Super::PostLoad();

}

void ANavMeshViewer::LoadMesh(FString path)
{
	ReadNavMesh(path);
	CreateTriangle();
}

void ANavMeshViewer::ReadNavMesh(FString path)
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

void ANavMeshViewer::VertexNavMesh(FString info)
{
	float x = FCString::Atof(*info);

	int spaseIndex = info.Find(" ", ESearchCase::IgnoreCase, ESearchDir::FromStart, 0);
	info.RemoveAt(0, spaseIndex + 1);

	float y = FCString::Atof(*info);

	vertexNavMesh.Add(FVector(x * 100, y * 100, 0.0f));
}

void ANavMeshViewer::EdgeNavMes(FString info)
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

void ANavMeshViewer::ObstNavMesh(FString info)
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

void ANavMeshViewer::NodeNavMesh(FString info, int64 numStr)
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

TArray<int32> ANavMeshViewer::ParsInt(FString info)
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

FVector ANavMeshViewer::ParsElevation(FString info)
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

void ANavMeshViewer::CreateTriangle()
{
	TArray<FVector> vertices = vertexNavMesh;
	//vertices.Add(FVector(0, 0, 0));
	//vertices.Add(FVector(0, 100, 0));
	//vertices.Add(FVector(100, 0, 0));
	//vertices.Add(FVector(100, 100, 0));

	TArray<int32> Triangles;
	for (int i = 0; i < nodeNavMesh.Num(); i++)
	{
		if (nodeNavMesh[i].vertexs.Num() == 4)
		{
			Triangles.Add(nodeNavMesh[i].vertexs[0]);
			Triangles.Add(nodeNavMesh[i].vertexs[1]);
			Triangles.Add(nodeNavMesh[i].vertexs[2]);

			Triangles.Add(nodeNavMesh[i].vertexs[3]);
			Triangles.Add(nodeNavMesh[i].vertexs[0]);
			Triangles.Add(nodeNavMesh[i].vertexs[2]);
		}
		else
		{
			if (nodeNavMesh[i].vertexs.Num() == 3)
			{
				Triangles.Add(nodeNavMesh[i].vertexs[0]);
				Triangles.Add(nodeNavMesh[i].vertexs[1]);
				Triangles.Add(nodeNavMesh[i].vertexs[2]);
			}
			else
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

