#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "Export/ComponentId.h"

#include "OperationComponentType.generated.h"

/**
 *
 */
UENUM(BlueprintType)
enum EOperationComponentType
{
	OPT_Karamouzas = FusionCrowd::ComponentIds::KARAMOUZAS_ID	UMETA(DisplayName = "Karamouzas"),
	OPT_Helbing = FusionCrowd::ComponentIds::HELBING_ID 	UMETA(DisplayName = "Helbing"),
	OPT_Orca = FusionCrowd::ComponentIds::ORCA_ID 		UMETA(DisplayName = "Orca"),
	OPT_Zanlungo = FusionCrowd::ComponentIds::ZANLUNGO_ID 	UMETA(DisplayName = "Zanlungo"),
	OPT_Pedvo = FusionCrowd::ComponentIds::PEDVO_ID 		UMETA(DisplayName = "Pedvo"),
	OPT_Switching = FusionCrowd::ComponentIds::SWITCHING 		UMETA(DisplayName = "Switching"),
};

constexpr std::initializer_list<EOperationComponentType> allOperationComponentTypes = {
	OPT_Karamouzas, OPT_Helbing, OPT_Orca, OPT_Zanlungo, OPT_Pedvo, OPT_Switching
};