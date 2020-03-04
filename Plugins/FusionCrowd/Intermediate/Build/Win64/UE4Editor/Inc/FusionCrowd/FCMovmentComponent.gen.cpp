// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FusionCrowd/Public/FCMovmentComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCMovmentComponent() {}
// Cross Module References
	FUSIONCROWD_API UFunction* Z_Construct_UDelegateFunction_FusionCrowd_RegistratedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FusionCrowd();
	FUSIONCROWD_API UClass* Z_Construct_UClass_UFCMovmentComponent_NoRegister();
	FUSIONCROWD_API UClass* Z_Construct_UClass_UFCMovmentComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	FUSIONCROWD_API UFunction* Z_Construct_UFunction_UFCMovmentComponent_SetGoal();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FUSIONCROWD_API UFunction* Z_Construct_UFunction_UFCMovmentComponent_SetOperationComponent();
	FUSIONCROWD_API UEnum* Z_Construct_UEnum_FusionCrowd_EOperationComponentType();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FusionCrowd_RegistratedDelegate__DelegateSignature_Statics
	{
		struct _Script_FusionCrowd_eventRegistratedDelegate_Parms
		{
			UFCMovmentComponent* ID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FusionCrowd_RegistratedDelegate__DelegateSignature_Statics::NewProp_ID_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FusionCrowd_RegistratedDelegate__DelegateSignature_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FusionCrowd_eventRegistratedDelegate_Parms, ID), Z_Construct_UClass_UFCMovmentComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_FusionCrowd_RegistratedDelegate__DelegateSignature_Statics::NewProp_ID_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_FusionCrowd_RegistratedDelegate__DelegateSignature_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FusionCrowd_RegistratedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FusionCrowd_RegistratedDelegate__DelegateSignature_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FusionCrowd_RegistratedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FCMovmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FusionCrowd_RegistratedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FusionCrowd, nullptr, "RegistratedDelegate__DelegateSignature", sizeof(_Script_FusionCrowd_eventRegistratedDelegate_Parms), Z_Construct_UDelegateFunction_FusionCrowd_RegistratedDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FusionCrowd_RegistratedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FusionCrowd_RegistratedDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FusionCrowd_RegistratedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FusionCrowd_RegistratedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FusionCrowd_RegistratedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UFCMovmentComponent::StaticRegisterNativesUFCMovmentComponent()
	{
		UClass* Class = UFCMovmentComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetGoal", &UFCMovmentComponent::execSetGoal },
			{ "SetOperationComponent", &UFCMovmentComponent::execSetOperationComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFCMovmentComponent_SetGoal_Statics
	{
		struct FCMovmentComponent_eventSetGoal_Parms
		{
			FVector newGoal;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newGoal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFCMovmentComponent_SetGoal_Statics::NewProp_newGoal = { "newGoal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCMovmentComponent_eventSetGoal_Parms, newGoal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFCMovmentComponent_SetGoal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCMovmentComponent_SetGoal_Statics::NewProp_newGoal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFCMovmentComponent_SetGoal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fusion Crowd" },
		{ "ModuleRelativePath", "Public/FCMovmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFCMovmentComponent_SetGoal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFCMovmentComponent, nullptr, "SetGoal", sizeof(FCMovmentComponent_eventSetGoal_Parms), Z_Construct_UFunction_UFCMovmentComponent_SetGoal_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFCMovmentComponent_SetGoal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFCMovmentComponent_SetGoal_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFCMovmentComponent_SetGoal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFCMovmentComponent_SetGoal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFCMovmentComponent_SetGoal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFCMovmentComponent_SetOperationComponent_Statics
	{
		struct FCMovmentComponent_eventSetOperationComponent_Parms
		{
			TEnumAsByte<EOperationComponentType> NewOperationType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewOperationType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFCMovmentComponent_SetOperationComponent_Statics::NewProp_NewOperationType = { "NewOperationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCMovmentComponent_eventSetOperationComponent_Parms, NewOperationType), Z_Construct_UEnum_FusionCrowd_EOperationComponentType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFCMovmentComponent_SetOperationComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCMovmentComponent_SetOperationComponent_Statics::NewProp_NewOperationType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFCMovmentComponent_SetOperationComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fusion Crowd" },
		{ "ModuleRelativePath", "Public/FCMovmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFCMovmentComponent_SetOperationComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFCMovmentComponent, nullptr, "SetOperationComponent", sizeof(FCMovmentComponent_eventSetOperationComponent_Parms), Z_Construct_UFunction_UFCMovmentComponent_SetOperationComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFCMovmentComponent_SetOperationComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFCMovmentComponent_SetOperationComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFCMovmentComponent_SetOperationComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFCMovmentComponent_SetOperationComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFCMovmentComponent_SetOperationComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFCMovmentComponent_NoRegister()
	{
		return UFCMovmentComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFCMovmentComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFCRegistrate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFCRegistrate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Goal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OperationType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFCMovmentComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FusionCrowd,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFCMovmentComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFCMovmentComponent_SetGoal, "SetGoal" }, // 3378129529
		{ &Z_Construct_UFunction_UFCMovmentComponent_SetOperationComponent, "SetOperationComponent" }, // 1213074568
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFCMovmentComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "FCMovmentComponent.h" },
		{ "ModuleRelativePath", "Public/FCMovmentComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFCMovmentComponent_Statics::NewProp_OnFCRegistrate_MetaData[] = {
		{ "Category", "Fusion Crowd" },
		{ "ModuleRelativePath", "Public/FCMovmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFCMovmentComponent_Statics::NewProp_OnFCRegistrate = { "OnFCRegistrate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFCMovmentComponent, OnFCRegistrate), Z_Construct_UDelegateFunction_FusionCrowd_RegistratedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFCMovmentComponent_Statics::NewProp_OnFCRegistrate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFCMovmentComponent_Statics::NewProp_OnFCRegistrate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFCMovmentComponent_Statics::NewProp_Goal_MetaData[] = {
		{ "Category", "FCMovmentComponent" },
		{ "ModuleRelativePath", "Public/FCMovmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFCMovmentComponent_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFCMovmentComponent, Goal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFCMovmentComponent_Statics::NewProp_Goal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFCMovmentComponent_Statics::NewProp_Goal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFCMovmentComponent_Statics::NewProp_OperationType_MetaData[] = {
		{ "Category", "FCMovmentComponent" },
		{ "ModuleRelativePath", "Public/FCMovmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFCMovmentComponent_Statics::NewProp_OperationType = { "OperationType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFCMovmentComponent, OperationType), Z_Construct_UEnum_FusionCrowd_EOperationComponentType, METADATA_PARAMS(Z_Construct_UClass_UFCMovmentComponent_Statics::NewProp_OperationType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFCMovmentComponent_Statics::NewProp_OperationType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFCMovmentComponent_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "FCMovmentComponent" },
		{ "ModuleRelativePath", "Public/FCMovmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFCMovmentComponent_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFCMovmentComponent, Id), METADATA_PARAMS(Z_Construct_UClass_UFCMovmentComponent_Statics::NewProp_Id_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFCMovmentComponent_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFCMovmentComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFCMovmentComponent_Statics::NewProp_OnFCRegistrate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFCMovmentComponent_Statics::NewProp_Goal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFCMovmentComponent_Statics::NewProp_OperationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFCMovmentComponent_Statics::NewProp_Id,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFCMovmentComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFCMovmentComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFCMovmentComponent_Statics::ClassParams = {
		&UFCMovmentComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFCMovmentComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFCMovmentComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFCMovmentComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFCMovmentComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFCMovmentComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFCMovmentComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFCMovmentComponent, 3823983456);
	template<> FUSIONCROWD_API UClass* StaticClass<UFCMovmentComponent>()
	{
		return UFCMovmentComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFCMovmentComponent(Z_Construct_UClass_UFCMovmentComponent, &UFCMovmentComponent::StaticClass, TEXT("/Script/FusionCrowd"), TEXT("UFCMovmentComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFCMovmentComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
