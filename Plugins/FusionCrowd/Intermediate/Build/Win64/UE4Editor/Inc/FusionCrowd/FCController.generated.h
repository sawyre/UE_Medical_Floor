// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFCMovmentComponent;
struct FVector;
struct FAgentInfo;
#ifdef FUSIONCROWD_FCController_generated_h
#error "FCController.generated.h already included, missing '#pragma once' in FCController.h"
#endif
#define FUSIONCROWD_FCController_generated_h

#define New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCController_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeleteExtinct) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeleteExtinct(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExportNavMeshToFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_file_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ExportNavMeshToFile(Z_Param_file_path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideAgentsPaths) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HideAgentsPaths(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowAgentsPaths) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowAgentsPaths(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoSimulationStep) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_timeStep); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoSimulationStep(Z_Param_timeStep); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegistrateAgent) \
	{ \
		P_GET_OBJECT(UFCMovmentComponent,Z_Param_mc_comp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RegistrateAgent(Z_Param_mc_comp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateAgents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateAgents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAgentsInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAgentsInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitBuilder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitBuilder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartSimulation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartSimulation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCutPolygon) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_polygon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CutPolygon(Z_Param_polygon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOperationModel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_agentId); \
		P_GET_PROPERTY(UByteProperty,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOperationModel(Z_Param_agentId,EOperationComponentType(Z_Param_type)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAgent) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_pos); \
		P_GET_STRUCT(FVector,Z_Param_goalPos); \
		P_GET_PROPERTY(UByteProperty,Z_Param_opComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->AddAgent(Z_Param_pos,Z_Param_goalPos,EOperationComponentType(Z_Param_opComponent)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGoal) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_agentId); \
		P_GET_STRUCT(FVector,Z_Param_goalPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGoal(Z_Param_agentId,Z_Param_goalPos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAgentInfo) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAgentInfo*)Z_Param__Result=P_THIS->GetAgentInfo(Z_Param_id); \
		P_NATIVE_END; \
	}


#define New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCController_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeleteExtinct) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeleteExtinct(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExportNavMeshToFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_file_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ExportNavMeshToFile(Z_Param_file_path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideAgentsPaths) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HideAgentsPaths(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowAgentsPaths) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowAgentsPaths(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoSimulationStep) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_timeStep); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoSimulationStep(Z_Param_timeStep); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegistrateAgent) \
	{ \
		P_GET_OBJECT(UFCMovmentComponent,Z_Param_mc_comp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RegistrateAgent(Z_Param_mc_comp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateAgents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateAgents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAgentsInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAgentsInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitBuilder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitBuilder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartSimulation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartSimulation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCutPolygon) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_polygon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CutPolygon(Z_Param_polygon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOperationModel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_agentId); \
		P_GET_PROPERTY(UByteProperty,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOperationModel(Z_Param_agentId,EOperationComponentType(Z_Param_type)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAgent) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_pos); \
		P_GET_STRUCT(FVector,Z_Param_goalPos); \
		P_GET_PROPERTY(UByteProperty,Z_Param_opComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->AddAgent(Z_Param_pos,Z_Param_goalPos,EOperationComponentType(Z_Param_opComponent)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGoal) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_agentId); \
		P_GET_STRUCT(FVector,Z_Param_goalPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGoal(Z_Param_agentId,Z_Param_goalPos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAgentInfo) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAgentInfo*)Z_Param__Result=P_THIS->GetAgentInfo(Z_Param_id); \
		P_NATIVE_END; \
	}


#define New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCController_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFCController(); \
	friend struct Z_Construct_UClass_UFCController_Statics; \
public: \
	DECLARE_CLASS(UFCController, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FusionCrowd"), NO_API) \
	DECLARE_SERIALIZER(UFCController)


#define New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCController_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUFCController(); \
	friend struct Z_Construct_UClass_UFCController_Statics; \
public: \
	DECLARE_CLASS(UFCController, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FusionCrowd"), NO_API) \
	DECLARE_SERIALIZER(UFCController)


#define New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCController_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFCController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFCController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFCController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFCController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFCController(UFCController&&); \
	NO_API UFCController(const UFCController&); \
public:


#define New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCController_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFCController(UFCController&&); \
	NO_API UFCController(const UFCController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFCController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFCController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFCController)


#define New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCController_h_32_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IsRecordingEnabled() { return STRUCT_OFFSET(UFCController, IsRecordingEnabled); } \
	FORCEINLINE static uint32 __PPO__MaxCuttingPolyBB() { return STRUCT_OFFSET(UFCController, MaxCuttingPolyBB); }


#define New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCController_h_29_PROLOG
#define New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCController_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCController_h_32_PRIVATE_PROPERTY_OFFSET \
	New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCController_h_32_RPC_WRAPPERS \
	New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCController_h_32_INCLASS \
	New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCController_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCController_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCController_h_32_PRIVATE_PROPERTY_OFFSET \
	New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCController_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCController_h_32_INCLASS_NO_PURE_DECLS \
	New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCController_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUSIONCROWD_API UClass* StaticClass<class UFCController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
