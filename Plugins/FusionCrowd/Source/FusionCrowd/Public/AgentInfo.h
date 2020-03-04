#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "Export/Export.h"

#include "OperationComponentType.h"

#include "AgentInfo.generated.h"

USTRUCT(BlueprintType)
struct FAgentInfo {
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test Struct")
		int32 id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test Struct")
		FVector pos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test Struct")
		FVector orient;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test Struct")
		FVector vel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test Struct")
		float radius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test Struct")
		TEnumAsByte<EOperationComponentType> opComp;

	FAgentInfo() {}

	FAgentInfo(const FusionCrowd::AgentInfo &infoIn)
	{
		pos.X = infoIn.posX;
		pos.Y = infoIn.posY;
		pos.Z = 0.0f;

		orient.X = infoIn.orientX;
		orient.Y = infoIn.orientY;
		orient.Z = 0.0f;

		vel.X = infoIn.velX;
		vel.Y = infoIn.velY;
		vel.Z = 0.0f;

		radius = infoIn.radius;
		id = infoIn.id;
		opComp = (EOperationComponentType)infoIn.opCompId;
	}
};