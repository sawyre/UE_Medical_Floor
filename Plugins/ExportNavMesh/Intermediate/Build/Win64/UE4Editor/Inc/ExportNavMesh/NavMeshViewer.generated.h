// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EXPORTNAVMESH_NavMeshViewer_generated_h
#error "NavMeshViewer.generated.h already included, missing '#pragma once' in NavMeshViewer.h"
#endif
#define EXPORTNAVMESH_NavMeshViewer_generated_h

#define New_UE_Almaz_Plugins_ExportNavMesh_Source_ExportNavMesh_Public_NavMeshViewer_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadMesh) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadMesh(Z_Param_path); \
		P_NATIVE_END; \
	}


#define New_UE_Almaz_Plugins_ExportNavMesh_Source_ExportNavMesh_Public_NavMeshViewer_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadMesh) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadMesh(Z_Param_path); \
		P_NATIVE_END; \
	}


#define New_UE_Almaz_Plugins_ExportNavMesh_Source_ExportNavMesh_Public_NavMeshViewer_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANavMeshViewer(); \
	friend struct Z_Construct_UClass_ANavMeshViewer_Statics; \
public: \
	DECLARE_CLASS(ANavMeshViewer, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ExportNavMesh"), NO_API) \
	DECLARE_SERIALIZER(ANavMeshViewer)


#define New_UE_Almaz_Plugins_ExportNavMesh_Source_ExportNavMesh_Public_NavMeshViewer_h_22_INCLASS \
private: \
	static void StaticRegisterNativesANavMeshViewer(); \
	friend struct Z_Construct_UClass_ANavMeshViewer_Statics; \
public: \
	DECLARE_CLASS(ANavMeshViewer, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ExportNavMesh"), NO_API) \
	DECLARE_SERIALIZER(ANavMeshViewer)


#define New_UE_Almaz_Plugins_ExportNavMesh_Source_ExportNavMesh_Public_NavMeshViewer_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANavMeshViewer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavMeshViewer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavMeshViewer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavMeshViewer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANavMeshViewer(ANavMeshViewer&&); \
	NO_API ANavMeshViewer(const ANavMeshViewer&); \
public:


#define New_UE_Almaz_Plugins_ExportNavMesh_Source_ExportNavMesh_Public_NavMeshViewer_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANavMeshViewer(ANavMeshViewer&&); \
	NO_API ANavMeshViewer(const ANavMeshViewer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavMeshViewer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavMeshViewer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANavMeshViewer)


#define New_UE_Almaz_Plugins_ExportNavMesh_Source_ExportNavMesh_Public_NavMeshViewer_h_22_PRIVATE_PROPERTY_OFFSET
#define New_UE_Almaz_Plugins_ExportNavMesh_Source_ExportNavMesh_Public_NavMeshViewer_h_19_PROLOG
#define New_UE_Almaz_Plugins_ExportNavMesh_Source_ExportNavMesh_Public_NavMeshViewer_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	New_UE_Almaz_Plugins_ExportNavMesh_Source_ExportNavMesh_Public_NavMeshViewer_h_22_PRIVATE_PROPERTY_OFFSET \
	New_UE_Almaz_Plugins_ExportNavMesh_Source_ExportNavMesh_Public_NavMeshViewer_h_22_RPC_WRAPPERS \
	New_UE_Almaz_Plugins_ExportNavMesh_Source_ExportNavMesh_Public_NavMeshViewer_h_22_INCLASS \
	New_UE_Almaz_Plugins_ExportNavMesh_Source_ExportNavMesh_Public_NavMeshViewer_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define New_UE_Almaz_Plugins_ExportNavMesh_Source_ExportNavMesh_Public_NavMeshViewer_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	New_UE_Almaz_Plugins_ExportNavMesh_Source_ExportNavMesh_Public_NavMeshViewer_h_22_PRIVATE_PROPERTY_OFFSET \
	New_UE_Almaz_Plugins_ExportNavMesh_Source_ExportNavMesh_Public_NavMeshViewer_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	New_UE_Almaz_Plugins_ExportNavMesh_Source_ExportNavMesh_Public_NavMeshViewer_h_22_INCLASS_NO_PURE_DECLS \
	New_UE_Almaz_Plugins_ExportNavMesh_Source_ExportNavMesh_Public_NavMeshViewer_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXPORTNAVMESH_API UClass* StaticClass<class ANavMeshViewer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID New_UE_Almaz_Plugins_ExportNavMesh_Source_ExportNavMesh_Public_NavMeshViewer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
