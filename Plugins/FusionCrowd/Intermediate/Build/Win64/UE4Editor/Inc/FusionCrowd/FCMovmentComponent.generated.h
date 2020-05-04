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
#ifdef FUSIONCROWD_FCMovmentComponent_generated_h
#error "FCMovmentComponent.generated.h already included, missing '#pragma once' in FCMovmentComponent.h"
#endif
#define FUSIONCROWD_FCMovmentComponent_generated_h

#define New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCMovmentComponent_h_12_DELEGATE \
struct _Script_FusionCrowd_eventRegistratedDelegate_Parms \
{ \
	UFCMovmentComponent* ID; \
}; \
static inline void FRegistratedDelegate_DelegateWrapper(const FMulticastScriptDelegate& RegistratedDelegate, UFCMovmentComponent* ID) \
{ \
	_Script_FusionCrowd_eventRegistratedDelegate_Parms Parms; \
	Parms.ID=ID; \
	RegistratedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCMovmentComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetOperationComponent) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewOperationType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOperationComponent(EOperationComponentType(Z_Param_NewOperationType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGoal) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_newGoal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGoal(Z_Param_newGoal); \
		P_NATIVE_END; \
	}


#define New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCMovmentComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetOperationComponent) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewOperationType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOperationComponent(EOperationComponentType(Z_Param_NewOperationType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGoal) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_newGoal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGoal(Z_Param_newGoal); \
		P_NATIVE_END; \
	}


#define New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCMovmentComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFCMovmentComponent(); \
	friend struct Z_Construct_UClass_UFCMovmentComponent_Statics; \
public: \
	DECLARE_CLASS(UFCMovmentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FusionCrowd"), NO_API) \
	DECLARE_SERIALIZER(UFCMovmentComponent)


#define New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCMovmentComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUFCMovmentComponent(); \
	friend struct Z_Construct_UClass_UFCMovmentComponent_Statics; \
public: \
	DECLARE_CLASS(UFCMovmentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FusionCrowd"), NO_API) \
	DECLARE_SERIALIZER(UFCMovmentComponent)


#define New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCMovmentComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFCMovmentComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFCMovmentComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFCMovmentComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFCMovmentComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFCMovmentComponent(UFCMovmentComponent&&); \
	NO_API UFCMovmentComponent(const UFCMovmentComponent&); \
public:


#define New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCMovmentComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFCMovmentComponent(UFCMovmentComponent&&); \
	NO_API UFCMovmentComponent(const UFCMovmentComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFCMovmentComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFCMovmentComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFCMovmentComponent)


#define New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCMovmentComponent_h_17_PRIVATE_PROPERTY_OFFSET
#define New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCMovmentComponent_h_14_PROLOG
#define New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCMovmentComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCMovmentComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCMovmentComponent_h_17_RPC_WRAPPERS \
	New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCMovmentComponent_h_17_INCLASS \
	New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCMovmentComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCMovmentComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCMovmentComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCMovmentComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCMovmentComponent_h_17_INCLASS_NO_PURE_DECLS \
	New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCMovmentComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUSIONCROWD_API UClass* StaticClass<class UFCMovmentComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID New_UE_Almaz_Plugins_FusionCrowd_Source_FusionCrowd_Public_FCMovmentComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
