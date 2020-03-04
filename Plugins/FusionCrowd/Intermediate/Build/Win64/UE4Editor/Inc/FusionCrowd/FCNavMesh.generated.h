// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFCController;
struct FVector;
#ifdef FUSIONCROWD_FCNavMesh_generated_h
#error "FCNavMesh.generated.h already included, missing '#pragma once' in FCNavMesh.h"
#endif
#define FUSIONCROWD_FCNavMesh_generated_h

#define FCProject_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCNavMesh_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FObstacleCont_Statics; \
	FUSIONCROWD_API static class UScriptStruct* StaticStruct();


template<> FUSIONCROWD_API UScriptStruct* StaticStruct<struct FObstacleCont>();

#define FCProject_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCNavMesh_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FObstacleMenge_Statics; \
	FUSIONCROWD_API static class UScriptStruct* StaticStruct();


template<> FUSIONCROWD_API UScriptStruct* StaticStruct<struct FObstacleMenge>();

#define FCProject_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCNavMesh_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEdgeMenge_Statics; \
	FUSIONCROWD_API static class UScriptStruct* StaticStruct();


template<> FUSIONCROWD_API UScriptStruct* StaticStruct<struct FEdgeMenge>();

#define FCProject_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCNavMesh_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNodeGroop_Statics; \
	FUSIONCROWD_API static class UScriptStruct* StaticStruct();


template<> FUSIONCROWD_API UScriptStruct* StaticStruct<struct FNodeGroop>();

#define FCProject_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCNavMesh_h_83_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFlushLines) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FlushLines(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawEdges) \
	{ \
		P_GET_OBJECT(UFCController,Z_Param_controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawEdges(Z_Param_controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawObstacles) \
	{ \
		P_GET_OBJECT(UFCController,Z_Param_controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawObstacles(Z_Param_controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCutTest) \
	{ \
		P_GET_OBJECT(UFCController,Z_Param_controller); \
		P_GET_TARRAY(FVector,Z_Param_polygon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CutTest(Z_Param_controller,Z_Param_polygon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildRuntimeMesh) \
	{ \
		P_GET_OBJECT(UFCController,Z_Param_controller); \
		P_GET_TARRAY(int32,Z_Param_ignored); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BuildRuntimeMesh(Z_Param_controller,Z_Param_ignored); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckCPP) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckCPP(Z_Param_path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadMesh) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadMesh(Z_Param_path); \
		P_NATIVE_END; \
	}


#define FCProject_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCNavMesh_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFlushLines) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FlushLines(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawEdges) \
	{ \
		P_GET_OBJECT(UFCController,Z_Param_controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawEdges(Z_Param_controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawObstacles) \
	{ \
		P_GET_OBJECT(UFCController,Z_Param_controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawObstacles(Z_Param_controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCutTest) \
	{ \
		P_GET_OBJECT(UFCController,Z_Param_controller); \
		P_GET_TARRAY(FVector,Z_Param_polygon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CutTest(Z_Param_controller,Z_Param_polygon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildRuntimeMesh) \
	{ \
		P_GET_OBJECT(UFCController,Z_Param_controller); \
		P_GET_TARRAY(int32,Z_Param_ignored); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BuildRuntimeMesh(Z_Param_controller,Z_Param_ignored); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckCPP) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckCPP(Z_Param_path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadMesh) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadMesh(Z_Param_path); \
		P_NATIVE_END; \
	}


#define FCProject_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCNavMesh_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFCNavMesh(); \
	friend struct Z_Construct_UClass_AFCNavMesh_Statics; \
public: \
	DECLARE_CLASS(AFCNavMesh, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FusionCrowd"), NO_API) \
	DECLARE_SERIALIZER(AFCNavMesh)


#define FCProject_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCNavMesh_h_83_INCLASS \
private: \
	static void StaticRegisterNativesAFCNavMesh(); \
	friend struct Z_Construct_UClass_AFCNavMesh_Statics; \
public: \
	DECLARE_CLASS(AFCNavMesh, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FusionCrowd"), NO_API) \
	DECLARE_SERIALIZER(AFCNavMesh)


#define FCProject_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCNavMesh_h_83_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFCNavMesh(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFCNavMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFCNavMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFCNavMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFCNavMesh(AFCNavMesh&&); \
	NO_API AFCNavMesh(const AFCNavMesh&); \
public:


#define FCProject_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCNavMesh_h_83_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFCNavMesh(AFCNavMesh&&); \
	NO_API AFCNavMesh(const AFCNavMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFCNavMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFCNavMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFCNavMesh)


#define FCProject_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCNavMesh_h_83_PRIVATE_PROPERTY_OFFSET
#define FCProject_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCNavMesh_h_80_PROLOG
#define FCProject_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCNavMesh_h_83_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FCProject_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCNavMesh_h_83_PRIVATE_PROPERTY_OFFSET \
	FCProject_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCNavMesh_h_83_RPC_WRAPPERS \
	FCProject_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCNavMesh_h_83_INCLASS \
	FCProject_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCNavMesh_h_83_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FCProject_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCNavMesh_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FCProject_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCNavMesh_h_83_PRIVATE_PROPERTY_OFFSET \
	FCProject_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCNavMesh_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	FCProject_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCNavMesh_h_83_INCLASS_NO_PURE_DECLS \
	FCProject_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCNavMesh_h_83_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUSIONCROWD_API UClass* StaticClass<class AFCNavMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FCProject_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCNavMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
