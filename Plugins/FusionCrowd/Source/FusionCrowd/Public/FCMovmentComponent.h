// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Containers/EnumAsByte.h"
#include <set>
#include "FCMovmentComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRegistratedDelegate, UFCMovmentComponent*, ID);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FUSIONCROWD_API UFCMovmentComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UFCMovmentComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(BlueprintReadOnly)
	int32 Id;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TEnumAsByte<EOperationComponentType> OperationType = TEnumAsByte<EOperationComponentType>(OPT_Orca);


	UPROPERTY(BlueprintReadOnly)
		FVector Goal;

	UFUNCTION(BlueprintCallable, Category = "Fusion Crowd")
	void SetGoal(FVector newGoal);

	UFUNCTION(BlueprintCallable, Category = "Fusion Crowd")
		void SetOperationComponent(TEnumAsByte<EOperationComponentType> NewOperationType);

	bool registrated = false;
	TEnumAsByte<EOperationComponentType> OTtoUpdate = TEnumAsByte<EOperationComponentType>(OPT_Orca);
	bool IsGoalUpdated = true;
	bool IsOTUpdated = true;

	UPROPERTY(BlueprintAssignable, Category = "Fusion Crowd")
		FRegistratedDelegate OnFCRegistrate;
};
