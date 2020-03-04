// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FusionCrowd/Public/FCNavMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCNavMesh() {}
// Cross Module References
	FUSIONCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FObstacleCont();
	UPackage* Z_Construct_UPackage__Script_FusionCrowd();
	FUSIONCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FObstacleMenge();
	FUSIONCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FEdgeMenge();
	FUSIONCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FNodeGroop();
	FUSIONCROWD_API UClass* Z_Construct_UClass_AFCNavMesh_NoRegister();
	FUSIONCROWD_API UClass* Z_Construct_UClass_AFCNavMesh();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FUSIONCROWD_API UFunction* Z_Construct_UFunction_AFCNavMesh_BuildRuntimeMesh();
	FUSIONCROWD_API UClass* Z_Construct_UClass_UFCController_NoRegister();
	FUSIONCROWD_API UFunction* Z_Construct_UFunction_AFCNavMesh_CheckCPP();
	FUSIONCROWD_API UFunction* Z_Construct_UFunction_AFCNavMesh_CutTest();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FUSIONCROWD_API UFunction* Z_Construct_UFunction_AFCNavMesh_DrawEdges();
	FUSIONCROWD_API UFunction* Z_Construct_UFunction_AFCNavMesh_DrawObstacles();
	FUSIONCROWD_API UFunction* Z_Construct_UFunction_AFCNavMesh_FlushLines();
	FUSIONCROWD_API UFunction* Z_Construct_UFunction_AFCNavMesh_LoadMesh();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FObstacleCont::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FUSIONCROWD_API uint32 Get_Z_Construct_UScriptStruct_FObstacleCont_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FObstacleCont, Z_Construct_UPackage__Script_FusionCrowd(), TEXT("ObstacleCont"), sizeof(FObstacleCont), Get_Z_Construct_UScriptStruct_FObstacleCont_Hash());
	}
	return Singleton;
}
template<> FUSIONCROWD_API UScriptStruct* StaticStruct<FObstacleCont>()
{
	return FObstacleCont::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FObstacleCont(FObstacleCont::StaticStruct, TEXT("/Script/FusionCrowd"), TEXT("ObstacleCont"), false, nullptr, nullptr);
static struct FScriptStruct_FusionCrowd_StaticRegisterNativesFObstacleCont
{
	FScriptStruct_FusionCrowd_StaticRegisterNativesFObstacleCont()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ObstacleCont")),new UScriptStruct::TCppStructOps<FObstacleCont>);
	}
} ScriptStruct_FusionCrowd_StaticRegisterNativesFObstacleCont;
	struct Z_Construct_UScriptStruct_FObstacleCont_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObstacleCont_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FCNavMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObstacleCont_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObstacleCont>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObstacleCont_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FusionCrowd,
		nullptr,
		&NewStructOps,
		"ObstacleCont",
		sizeof(FObstacleCont),
		alignof(FObstacleCont),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObstacleCont_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FObstacleCont_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObstacleCont()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FObstacleCont_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FusionCrowd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ObstacleCont"), sizeof(FObstacleCont), Get_Z_Construct_UScriptStruct_FObstacleCont_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FObstacleCont_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FObstacleCont_Hash() { return 3669196023U; }
class UScriptStruct* FObstacleMenge::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FUSIONCROWD_API uint32 Get_Z_Construct_UScriptStruct_FObstacleMenge_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FObstacleMenge, Z_Construct_UPackage__Script_FusionCrowd(), TEXT("ObstacleMenge"), sizeof(FObstacleMenge), Get_Z_Construct_UScriptStruct_FObstacleMenge_Hash());
	}
	return Singleton;
}
template<> FUSIONCROWD_API UScriptStruct* StaticStruct<FObstacleMenge>()
{
	return FObstacleMenge::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FObstacleMenge(FObstacleMenge::StaticStruct, TEXT("/Script/FusionCrowd"), TEXT("ObstacleMenge"), false, nullptr, nullptr);
static struct FScriptStruct_FusionCrowd_StaticRegisterNativesFObstacleMenge
{
	FScriptStruct_FusionCrowd_StaticRegisterNativesFObstacleMenge()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ObstacleMenge")),new UScriptStruct::TCppStructOps<FObstacleMenge>);
	}
} ScriptStruct_FusionCrowd_StaticRegisterNativesFObstacleMenge;
	struct Z_Construct_UScriptStruct_FObstacleMenge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObstacleMenge_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FCNavMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObstacleMenge_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObstacleMenge>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObstacleMenge_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FusionCrowd,
		nullptr,
		&NewStructOps,
		"ObstacleMenge",
		sizeof(FObstacleMenge),
		alignof(FObstacleMenge),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObstacleMenge_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FObstacleMenge_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObstacleMenge()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FObstacleMenge_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FusionCrowd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ObstacleMenge"), sizeof(FObstacleMenge), Get_Z_Construct_UScriptStruct_FObstacleMenge_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FObstacleMenge_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FObstacleMenge_Hash() { return 999815729U; }
class UScriptStruct* FEdgeMenge::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FUSIONCROWD_API uint32 Get_Z_Construct_UScriptStruct_FEdgeMenge_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdgeMenge, Z_Construct_UPackage__Script_FusionCrowd(), TEXT("EdgeMenge"), sizeof(FEdgeMenge), Get_Z_Construct_UScriptStruct_FEdgeMenge_Hash());
	}
	return Singleton;
}
template<> FUSIONCROWD_API UScriptStruct* StaticStruct<FEdgeMenge>()
{
	return FEdgeMenge::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdgeMenge(FEdgeMenge::StaticStruct, TEXT("/Script/FusionCrowd"), TEXT("EdgeMenge"), false, nullptr, nullptr);
static struct FScriptStruct_FusionCrowd_StaticRegisterNativesFEdgeMenge
{
	FScriptStruct_FusionCrowd_StaticRegisterNativesFEdgeMenge()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdgeMenge")),new UScriptStruct::TCppStructOps<FEdgeMenge>);
	}
} ScriptStruct_FusionCrowd_StaticRegisterNativesFEdgeMenge;
	struct Z_Construct_UScriptStruct_FEdgeMenge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdgeMenge_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FCNavMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdgeMenge_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdgeMenge>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdgeMenge_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FusionCrowd,
		nullptr,
		&NewStructOps,
		"EdgeMenge",
		sizeof(FEdgeMenge),
		alignof(FEdgeMenge),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdgeMenge_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdgeMenge_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdgeMenge()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdgeMenge_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FusionCrowd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdgeMenge"), sizeof(FEdgeMenge), Get_Z_Construct_UScriptStruct_FEdgeMenge_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdgeMenge_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdgeMenge_Hash() { return 2947352173U; }
class UScriptStruct* FNodeGroop::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FUSIONCROWD_API uint32 Get_Z_Construct_UScriptStruct_FNodeGroop_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeGroop, Z_Construct_UPackage__Script_FusionCrowd(), TEXT("NodeGroop"), sizeof(FNodeGroop), Get_Z_Construct_UScriptStruct_FNodeGroop_Hash());
	}
	return Singleton;
}
template<> FUSIONCROWD_API UScriptStruct* StaticStruct<FNodeGroop>()
{
	return FNodeGroop::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNodeGroop(FNodeGroop::StaticStruct, TEXT("/Script/FusionCrowd"), TEXT("NodeGroop"), false, nullptr, nullptr);
static struct FScriptStruct_FusionCrowd_StaticRegisterNativesFNodeGroop
{
	FScriptStruct_FusionCrowd_StaticRegisterNativesFNodeGroop()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NodeGroop")),new UScriptStruct::TCppStructOps<FNodeGroop>);
	}
} ScriptStruct_FusionCrowd_StaticRegisterNativesFNodeGroop;
	struct Z_Construct_UScriptStruct_FNodeGroop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeGroop_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FCNavMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeGroop_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeGroop>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeGroop_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FusionCrowd,
		nullptr,
		&NewStructOps,
		"NodeGroop",
		sizeof(FNodeGroop),
		alignof(FNodeGroop),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeGroop_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeGroop_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodeGroop()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNodeGroop_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FusionCrowd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NodeGroop"), sizeof(FNodeGroop), Get_Z_Construct_UScriptStruct_FNodeGroop_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNodeGroop_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNodeGroop_Hash() { return 2124719311U; }
	void AFCNavMesh::StaticRegisterNativesAFCNavMesh()
	{
		UClass* Class = AFCNavMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildRuntimeMesh", &AFCNavMesh::execBuildRuntimeMesh },
			{ "CheckCPP", &AFCNavMesh::execCheckCPP },
			{ "CutTest", &AFCNavMesh::execCutTest },
			{ "DrawEdges", &AFCNavMesh::execDrawEdges },
			{ "DrawObstacles", &AFCNavMesh::execDrawObstacles },
			{ "FlushLines", &AFCNavMesh::execFlushLines },
			{ "LoadMesh", &AFCNavMesh::execLoadMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFCNavMesh_BuildRuntimeMesh_Statics
	{
		struct FCNavMesh_eventBuildRuntimeMesh_Parms
		{
			UFCController* controller;
			TArray<int32> ignored;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ignored;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ignored_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFCNavMesh_BuildRuntimeMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FCNavMesh_eventBuildRuntimeMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFCNavMesh_BuildRuntimeMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCNavMesh_eventBuildRuntimeMesh_Parms), &Z_Construct_UFunction_AFCNavMesh_BuildRuntimeMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFCNavMesh_BuildRuntimeMesh_Statics::NewProp_ignored = { "ignored", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCNavMesh_eventBuildRuntimeMesh_Parms, ignored), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFCNavMesh_BuildRuntimeMesh_Statics::NewProp_ignored_Inner = { "ignored", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFCNavMesh_BuildRuntimeMesh_Statics::NewProp_controller_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFCNavMesh_BuildRuntimeMesh_Statics::NewProp_controller = { "controller", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCNavMesh_eventBuildRuntimeMesh_Parms, controller), Z_Construct_UClass_UFCController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFCNavMesh_BuildRuntimeMesh_Statics::NewProp_controller_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFCNavMesh_BuildRuntimeMesh_Statics::NewProp_controller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFCNavMesh_BuildRuntimeMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFCNavMesh_BuildRuntimeMesh_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFCNavMesh_BuildRuntimeMesh_Statics::NewProp_ignored,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFCNavMesh_BuildRuntimeMesh_Statics::NewProp_ignored_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFCNavMesh_BuildRuntimeMesh_Statics::NewProp_controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFCNavMesh_BuildRuntimeMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fusion Crowd" },
		{ "ModuleRelativePath", "Public/FCNavMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFCNavMesh_BuildRuntimeMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFCNavMesh, nullptr, "BuildRuntimeMesh", sizeof(FCNavMesh_eventBuildRuntimeMesh_Parms), Z_Construct_UFunction_AFCNavMesh_BuildRuntimeMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFCNavMesh_BuildRuntimeMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFCNavMesh_BuildRuntimeMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFCNavMesh_BuildRuntimeMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFCNavMesh_BuildRuntimeMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFCNavMesh_BuildRuntimeMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFCNavMesh_CheckCPP_Statics
	{
		struct FCNavMesh_eventCheckCPP_Parms
		{
			FString path;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFCNavMesh_CheckCPP_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCNavMesh_eventCheckCPP_Parms, path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFCNavMesh_CheckCPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFCNavMesh_CheckCPP_Statics::NewProp_path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFCNavMesh_CheckCPP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fusion Crowd" },
		{ "ModuleRelativePath", "Public/FCNavMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFCNavMesh_CheckCPP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFCNavMesh, nullptr, "CheckCPP", sizeof(FCNavMesh_eventCheckCPP_Parms), Z_Construct_UFunction_AFCNavMesh_CheckCPP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFCNavMesh_CheckCPP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFCNavMesh_CheckCPP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFCNavMesh_CheckCPP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFCNavMesh_CheckCPP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFCNavMesh_CheckCPP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFCNavMesh_CutTest_Statics
	{
		struct FCNavMesh_eventCutTest_Parms
		{
			UFCController* controller;
			TArray<FVector> polygon;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_polygon;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_polygon_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFCNavMesh_CutTest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCNavMesh_eventCutTest_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFCNavMesh_CutTest_Statics::NewProp_polygon = { "polygon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCNavMesh_eventCutTest_Parms, polygon), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFCNavMesh_CutTest_Statics::NewProp_polygon_Inner = { "polygon", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFCNavMesh_CutTest_Statics::NewProp_controller_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFCNavMesh_CutTest_Statics::NewProp_controller = { "controller", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCNavMesh_eventCutTest_Parms, controller), Z_Construct_UClass_UFCController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFCNavMesh_CutTest_Statics::NewProp_controller_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFCNavMesh_CutTest_Statics::NewProp_controller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFCNavMesh_CutTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFCNavMesh_CutTest_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFCNavMesh_CutTest_Statics::NewProp_polygon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFCNavMesh_CutTest_Statics::NewProp_polygon_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFCNavMesh_CutTest_Statics::NewProp_controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFCNavMesh_CutTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fusion Crowd" },
		{ "ModuleRelativePath", "Public/FCNavMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFCNavMesh_CutTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFCNavMesh, nullptr, "CutTest", sizeof(FCNavMesh_eventCutTest_Parms), Z_Construct_UFunction_AFCNavMesh_CutTest_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFCNavMesh_CutTest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFCNavMesh_CutTest_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFCNavMesh_CutTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFCNavMesh_CutTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFCNavMesh_CutTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFCNavMesh_DrawEdges_Statics
	{
		struct FCNavMesh_eventDrawEdges_Parms
		{
			UFCController* controller;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFCNavMesh_DrawEdges_Statics::NewProp_controller_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFCNavMesh_DrawEdges_Statics::NewProp_controller = { "controller", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCNavMesh_eventDrawEdges_Parms, controller), Z_Construct_UClass_UFCController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFCNavMesh_DrawEdges_Statics::NewProp_controller_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFCNavMesh_DrawEdges_Statics::NewProp_controller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFCNavMesh_DrawEdges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFCNavMesh_DrawEdges_Statics::NewProp_controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFCNavMesh_DrawEdges_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fusion Crowd" },
		{ "ModuleRelativePath", "Public/FCNavMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFCNavMesh_DrawEdges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFCNavMesh, nullptr, "DrawEdges", sizeof(FCNavMesh_eventDrawEdges_Parms), Z_Construct_UFunction_AFCNavMesh_DrawEdges_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFCNavMesh_DrawEdges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFCNavMesh_DrawEdges_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFCNavMesh_DrawEdges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFCNavMesh_DrawEdges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFCNavMesh_DrawEdges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFCNavMesh_DrawObstacles_Statics
	{
		struct FCNavMesh_eventDrawObstacles_Parms
		{
			UFCController* controller;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFCNavMesh_DrawObstacles_Statics::NewProp_controller_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFCNavMesh_DrawObstacles_Statics::NewProp_controller = { "controller", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCNavMesh_eventDrawObstacles_Parms, controller), Z_Construct_UClass_UFCController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFCNavMesh_DrawObstacles_Statics::NewProp_controller_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFCNavMesh_DrawObstacles_Statics::NewProp_controller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFCNavMesh_DrawObstacles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFCNavMesh_DrawObstacles_Statics::NewProp_controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFCNavMesh_DrawObstacles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fusion Crowd" },
		{ "ModuleRelativePath", "Public/FCNavMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFCNavMesh_DrawObstacles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFCNavMesh, nullptr, "DrawObstacles", sizeof(FCNavMesh_eventDrawObstacles_Parms), Z_Construct_UFunction_AFCNavMesh_DrawObstacles_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFCNavMesh_DrawObstacles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFCNavMesh_DrawObstacles_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFCNavMesh_DrawObstacles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFCNavMesh_DrawObstacles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFCNavMesh_DrawObstacles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFCNavMesh_FlushLines_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFCNavMesh_FlushLines_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fusion Crowd" },
		{ "ModuleRelativePath", "Public/FCNavMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFCNavMesh_FlushLines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFCNavMesh, nullptr, "FlushLines", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFCNavMesh_FlushLines_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFCNavMesh_FlushLines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFCNavMesh_FlushLines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFCNavMesh_FlushLines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFCNavMesh_LoadMesh_Statics
	{
		struct FCNavMesh_eventLoadMesh_Parms
		{
			FString path;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFCNavMesh_LoadMesh_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCNavMesh_eventLoadMesh_Parms, path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFCNavMesh_LoadMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFCNavMesh_LoadMesh_Statics::NewProp_path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFCNavMesh_LoadMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fusion Crowd" },
		{ "ModuleRelativePath", "Public/FCNavMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFCNavMesh_LoadMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFCNavMesh, nullptr, "LoadMesh", sizeof(FCNavMesh_eventLoadMesh_Parms), Z_Construct_UFunction_AFCNavMesh_LoadMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFCNavMesh_LoadMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFCNavMesh_LoadMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFCNavMesh_LoadMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFCNavMesh_LoadMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFCNavMesh_LoadMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFCNavMesh_NoRegister()
	{
		return AFCNavMesh::StaticClass();
	}
	struct Z_Construct_UClass_AFCNavMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EdgeWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFCNavMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FusionCrowd,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFCNavMesh_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFCNavMesh_BuildRuntimeMesh, "BuildRuntimeMesh" }, // 1321689028
		{ &Z_Construct_UFunction_AFCNavMesh_CheckCPP, "CheckCPP" }, // 3274882349
		{ &Z_Construct_UFunction_AFCNavMesh_CutTest, "CutTest" }, // 4205877374
		{ &Z_Construct_UFunction_AFCNavMesh_DrawEdges, "DrawEdges" }, // 3697988419
		{ &Z_Construct_UFunction_AFCNavMesh_DrawObstacles, "DrawObstacles" }, // 3596304256
		{ &Z_Construct_UFunction_AFCNavMesh_FlushLines, "FlushLines" }, // 3470280165
		{ &Z_Construct_UFunction_AFCNavMesh_LoadMesh, "LoadMesh" }, // 4283573824
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFCNavMesh_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FCNavMesh.h" },
		{ "ModuleRelativePath", "Public/FCNavMesh.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFCNavMesh_Statics::NewProp_EdgeWidth_MetaData[] = {
		{ "Category", "Fusion Crowd" },
		{ "ModuleRelativePath", "Public/FCNavMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFCNavMesh_Statics::NewProp_EdgeWidth = { "EdgeWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFCNavMesh, EdgeWidth), METADATA_PARAMS(Z_Construct_UClass_AFCNavMesh_Statics::NewProp_EdgeWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFCNavMesh_Statics::NewProp_EdgeWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFCNavMesh_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "FCNavMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FCNavMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFCNavMesh_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFCNavMesh, mesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFCNavMesh_Statics::NewProp_mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFCNavMesh_Statics::NewProp_mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFCNavMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFCNavMesh_Statics::NewProp_EdgeWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFCNavMesh_Statics::NewProp_mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFCNavMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFCNavMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFCNavMesh_Statics::ClassParams = {
		&AFCNavMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFCNavMesh_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFCNavMesh_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFCNavMesh_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFCNavMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFCNavMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFCNavMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFCNavMesh, 2058885981);
	template<> FUSIONCROWD_API UClass* StaticClass<AFCNavMesh>()
	{
		return AFCNavMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFCNavMesh(Z_Construct_UClass_AFCNavMesh, &AFCNavMesh::StaticClass, TEXT("/Script/FusionCrowd"), TEXT("AFCNavMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFCNavMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
