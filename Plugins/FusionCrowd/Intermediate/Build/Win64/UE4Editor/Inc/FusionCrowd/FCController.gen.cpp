// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FusionCrowd/Public/FCController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCController() {}
// Cross Module References
	FUSIONCROWD_API UClass* Z_Construct_UClass_UFCController_NoRegister();
	FUSIONCROWD_API UClass* Z_Construct_UClass_UFCController();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FusionCrowd();
	FUSIONCROWD_API UFunction* Z_Construct_UFunction_UFCController_AddAgent();
	FUSIONCROWD_API UEnum* Z_Construct_UEnum_FusionCrowd_EOperationComponentType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FUSIONCROWD_API UFunction* Z_Construct_UFunction_UFCController_CutPolygon();
	FUSIONCROWD_API UFunction* Z_Construct_UFunction_UFCController_DoSimulationStep();
	FUSIONCROWD_API UFunction* Z_Construct_UFunction_UFCController_ExportNavMeshToFile();
	FUSIONCROWD_API UFunction* Z_Construct_UFunction_UFCController_GetAgentInfo();
	FUSIONCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FAgentInfo();
	FUSIONCROWD_API UFunction* Z_Construct_UFunction_UFCController_GetAgentsInfo();
	FUSIONCROWD_API UFunction* Z_Construct_UFunction_UFCController_HideAgentsPaths();
	FUSIONCROWD_API UFunction* Z_Construct_UFunction_UFCController_InitBuilder();
	FUSIONCROWD_API UFunction* Z_Construct_UFunction_UFCController_RegistrateAgent();
	FUSIONCROWD_API UClass* Z_Construct_UClass_UFCMovmentComponent_NoRegister();
	FUSIONCROWD_API UFunction* Z_Construct_UFunction_UFCController_SetGoal();
	FUSIONCROWD_API UFunction* Z_Construct_UFunction_UFCController_SetOperationModel();
	FUSIONCROWD_API UFunction* Z_Construct_UFunction_UFCController_ShowAgentsPaths();
	FUSIONCROWD_API UFunction* Z_Construct_UFunction_UFCController_StartSimulation();
	FUSIONCROWD_API UFunction* Z_Construct_UFunction_UFCController_UpdateAgents();
// End Cross Module References
	void UFCController::StaticRegisterNativesUFCController()
	{
		UClass* Class = UFCController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAgent", &UFCController::execAddAgent },
			{ "CutPolygon", &UFCController::execCutPolygon },
			{ "DoSimulationStep", &UFCController::execDoSimulationStep },
			{ "ExportNavMeshToFile", &UFCController::execExportNavMeshToFile },
			{ "GetAgentInfo", &UFCController::execGetAgentInfo },
			{ "GetAgentsInfo", &UFCController::execGetAgentsInfo },
			{ "HideAgentsPaths", &UFCController::execHideAgentsPaths },
			{ "InitBuilder", &UFCController::execInitBuilder },
			{ "RegistrateAgent", &UFCController::execRegistrateAgent },
			{ "SetGoal", &UFCController::execSetGoal },
			{ "SetOperationModel", &UFCController::execSetOperationModel },
			{ "ShowAgentsPaths", &UFCController::execShowAgentsPaths },
			{ "StartSimulation", &UFCController::execStartSimulation },
			{ "UpdateAgents", &UFCController::execUpdateAgents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFCController_AddAgent_Statics
	{
		struct FCController_eventAddAgent_Parms
		{
			FVector pos;
			FVector goalPos;
			TEnumAsByte<EOperationComponentType> opComponent;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_opComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_goalPos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFCController_AddAgent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCController_eventAddAgent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFCController_AddAgent_Statics::NewProp_opComponent = { "opComponent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCController_eventAddAgent_Parms, opComponent), Z_Construct_UEnum_FusionCrowd_EOperationComponentType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFCController_AddAgent_Statics::NewProp_goalPos = { "goalPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCController_eventAddAgent_Parms, goalPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFCController_AddAgent_Statics::NewProp_pos = { "pos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCController_eventAddAgent_Parms, pos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFCController_AddAgent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCController_AddAgent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCController_AddAgent_Statics::NewProp_opComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCController_AddAgent_Statics::NewProp_goalPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCController_AddAgent_Statics::NewProp_pos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFCController_AddAgent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fusion Crowd" },
		{ "ModuleRelativePath", "Public/FCController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFCController_AddAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFCController, nullptr, "AddAgent", sizeof(FCController_eventAddAgent_Parms), Z_Construct_UFunction_UFCController_AddAgent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFCController_AddAgent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFCController_AddAgent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFCController_AddAgent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFCController_AddAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFCController_AddAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFCController_CutPolygon_Statics
	{
		struct FCController_eventCutPolygon_Parms
		{
			TArray<FVector> polygon;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_polygon;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_polygon_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCController_CutPolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCController_eventCutPolygon_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFCController_CutPolygon_Statics::NewProp_polygon = { "polygon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCController_eventCutPolygon_Parms, polygon), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFCController_CutPolygon_Statics::NewProp_polygon_Inner = { "polygon", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFCController_CutPolygon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCController_CutPolygon_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCController_CutPolygon_Statics::NewProp_polygon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCController_CutPolygon_Statics::NewProp_polygon_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFCController_CutPolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fusion Crowd" },
		{ "ModuleRelativePath", "Public/FCController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFCController_CutPolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFCController, nullptr, "CutPolygon", sizeof(FCController_eventCutPolygon_Parms), Z_Construct_UFunction_UFCController_CutPolygon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFCController_CutPolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFCController_CutPolygon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFCController_CutPolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFCController_CutPolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFCController_CutPolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFCController_DoSimulationStep_Statics
	{
		struct FCController_eventDoSimulationStep_Parms
		{
			float timeStep;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeStep;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCController_DoSimulationStep_Statics::NewProp_timeStep = { "timeStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCController_eventDoSimulationStep_Parms, timeStep), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFCController_DoSimulationStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCController_DoSimulationStep_Statics::NewProp_timeStep,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFCController_DoSimulationStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fusion Crowd" },
		{ "ModuleRelativePath", "Public/FCController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFCController_DoSimulationStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFCController, nullptr, "DoSimulationStep", sizeof(FCController_eventDoSimulationStep_Parms), Z_Construct_UFunction_UFCController_DoSimulationStep_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFCController_DoSimulationStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFCController_DoSimulationStep_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFCController_DoSimulationStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFCController_DoSimulationStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFCController_DoSimulationStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFCController_ExportNavMeshToFile_Statics
	{
		struct FCController_eventExportNavMeshToFile_Parms
		{
			FString file_path;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_file_path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFCController_ExportNavMeshToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FCController_eventExportNavMeshToFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFCController_ExportNavMeshToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCController_eventExportNavMeshToFile_Parms), &Z_Construct_UFunction_UFCController_ExportNavMeshToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFCController_ExportNavMeshToFile_Statics::NewProp_file_path = { "file_path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCController_eventExportNavMeshToFile_Parms, file_path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFCController_ExportNavMeshToFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCController_ExportNavMeshToFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCController_ExportNavMeshToFile_Statics::NewProp_file_path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFCController_ExportNavMeshToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fusion Crowd" },
		{ "ModuleRelativePath", "Public/FCController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFCController_ExportNavMeshToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFCController, nullptr, "ExportNavMeshToFile", sizeof(FCController_eventExportNavMeshToFile_Parms), Z_Construct_UFunction_UFCController_ExportNavMeshToFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFCController_ExportNavMeshToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFCController_ExportNavMeshToFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFCController_ExportNavMeshToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFCController_ExportNavMeshToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFCController_ExportNavMeshToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFCController_GetAgentInfo_Statics
	{
		struct FCController_eventGetAgentInfo_Parms
		{
			int32 id;
			FAgentInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFCController_GetAgentInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCController_eventGetAgentInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FAgentInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFCController_GetAgentInfo_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCController_eventGetAgentInfo_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFCController_GetAgentInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCController_GetAgentInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCController_GetAgentInfo_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFCController_GetAgentInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fusion Crowd" },
		{ "ModuleRelativePath", "Public/FCController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFCController_GetAgentInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFCController, nullptr, "GetAgentInfo", sizeof(FCController_eventGetAgentInfo_Parms), Z_Construct_UFunction_UFCController_GetAgentInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFCController_GetAgentInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFCController_GetAgentInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFCController_GetAgentInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFCController_GetAgentInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFCController_GetAgentInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFCController_GetAgentsInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFCController_GetAgentsInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FCController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFCController_GetAgentsInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFCController, nullptr, "GetAgentsInfo", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFCController_GetAgentsInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFCController_GetAgentsInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFCController_GetAgentsInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFCController_GetAgentsInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFCController_HideAgentsPaths_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFCController_HideAgentsPaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fusion Crowd" },
		{ "ModuleRelativePath", "Public/FCController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFCController_HideAgentsPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFCController, nullptr, "HideAgentsPaths", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFCController_HideAgentsPaths_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFCController_HideAgentsPaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFCController_HideAgentsPaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFCController_HideAgentsPaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFCController_InitBuilder_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFCController_InitBuilder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fusion Crowd" },
		{ "ModuleRelativePath", "Public/FCController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFCController_InitBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFCController, nullptr, "InitBuilder", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFCController_InitBuilder_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFCController_InitBuilder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFCController_InitBuilder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFCController_InitBuilder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFCController_RegistrateAgent_Statics
	{
		struct FCController_eventRegistrateAgent_Parms
		{
			UFCMovmentComponent* mc_comp;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mc_comp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mc_comp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFCController_RegistrateAgent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FCController_eventRegistrateAgent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFCController_RegistrateAgent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCController_eventRegistrateAgent_Parms), &Z_Construct_UFunction_UFCController_RegistrateAgent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFCController_RegistrateAgent_Statics::NewProp_mc_comp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFCController_RegistrateAgent_Statics::NewProp_mc_comp = { "mc_comp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCController_eventRegistrateAgent_Parms, mc_comp), Z_Construct_UClass_UFCMovmentComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFCController_RegistrateAgent_Statics::NewProp_mc_comp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFCController_RegistrateAgent_Statics::NewProp_mc_comp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFCController_RegistrateAgent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCController_RegistrateAgent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCController_RegistrateAgent_Statics::NewProp_mc_comp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFCController_RegistrateAgent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FCController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFCController_RegistrateAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFCController, nullptr, "RegistrateAgent", sizeof(FCController_eventRegistrateAgent_Parms), Z_Construct_UFunction_UFCController_RegistrateAgent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFCController_RegistrateAgent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFCController_RegistrateAgent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFCController_RegistrateAgent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFCController_RegistrateAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFCController_RegistrateAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFCController_SetGoal_Statics
	{
		struct FCController_eventSetGoal_Parms
		{
			int32 agentId;
			FVector goalPos;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_goalPos;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_agentId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFCController_SetGoal_Statics::NewProp_goalPos = { "goalPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCController_eventSetGoal_Parms, goalPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFCController_SetGoal_Statics::NewProp_agentId = { "agentId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCController_eventSetGoal_Parms, agentId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFCController_SetGoal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCController_SetGoal_Statics::NewProp_goalPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCController_SetGoal_Statics::NewProp_agentId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFCController_SetGoal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fusion Crowd" },
		{ "ModuleRelativePath", "Public/FCController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFCController_SetGoal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFCController, nullptr, "SetGoal", sizeof(FCController_eventSetGoal_Parms), Z_Construct_UFunction_UFCController_SetGoal_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFCController_SetGoal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFCController_SetGoal_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFCController_SetGoal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFCController_SetGoal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFCController_SetGoal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFCController_SetOperationModel_Statics
	{
		struct FCController_eventSetOperationModel_Parms
		{
			int32 agentId;
			TEnumAsByte<EOperationComponentType> type;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_agentId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFCController_SetOperationModel_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCController_eventSetOperationModel_Parms, type), Z_Construct_UEnum_FusionCrowd_EOperationComponentType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFCController_SetOperationModel_Statics::NewProp_agentId = { "agentId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCController_eventSetOperationModel_Parms, agentId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFCController_SetOperationModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCController_SetOperationModel_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCController_SetOperationModel_Statics::NewProp_agentId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFCController_SetOperationModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fusion Crowd" },
		{ "ModuleRelativePath", "Public/FCController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFCController_SetOperationModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFCController, nullptr, "SetOperationModel", sizeof(FCController_eventSetOperationModel_Parms), Z_Construct_UFunction_UFCController_SetOperationModel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFCController_SetOperationModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFCController_SetOperationModel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFCController_SetOperationModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFCController_SetOperationModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFCController_SetOperationModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFCController_ShowAgentsPaths_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFCController_ShowAgentsPaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fusion Crowd" },
		{ "ModuleRelativePath", "Public/FCController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFCController_ShowAgentsPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFCController, nullptr, "ShowAgentsPaths", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFCController_ShowAgentsPaths_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFCController_ShowAgentsPaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFCController_ShowAgentsPaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFCController_ShowAgentsPaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFCController_StartSimulation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFCController_StartSimulation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fusion Crowd" },
		{ "ModuleRelativePath", "Public/FCController.h" },
		{ "ToolTip", "Fusion Crowd" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFCController_StartSimulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFCController, nullptr, "StartSimulation", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFCController_StartSimulation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFCController_StartSimulation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFCController_StartSimulation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFCController_StartSimulation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFCController_UpdateAgents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFCController_UpdateAgents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FCController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFCController_UpdateAgents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFCController, nullptr, "UpdateAgents", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFCController_UpdateAgents_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFCController_UpdateAgents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFCController_UpdateAgents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFCController_UpdateAgents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFCController_NoRegister()
	{
		return UFCController::StaticClass();
	}
	struct Z_Construct_UClass_UFCController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movment_components_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_movment_components;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_movment_components_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavMeshName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NavMeshName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTickEnabled_MetaData[];
#endif
		static void NewProp_CustomTickEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CustomTickEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSimulationInProgress_MetaData[];
#endif
		static void NewProp_IsSimulationInProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSimulationInProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCuttingPolyBB_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCuttingPolyBB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsRecordingEnabled_MetaData[];
#endif
		static void NewProp_IsRecordingEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRecordingEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFCController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FusionCrowd,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFCController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFCController_AddAgent, "AddAgent" }, // 3631881270
		{ &Z_Construct_UFunction_UFCController_CutPolygon, "CutPolygon" }, // 2572689227
		{ &Z_Construct_UFunction_UFCController_DoSimulationStep, "DoSimulationStep" }, // 4103510663
		{ &Z_Construct_UFunction_UFCController_ExportNavMeshToFile, "ExportNavMeshToFile" }, // 1269732401
		{ &Z_Construct_UFunction_UFCController_GetAgentInfo, "GetAgentInfo" }, // 3716334567
		{ &Z_Construct_UFunction_UFCController_GetAgentsInfo, "GetAgentsInfo" }, // 1291368603
		{ &Z_Construct_UFunction_UFCController_HideAgentsPaths, "HideAgentsPaths" }, // 2524964826
		{ &Z_Construct_UFunction_UFCController_InitBuilder, "InitBuilder" }, // 3360996611
		{ &Z_Construct_UFunction_UFCController_RegistrateAgent, "RegistrateAgent" }, // 2980328053
		{ &Z_Construct_UFunction_UFCController_SetGoal, "SetGoal" }, // 244439671
		{ &Z_Construct_UFunction_UFCController_SetOperationModel, "SetOperationModel" }, // 1500796934
		{ &Z_Construct_UFunction_UFCController_ShowAgentsPaths, "ShowAgentsPaths" }, // 341141732
		{ &Z_Construct_UFunction_UFCController_StartSimulation, "StartSimulation" }, // 3752612048
		{ &Z_Construct_UFunction_UFCController_UpdateAgents, "UpdateAgents" }, // 1589686145
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFCController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "FCController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FCController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFCController_Statics::NewProp_movment_components_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FCController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFCController_Statics::NewProp_movment_components = { "movment_components", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFCController, movment_components), METADATA_PARAMS(Z_Construct_UClass_UFCController_Statics::NewProp_movment_components_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFCController_Statics::NewProp_movment_components_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFCController_Statics::NewProp_movment_components_Inner = { "movment_components", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFCMovmentComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFCController_Statics::NewProp_TimeScale_MetaData[] = {
		{ "Category", "Fusion Crowd" },
		{ "ModuleRelativePath", "Public/FCController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFCController_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFCController, TimeScale), METADATA_PARAMS(Z_Construct_UClass_UFCController_Statics::NewProp_TimeScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFCController_Statics::NewProp_TimeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFCController_Statics::NewProp_NavMeshName_MetaData[] = {
		{ "Category", "Fusion Crowd" },
		{ "ModuleRelativePath", "Public/FCController.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFCController_Statics::NewProp_NavMeshName = { "NavMeshName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFCController, NavMeshName), METADATA_PARAMS(Z_Construct_UClass_UFCController_Statics::NewProp_NavMeshName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFCController_Statics::NewProp_NavMeshName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFCController_Statics::NewProp_CustomTickEnabled_MetaData[] = {
		{ "Category", "Fusion Crowd" },
		{ "ModuleRelativePath", "Public/FCController.h" },
	};
#endif
	void Z_Construct_UClass_UFCController_Statics::NewProp_CustomTickEnabled_SetBit(void* Obj)
	{
		((UFCController*)Obj)->CustomTickEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFCController_Statics::NewProp_CustomTickEnabled = { "CustomTickEnabled", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFCController), &Z_Construct_UClass_UFCController_Statics::NewProp_CustomTickEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFCController_Statics::NewProp_CustomTickEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFCController_Statics::NewProp_CustomTickEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFCController_Statics::NewProp_IsSimulationInProgress_MetaData[] = {
		{ "Category", "FCController" },
		{ "ModuleRelativePath", "Public/FCController.h" },
	};
#endif
	void Z_Construct_UClass_UFCController_Statics::NewProp_IsSimulationInProgress_SetBit(void* Obj)
	{
		((UFCController*)Obj)->IsSimulationInProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFCController_Statics::NewProp_IsSimulationInProgress = { "IsSimulationInProgress", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFCController), &Z_Construct_UClass_UFCController_Statics::NewProp_IsSimulationInProgress_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFCController_Statics::NewProp_IsSimulationInProgress_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFCController_Statics::NewProp_IsSimulationInProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFCController_Statics::NewProp_MaxCuttingPolyBB_MetaData[] = {
		{ "Category", "Fusion Crowd" },
		{ "ModuleRelativePath", "Public/FCController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFCController_Statics::NewProp_MaxCuttingPolyBB = { "MaxCuttingPolyBB", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFCController, MaxCuttingPolyBB), METADATA_PARAMS(Z_Construct_UClass_UFCController_Statics::NewProp_MaxCuttingPolyBB_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFCController_Statics::NewProp_MaxCuttingPolyBB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFCController_Statics::NewProp_IsRecordingEnabled_MetaData[] = {
		{ "Category", "Fusion Crowd" },
		{ "ModuleRelativePath", "Public/FCController.h" },
	};
#endif
	void Z_Construct_UClass_UFCController_Statics::NewProp_IsRecordingEnabled_SetBit(void* Obj)
	{
		((UFCController*)Obj)->IsRecordingEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFCController_Statics::NewProp_IsRecordingEnabled = { "IsRecordingEnabled", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFCController), &Z_Construct_UClass_UFCController_Statics::NewProp_IsRecordingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFCController_Statics::NewProp_IsRecordingEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFCController_Statics::NewProp_IsRecordingEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFCController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFCController_Statics::NewProp_movment_components,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFCController_Statics::NewProp_movment_components_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFCController_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFCController_Statics::NewProp_NavMeshName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFCController_Statics::NewProp_CustomTickEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFCController_Statics::NewProp_IsSimulationInProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFCController_Statics::NewProp_MaxCuttingPolyBB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFCController_Statics::NewProp_IsRecordingEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFCController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFCController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFCController_Statics::ClassParams = {
		&UFCController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFCController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFCController_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFCController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFCController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFCController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFCController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFCController, 1713008773);
	template<> FUSIONCROWD_API UClass* StaticClass<UFCController>()
	{
		return UFCController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFCController(Z_Construct_UClass_UFCController, &UFCController::StaticClass, TEXT("/Script/FusionCrowd"), TEXT("UFCController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFCController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
