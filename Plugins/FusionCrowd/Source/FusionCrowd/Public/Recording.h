// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ObjectMacros.h"

#include "AgentInfo.h"

#include "Recording.generated.h"


USTRUCT(BlueprintType)
struct FRecordingSlice
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TMap<int32, FAgentInfo> AgentInfos;

	FRecordingSlice() {};

	FRecordingSlice(const FusionCrowd::IRecordingSlice &sliceIn)
	{
		auto size = sliceIn.GetAgentCount();
		FusionCrowd::FCArray<size_t> agentsIds(size);
		sliceIn.GetAgentIds(agentsIds);

		AgentInfos.Reserve(size);
		for (auto id : agentsIds) {
			AgentInfos.Add(id, sliceIn.GetAgentInfo(id));
		}
	}
};


USTRUCT(BlueprintType)
struct FRecording
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TMap<float, FRecordingSlice> Slices;

	FRecording() {};

	FRecording(FusionCrowd::IRecording & recordingIn)
	{
		auto size = recordingIn.GetSlicesCount();
		FusionCrowd::TimeSpan timeSpan(size);
		recordingIn.GetTimeSpan(timeSpan);

		Slices.Reserve(size);
		for (auto time : timeSpan) {
			auto & slice = recordingIn.GetSlice(time);
			Slices.Add(time, FRecordingSlice(slice));
		}
	}
};