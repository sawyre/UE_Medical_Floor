// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FusionCrowd/Public/Recording.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecording() {}
// Cross Module References
	FUSIONCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FRecording();
	UPackage* Z_Construct_UPackage__Script_FusionCrowd();
	FUSIONCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FRecordingSlice();
	FUSIONCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FAgentInfo();
// End Cross Module References
class UScriptStruct* FRecording::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FUSIONCROWD_API uint32 Get_Z_Construct_UScriptStruct_FRecording_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecording, Z_Construct_UPackage__Script_FusionCrowd(), TEXT("Recording"), sizeof(FRecording), Get_Z_Construct_UScriptStruct_FRecording_Hash());
	}
	return Singleton;
}
template<> FUSIONCROWD_API UScriptStruct* StaticStruct<FRecording>()
{
	return FRecording::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRecording(FRecording::StaticStruct, TEXT("/Script/FusionCrowd"), TEXT("Recording"), false, nullptr, nullptr);
static struct FScriptStruct_FusionCrowd_StaticRegisterNativesFRecording
{
	FScriptStruct_FusionCrowd_StaticRegisterNativesFRecording()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Recording")),new UScriptStruct::TCppStructOps<FRecording>);
	}
} ScriptStruct_FusionCrowd_StaticRegisterNativesFRecording;
	struct Z_Construct_UScriptStruct_FRecording_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slices_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Slices;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Slices_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Slices_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecording_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Recording.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRecording_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecording>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecording_Statics::NewProp_Slices_MetaData[] = {
		{ "Category", "Recording" },
		{ "ModuleRelativePath", "Public/Recording.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRecording_Statics::NewProp_Slices = { "Slices", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecording, Slices), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecording_Statics::NewProp_Slices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRecording_Statics::NewProp_Slices_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecording_Statics::NewProp_Slices_Key_KeyProp = { "Slices_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecording_Statics::NewProp_Slices_ValueProp = { "Slices", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FRecordingSlice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecording_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecording_Statics::NewProp_Slices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecording_Statics::NewProp_Slices_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecording_Statics::NewProp_Slices_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecording_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FusionCrowd,
		nullptr,
		&NewStructOps,
		"Recording",
		sizeof(FRecording),
		alignof(FRecording),
		Z_Construct_UScriptStruct_FRecording_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRecording_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRecording_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRecording_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRecording()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRecording_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FusionCrowd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Recording"), sizeof(FRecording), Get_Z_Construct_UScriptStruct_FRecording_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRecording_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRecording_Hash() { return 967106033U; }
class UScriptStruct* FRecordingSlice::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FUSIONCROWD_API uint32 Get_Z_Construct_UScriptStruct_FRecordingSlice_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecordingSlice, Z_Construct_UPackage__Script_FusionCrowd(), TEXT("RecordingSlice"), sizeof(FRecordingSlice), Get_Z_Construct_UScriptStruct_FRecordingSlice_Hash());
	}
	return Singleton;
}
template<> FUSIONCROWD_API UScriptStruct* StaticStruct<FRecordingSlice>()
{
	return FRecordingSlice::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRecordingSlice(FRecordingSlice::StaticStruct, TEXT("/Script/FusionCrowd"), TEXT("RecordingSlice"), false, nullptr, nullptr);
static struct FScriptStruct_FusionCrowd_StaticRegisterNativesFRecordingSlice
{
	FScriptStruct_FusionCrowd_StaticRegisterNativesFRecordingSlice()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RecordingSlice")),new UScriptStruct::TCppStructOps<FRecordingSlice>);
	}
} ScriptStruct_FusionCrowd_StaticRegisterNativesFRecordingSlice;
	struct Z_Construct_UScriptStruct_FRecordingSlice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AgentInfos;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AgentInfos_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AgentInfos_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordingSlice_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Recording.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRecordingSlice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecordingSlice>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordingSlice_Statics::NewProp_AgentInfos_MetaData[] = {
		{ "Category", "RecordingSlice" },
		{ "ModuleRelativePath", "Public/Recording.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRecordingSlice_Statics::NewProp_AgentInfos = { "AgentInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordingSlice, AgentInfos), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordingSlice_Statics::NewProp_AgentInfos_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordingSlice_Statics::NewProp_AgentInfos_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRecordingSlice_Statics::NewProp_AgentInfos_Key_KeyProp = { "AgentInfos_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordingSlice_Statics::NewProp_AgentInfos_ValueProp = { "AgentInfos", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FAgentInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecordingSlice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordingSlice_Statics::NewProp_AgentInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordingSlice_Statics::NewProp_AgentInfos_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordingSlice_Statics::NewProp_AgentInfos_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecordingSlice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FusionCrowd,
		nullptr,
		&NewStructOps,
		"RecordingSlice",
		sizeof(FRecordingSlice),
		alignof(FRecordingSlice),
		Z_Construct_UScriptStruct_FRecordingSlice_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordingSlice_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordingSlice_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordingSlice_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRecordingSlice()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRecordingSlice_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FusionCrowd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RecordingSlice"), sizeof(FRecordingSlice), Get_Z_Construct_UScriptStruct_FRecordingSlice_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRecordingSlice_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRecordingSlice_Hash() { return 2898301528U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
