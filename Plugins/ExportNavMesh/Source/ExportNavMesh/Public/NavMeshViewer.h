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
#include "ExportNavMesh.h"

#include "NavMeshViewer.generated.h"

UCLASS()
class EXPORTNAVMESH_API ANavMeshViewer : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ANavMeshViewer();

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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UProceduralMeshComponent * mesh;

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
