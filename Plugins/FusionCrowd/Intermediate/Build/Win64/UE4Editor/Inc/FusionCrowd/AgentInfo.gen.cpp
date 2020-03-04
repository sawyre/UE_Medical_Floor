// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FusionCrowd/Public/AgentInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgentInfo() {}
// Cross Module References
	FUSIONCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FAgentInfo();
	UPackage* Z_Construct_UPackage__Script_FusionCrowd();
	FUSIONCROWD_API UEnum* Z_Construct_UEnum_FusionCrowd_EOperationComponentType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FAgentInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FUSIONCROWD_API uint32 Get_Z_Construct_UScriptStruct_FAgentInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAgentInfo, Z_Construct_UPackage__Script_FusionCrowd(), TEXT("AgentInfo"), sizeof(FAgentInfo), Get_Z_Construct_UScriptStruct_FAgentInfo_Hash());
	}
	return Singleton;
}
template<> FUSIONCROWD_API UScriptStruct* StaticStruct<FAgentInfo>()
{
	return FAgentInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAgentInfo(FAgentInfo::StaticStruct, TEXT("/Script/FusionCrowd"), TEXT("AgentInfo"), false, nullptr, nullptr);
static struct FScriptStruct_FusionCrowd_StaticRegisterNativesFAgentInfo
{
	FScriptStruct_FusionCrowd_StaticRegisterNativesFAgentInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AgentInfo")),new UScriptStruct::TCppStructOps<FAgentInfo>);
	}
} ScriptStruct_FusionCrowd_StaticRegisterNativesFAgentInfo;
	struct Z_Construct_UScriptStruct_FAgentInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_opComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_opComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_orient_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_orient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgentInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAgentInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAgentInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_opComp_MetaData[] = {
		{ "Category", "Test Struct" },
		{ "ModuleRelativePath", "Public/AgentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_opComp = { "opComp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentInfo, opComp), Z_Construct_UEnum_FusionCrowd_EOperationComponentType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_opComp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_opComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_radius_MetaData[] = {
		{ "Category", "Test Struct" },
		{ "ModuleRelativePath", "Public/AgentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentInfo, radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_radius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_vel_MetaData[] = {
		{ "Category", "Test Struct" },
		{ "ModuleRelativePath", "Public/AgentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_vel = { "vel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentInfo, vel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_vel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_vel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_orient_MetaData[] = {
		{ "Category", "Test Struct" },
		{ "ModuleRelativePath", "Public/AgentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_orient = { "orient", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentInfo, orient), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_orient_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_orient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_pos_MetaData[] = {
		{ "Category", "Test Struct" },
		{ "ModuleRelativePath", "Public/AgentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_pos = { "pos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentInfo, pos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_pos_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_pos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_id_MetaData[] = {
		{ "Category", "Test Struct" },
		{ "ModuleRelativePath", "Public/AgentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentInfo, id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_id_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAgentInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_opComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_vel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_orient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_pos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentInfo_Statics::NewProp_id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAgentInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FusionCrowd,
		nullptr,
		&NewStructOps,
		"AgentInfo",
		sizeof(FAgentInfo),
		alignof(FAgentInfo),
		Z_Construct_UScriptStruct_FAgentInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAgentInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAgentInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FusionCrowd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AgentInfo"), sizeof(FAgentInfo), Get_Z_Construct_UScriptStruct_FAgentInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAgentInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAgentInfo_Hash() { return 849804429U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
