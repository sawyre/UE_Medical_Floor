// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Engine.h"
#include "Runtime/Core/Public/Misc/Paths.h"
#include "Runtime/Core/Public/HAL/PlatformFilemanager.h"
#include "Runtime/Core/Public/Misc/FileHelper.h"
#include "Runtime/Core/Public/Containers/UnrealString.h"
#include "Runtime/Renderer/Public/MeshDrawShaderBindings.h"
#include "ProceduralMeshComponent.h"

#include "FCNavMesh.generated.h"

USTRUCT()
struct FNodeGroop
{
	GENERATED_BODY()
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

USTRUCT()
struct FEdgeMenge
{

	GENERATED_BODY()
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

USTRUCT()
struct FObstacleMenge
{
	GENERATED_BODY()

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

USTRUCT()
struct FObstacleCont
{
	GENERATED_BODY()
	TArray<FVector> vert;
};

UCLASS()
class FUSIONCROWD_API AFCNavMesh : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFCNavMesh();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void PostLoad() override;

	void ReadNavMesh(FString path);
	void CreateTriangle();

	UFUNCTION(BlueprintCallable, Category = "Fusion Crowd")
		void LoadMesh(FString path);

	UFUNCTION(BlueprintCallable, Category = "Fusion Crowd")
		void CheckCPP(FString path);

	UFUNCTION(BlueprintCallable, Category = "Fusion Crowd")
		bool BuildRuntimeMesh(UFCController* controller, TArray<int32> ignored);

	UFUNCTION(BlueprintCallable, Category = "Fusion Crowd")
		float CutTest(UFCController* controller, TArray<FVector> polygon);

	UFUNCTION(BlueprintCallable, Category = "Fusion Crowd")
		void DrawObstacles(UFCController* controller);

	UFUNCTION(BlueprintCallable, Category = "Fusion Crowd")
		void DrawEdges(UFCController* controller);

	UFUNCTION(BlueprintCallable, Category = "Fusion Crowd")
		void FlushLines();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UProceduralMeshComponent * mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fusion Crowd")
		float EdgeWidth = 1000.0f;


private:
	int64 vertexNavMeshCount;
	TArray<FVector> vertexNavMesh;

	int64 obstNavMeshCount;
	TArray<FObstacleMenge> obstNavMes;

	int64 edgeNavMeshCount;
	TArray<FEdgeMenge> edgeNavMesh;

	int64 nodeNavMeshCount;
	TArray<FNodeGroop> nodeNavMesh;

	void VertexNavMesh(FString info);
	void EdgeNavMes(FString info);
	void ObstNavMesh(FString info);
	void NodeNavMesh(FString info, int64 numStr);
	FVector ParsElevation(FString info);
	TArray<int32> ParsInt(FString info);
};
