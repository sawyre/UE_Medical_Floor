#include "FCController.h"
#include "Export/ComponentId.h"
#include "Misc/Paths.h"
#include "Kismet/GameplayStatics.h"
#include <vector>
#include "Kismet/KismetMathLibrary.h"

UFCController::UFCController()
{
	PrimaryComponentTick.bCanEverTick = true;
	agentCount = 0;
	agentInfos.SetNum(1000);
}

void UFCController::BeginPlay()
{
	Super::BeginPlay();
}

IStrategyComponent * UFCController::GetStrategy() {
	return _strategy;
}

void UFCController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (!CustomTickEnabled) return;
	if (IsSimulationInProgress) {
		DoSimulationStep(DeltaTime*TimeScale);
		GetAgentsInfo();
		UpdateAgents();
		if (_isPathsShown) _recordingDrawer.DrawCurrentSlice();
	}
}

IStrategyComponent* ProxyStrategyFactory(ISimulatorFacade* simFacade, ComponentId assignedId, IStrategyComponent ** outStrategy)
{
	*outStrategy = new StrategyProxy(simFacade, assignedId);
	return *outStrategy;
};

void UFCController::StartSimulation()
{
	movment_components.Empty();
	builder->WithExternalStrategy(_strategy_factory, reinterpret_cast<IStrategyComponent**>(&_strategy));
	simulator = TSharedPtr<FusionCrowd::ISimulatorFacade>(builder->Build(), [](FusionCrowd::ISimulatorFacade* Obj) { SimulatorFacadeDeleter(Obj); });
	simulator->SetIsRecording(IsRecordingEnabled);
	_recordingDrawer = RecordingDrawer(&(simulator->GetRecording()), GetWorld());
	IsSimulationInProgress = true;
}

void UFCController::InitBuilder() {
	navMeshPath = FPaths::ProjectContentDir() + "/NavMeshes/" + NavMeshName;
	builder = TSharedPtr<FusionCrowd::ISimulatorBuilder>(FusionCrowd::BuildSimulator(), [](FusionCrowd::ISimulatorBuilder* Obj) { BuilderDeleter(Obj); });
	builder->WithNavMesh(TCHAR_TO_ANSI(*navMeshPath));
	for (auto component : allOperationComponentTypes) {
		builder->WithOp(component);
	}
	_strategy_factory = ProxyStrategyFactory;
}


void UFCController::SetStrategyFactory(IStrategyComponent* (*factory)(ISimulatorFacade* sf, ComponentId cid, IStrategyComponent ** sc))
{
	_strategy_factory = factory;
}

void UFCController::SetGoal(int32 agentId, FVector goalPos)
{
	simulator->SetAgentGoal(agentId, goalPos.X, goalPos.Y);
}

void UFCController::SetOperationModel(int32 agentId, EOperationComponentType type)
{
	simulator->SetAgentOp(agentId, type);
}

int32 UFCController::AddAgent(FVector pos, FVector goalPos, EOperationComponentType opComponent)
{
	const int32 id = simulator->AddAgent(pos.X, pos.Y, opComponent, _strategy->GetId());
	return id;
}

FAgentInfo UFCController::GetAgentInfo(int32 agentId)
{
	if (agentId >= agentCount)
		return FAgentInfo();

	return agentInfos[agentId];
}

void UFCController::GetAgentsInfo()
{
	agentCount = simulator->GetAgentCount();

	if (agentCount > agentInfos.Num())
	{
		agentInfos.SetNum(agentCount);
	}

	FusionCrowd::FCArray<FusionCrowd::AgentInfo> agents(agentCount);
	simulator->GetAgents(agents);

	for (int i = 0; i < agentCount; i++)
	{
		agentInfos[i] = agents[i];
	}
}

void UFCController::DoSimulationStep(float timeStep) const
{
	if (timeStep > 0.1) timeStep = 0.1;
	simulator->DoStep(timeStep);
}

void UFCController::ShowAgentsPaths()
{
	if (_isPathsShown) return;
	_isPathsShown = true;
	_recordingDrawer.RedrawAll();
}

void UFCController::HideAgentsPaths()
{
	if (!_isPathsShown) return;
	_isPathsShown = false;
	_recordingDrawer.ClearAll();
}


TArray<FVector> UFCController::GetVerices() {
	TArray<FVector> res;
	FusionCrowd::FCArray<FusionCrowd::NavMeshVetrex> vertices(simulator->GetNavMesh()->GetVertexCount());
	simulator->GetNavMesh()->GetVertices(vertices);
	for (auto v : vertices) {
		res.Add(FVector(v.X*100.0, v.Y*100.0, 0.0));
	}
	return res;
}

TArray<int32> UFCController::GetNodesVertexesCount() {
	TArray<int32> res;
	int node_count = simulator->GetNavMesh()->GetNodesCount();
	for (int i = 0; i < node_count; i++) {
		res.Add(simulator->GetNavMesh()->GetNodeVertexCount(i));
	}
	return res;
}

TArray<int32> UFCController::GetNodesVertexesInfo(int node_id, int vertex_count) {
	TArray<int32> res;
	FusionCrowd::FCArray<int> vertices(vertex_count);
	simulator->GetNavMesh()->GetNodeVertexInfo(vertices, node_id);
	for (auto v : vertices) {
		res.Add(v);
	}
	return res;
}

TArray<FusionCrowd::EdgeInfo> UFCController::GetObstacles() {
	TArray<FusionCrowd::EdgeInfo> res;
	FusionCrowd::FCArray<FusionCrowd::EdgeInfo> obstacles(simulator->GetNavMesh()->GetObstaclesCount());
	bool a  = simulator->GetNavMesh()->GetObstacles(obstacles);
	for (auto o : obstacles) {
		FusionCrowd::EdgeInfo ei;
		ei.x1 = o.x1 * 100.0;
		ei.x2 = o.x2 * 100.0;
		ei.x1 = o.x1 * 100.0;
		ei.y1 = o.y1 * 100.0;
		ei.y2 = o.y2 * 100.0;
		ei.nx0 = o.nx0 * 100.0;
		ei.ny0 = o.ny0 * 100.0;
		ei.error_code = o.error_code;
		res.Add(ei);
	}
	return res;
}

TArray<FusionCrowd::EdgeInfo> UFCController::GetEdges() {
	TArray<FusionCrowd::EdgeInfo> res;
	FusionCrowd::FCArray<FusionCrowd::EdgeInfo> edges(simulator->GetNavMesh()->GetEdgesCount());
	simulator->GetNavMesh()->GetEdges(edges);
	for (auto o : edges) {
		FusionCrowd::EdgeInfo ei;
		ei.nx0 = o.nx0 * 100.0;
		ei.nx1 = o.nx1 * 100.0;
		ei.ny0 = o.ny0 * 100.0;
		ei.ny1 = o.ny1 * 100.0;
		ei.x1 = o.x1 * 100.0;
		ei.x2 = o.x2 * 100.0;
		ei.x1 = o.x1 * 100.0;
		ei.y1 = o.y1 * 100.0;
		ei.y2 = o.y2 * 100.0;
		ei.error_code = o.error_code;
		res.Add(ei);
	}
	return res;
}

float UFCController::CutPolygon(TArray<FVector> polygon) {
	FusionCrowd::FCArray<FusionCrowd::NavMeshVetrex> fcpolygon(polygon.Num());
	float maxx = -INFINITY, maxy = -INFINITY, minx = INFINITY, miny = INFINITY;
	for (int i = 0; i < polygon.Num(); i++) {
		if (maxx < polygon[i].X) maxx = polygon[i].X;
		if (maxy < polygon[i].Y) maxy = polygon[i].Y;
		if (minx > polygon[i].X) minx = polygon[i].X;
		if (miny > polygon[i].Y) miny = polygon[i].Y;
		FusionCrowd::NavMeshVetrex vertex = FusionCrowd::NavMeshVetrex();
		vertex.X = polygon[i].X / 100.0f;
		vertex.Y = polygon[i].Y / 100.0f;
		fcpolygon[i] = vertex;
	}
	//if (FVector::Dist(FVector(maxx, maxy, 0.0f), FVector(minx, miny, 0.0f))> MaxCuttingPolyBB) return -100;
	return simulator->GetNavSystem()->CutPolygonFromMesh(fcpolygon);
}


bool UFCController::ExportNavMeshToFile(FString file_path) {
	return simulator->GetNavMesh()->ExportNavMeshToFile(TCHAR_TO_ANSI(*file_path));
}

void UFCController::UpdateAgents() {
	for (auto mc : movment_components) {
		if (!mc->registrated) {
			mc->registrated = RegistrateAgent(mc);
			continue;
		}
		if (!mc->IsOTUpdated) {
			SetOperationModel(mc->Id, mc->OTtoUpdate);
		}

		FAgentInfo info = GetAgentInfo(mc->Id);
		FVector pos = info.pos;
		pos *= 100.0f;
		FTransform transform;
		//FC agent radius = 0.2m, so u should be 2*0.2=0.4m in diameter and 8*0.2=1.6m tall
		FVector scale_vector(2.0f, 2.0f, 8.0f);
		scale_vector *= info.radius;
		FRotator rot = UKismetMathLibrary::MakeRotFromX(info.orient);
		transform.SetRotation(rot.Quaternion());
		transform.SetScale3D(scale_vector);
		transform.SetLocation(pos);
		mc->GetOwner()->SetActorTransform(transform);
		mc->OperationType = info.opComp;

		if (!mc->IsGoalUpdated) {
			FVector fcgoal = mc->Goal / 100.0f;
			SetGoal(mc->Id, fcgoal);
			mc->IsGoalUpdated = true;
		}

		if (!mc->IsOTUpdated) {
			SetOperationModel(mc->Id, mc->OTtoUpdate);
			mc->IsOTUpdated = true;
		}
	}
}

bool UFCController::RegistrateAgent(UFCMovmentComponent* mc_comp) {
	FVector pos = mc_comp->GetOwner()->GetActorLocation();
	pos /= 100.0f;
	mc_comp->Id = AddAgent(pos, pos, mc_comp->OperationType.GetValue());
	mc_comp->OnFCRegistrate.Broadcast(mc_comp);
	return true;
}