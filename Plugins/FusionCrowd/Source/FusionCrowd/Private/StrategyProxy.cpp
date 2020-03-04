#include "StrategyProxy.h"

StrategyProxy::StrategyProxy(FusionCrowd::ISimulatorFacade* simulator, FusionCrowd::ComponentId assignedId)
	: _simulator(simulator), _id(assignedId)
{
}

void StrategyProxy::Update(float timeStep)
{

}

void StrategyProxy::SetAgentParams(size_t id, FusionCrowd::ModelAgentParams & params) {

}

void StrategyProxy::AddAgent(size_t id)
{
	_agents.Add(id);
}

bool StrategyProxy::RemoveAgent(size_t id)
{
	if (!_agents.Contains(id))
		return false;

	_agents.Remove(id);
	return true;
}

FusionCrowd::ComponentId StrategyProxy::GetId()
{
	return _id;
}
