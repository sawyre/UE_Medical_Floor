#pragma once

#include "Containers/Set.h"

#include "Export/IStrategyComponent.h"
#include "Export/Export.h"
#include "Export/ComponentId.h"

class StrategyProxy : public FusionCrowd::IStrategyComponent
{
public:
	StrategyProxy(FusionCrowd::ISimulatorFacade * simulator, FusionCrowd::ComponentId assignedId);

	FusionCrowd::ComponentId GetId() override;

	void AddAgent(size_t id) override;
	bool RemoveAgent(size_t id) override;
	void Update(float timeStep) override;
	void SetAgentParams(size_t id, FusionCrowd::ModelAgentParams & params) override;

private:
	FusionCrowd::ISimulatorFacade * _simulator;
	TSet<size_t> _agents;
	FusionCrowd::ComponentId const _id;
};