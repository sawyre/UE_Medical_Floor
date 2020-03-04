#pragma once

#include "Export/Export.h"
#include "DrawDebugHelpers.h"

#include <map>


class RecordingDrawer
{
public:
	RecordingDrawer();
	RecordingDrawer(FusionCrowd::IRecording * recording, UWorld * world);
	~RecordingDrawer();

	void DrawSlice(const FusionCrowd::IRecordingSlice & slice);
	void DrawCurrentSlice();
	void ClearAll();
	void RedrawAll();

	static FColor GetOperationComponentColor(FusionCrowd::ComponentId componentId);

private:
	FusionCrowd::IRecording * _recording;
	UWorld * _world;
	std::map<size_t, FVector> _previousAgentsPositions;
};