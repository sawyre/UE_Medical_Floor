// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

//FC
#include "Export/Export.h"
#include "Export/INavSystemPublic.h"
#include "Export/INavMeshPublic.h"
#include "AgentInfo.h"
#include "Export/IStrategyComponent.h"
#include "StrategyProxy.h"
#include "OperationComponentType.h"

#include "Recording.h"
#include "RecordingDrawer.h"

#include "FCMovmentComponent.h"

#include "FCController.generated.h"

using FusionCrowd::ISimulatorFacade;
using FusionCrowd::IStrategyComponent;
using FusionCrowd::ComponentId;


UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FUSIONCROWD_API UFCController : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UFCController();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	TMap<int32, UFCMovmentComponent*> _id_storage; //new line
	//TMap<int32, FAgentInfo> agentInfos;
	TArray<FAgentInfo> agentInfos;
	size_t agentCount;
	TSharedPtr<ISimulatorFacade> simulator;
	IStrategyComponent * _strategy;
	RecordingDrawer _recordingDrawer;
	bool _isPathsShown = false;
	FString navMeshPath;

	UPROPERTY(EditAnywhere, Category = "Fusion Crowd")
		bool IsRecordingEnabled = false;

	UPROPERTY(EditAnywhere, Category = "Fusion Crowd")
		float MaxCuttingPolyBB = 60000.0f;

public:
	TSharedPtr<FusionCrowd::ISimulatorBuilder> builder;
	IStrategyComponent * GetStrategy();

	TArray<FVector> GetVerices();
	TArray<int32> GetNodesVertexesCount();
	TArray<int32> GetNodesVertexesInfo(int node_id, int vertex_count);
	TArray<FusionCrowd::EdgeInfo> GetObstacles();
	TArray<FusionCrowd::EdgeInfo> GetEdges();

	void SetStrategyFactory(IStrategyComponent* (*factory)(ISimulatorFacade* sf, ComponentId cid, IStrategyComponent ** sc));
	IStrategyComponent* (*_strategy_factory)(ISimulatorFacade* simFacade, ComponentId assignedId, IStrategyComponent ** outStrategy);


public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(BlueprintReadOnly)
	bool IsSimulationInProgress;

	UFUNCTION(Category = "Fusion Crowd")
		FAgentInfo GetAgentInfo(int32 id);

	UFUNCTION(Category = "Fusion Crowd")
		void SetGoal(int32 agentId, FVector goalPos);

	UFUNCTION(Category = "Fusion Crowd")
		int32 AddAgent(FVector pos, FVector goalPos, EOperationComponentType opComponent);

	UFUNCTION(Category = "Fusion Crowd")
		void SetOperationModel(int32 agentId, EOperationComponentType type);

	UFUNCTION(BlueprintCallable, Category = "Fusion Crowd")
		float CutPolygon(TArray<FVector> polygon);
	//Fusion Crowd
	UFUNCTION(BlueprintCallable, Category = "Fusion Crowd")
		void StartSimulation();
	UFUNCTION(BlueprintCallable, Category = "Fusion Crowd")
		void InitBuilder();
	UPROPERTY(BlueprintReadWrite, Category = "Fusion Crowd")
		bool CustomTickEnabled = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fusion Crowd")
		FString NavMeshName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fusion Crowd")
		float TimeScale = 1.0f;

	UPROPERTY()
		TArray<UFCMovmentComponent*> movment_components;

private:
	UFUNCTION()
		void GetAgentsInfo();

	UFUNCTION()
		void UpdateAgents();
	UFUNCTION()
		bool RegistrateAgent(UFCMovmentComponent* mc_comp);

	UFUNCTION(Category = "Fusion Crowd")
		void DoSimulationStep(float timeStep = 0.1f) const;

	UFUNCTION(BlueprintCallable, Category = "Fusion Crowd")
		void ShowAgentsPaths();

	UFUNCTION(BlueprintCallable, Category = "Fusion Crowd")
		void HideAgentsPaths();

	UFUNCTION(BlueprintCallable, Category = "Fusion Crowd")
		bool ExportNavMeshToFile(FString file_path);
	//new line
	UFUNCTION()
		void DeleteExtinct();
};
