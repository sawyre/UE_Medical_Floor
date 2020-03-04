// Fill out your copyright notice in the Description page of Project Settings.


#include "FCMovmentComponent.h"
#include "GameFramework/GameModeBase.h"
#include "Engine/World.h"
#include "FCController.h"
#include "Export/ComponentId.h"
#include "Kismet/KismetMathLibrary.h"

using namespace FusionCrowd;

// Sets default values for this component's properties
UFCMovmentComponent::UFCMovmentComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UFCMovmentComponent::BeginPlay()
{
	Super::BeginPlay();
	((UFCController*)GetWorld()->GetAuthGameMode()
		->GetComponentByClass(UFCController::StaticClass()))->movment_components.Add(this);
}


// Called every frame
void UFCMovmentComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UFCMovmentComponent::SetGoal(FVector newGoal)
{
	IsGoalUpdated = false;
	Goal = newGoal;
}

void UFCMovmentComponent::SetOperationComponent(TEnumAsByte<EOperationComponentType> NewOperationType)
{
	IsOTUpdated = false;
	OperationType = NewOperationType;
	OTtoUpdate = NewOperationType;
}

