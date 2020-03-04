#include "RecordingDrawer.h"


RecordingDrawer::RecordingDrawer()
{
}


RecordingDrawer::RecordingDrawer(FusionCrowd::IRecording * recording, UWorld * world) : _recording(recording), _world(world)
{
}


RecordingDrawer::~RecordingDrawer()
{
}


FColor RecordingDrawer::GetOperationComponentColor(FusionCrowd::ComponentId componentId) {
	switch (componentId)
	{
	case FusionCrowd::ComponentIds::ORCA_ID:
		return FColor(255, 0, 0);

	case FusionCrowd::ComponentIds::KARAMOUZAS_ID:
		return FColor(0, 255, 0);

	case FusionCrowd::ComponentIds::HELBING_ID:
		return FColor(0, 0, 255);

	case FusionCrowd::ComponentIds::PEDVO_ID:
		return FColor(255, 255, 0);

	case FusionCrowd::ComponentIds::ZANLUNGO_ID:
		return FColor(255, 0, 255);

	case FusionCrowd::ComponentIds::SWITCHING:
		return FColor(0, 255, 255);

	default:
		return FColor(0, 0, 0);
	}
}


void RecordingDrawer::DrawSlice(const FusionCrowd::IRecordingSlice & slice) {
	FusionCrowd::FCArray<size_t> ids = FusionCrowd::FCArray<size_t>(slice.GetAgentCount());
	slice.GetAgentIds(ids);

	for (auto id : ids) {
		auto info = slice.GetAgentInfo(id);
		auto newPos = FVector(100 * info.posX, 100 * info.posY, 0);

		auto prev = _previousAgentsPositions.find(id);
		if (prev != _previousAgentsPositions.end())
		{
			DrawDebugLine(
				_world,
				prev->second,
				newPos,
				GetOperationComponentColor(info.opCompId),
				true
			);
		}

		_previousAgentsPositions[id] = newPos;
	}
}


void RecordingDrawer::DrawCurrentSlice() {
	DrawSlice(_recording->GetCurrentSlice());
}


void RecordingDrawer::ClearAll() {
	_previousAgentsPositions.clear();
	FlushPersistentDebugLines(_world);
}


void RecordingDrawer::RedrawAll() {
	ClearAll();
	FusionCrowd::TimeSpan timeSpan(_recording->GetSlicesCount());
	_recording->GetTimeSpan(timeSpan);
	for (auto time : timeSpan) {
		DrawSlice(_recording->GetSlice(time));
	}
}