// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FusionCrowd/Public/OperationComponentType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperationComponentType() {}
// Cross Module References
	FUSIONCROWD_API UEnum* Z_Construct_UEnum_FusionCrowd_EOperationComponentType();
	UPackage* Z_Construct_UPackage__Script_FusionCrowd();
// End Cross Module References
	static UEnum* EOperationComponentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FusionCrowd_EOperationComponentType, Z_Construct_UPackage__Script_FusionCrowd(), TEXT("EOperationComponentType"));
		}
		return Singleton;
	}
	template<> FUSIONCROWD_API UEnum* StaticEnum<EOperationComponentType>()
	{
		return EOperationComponentType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOperationComponentType(EOperationComponentType_StaticEnum, TEXT("/Script/FusionCrowd"), TEXT("EOperationComponentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FusionCrowd_EOperationComponentType_Hash() { return 1123025026U; }
	UEnum* Z_Construct_UEnum_FusionCrowd_EOperationComponentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FusionCrowd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOperationComponentType"), 0, Get_Z_Construct_UEnum_FusionCrowd_EOperationComponentType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "OPT_Karamouzas", (int64)OPT_Karamouzas },
				{ "OPT_Helbing", (int64)OPT_Helbing },
				{ "OPT_Orca", (int64)OPT_Orca },
				{ "OPT_Zanlungo", (int64)OPT_Zanlungo },
				{ "OPT_Pedvo", (int64)OPT_Pedvo },
				{ "OPT_Switching", (int64)OPT_Switching },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/OperationComponentType.h" },
				{ "OPT_Helbing.DisplayName", "Helbing" },
				{ "OPT_Karamouzas.DisplayName", "Karamouzas" },
				{ "OPT_Orca.DisplayName", "Orca" },
				{ "OPT_Pedvo.DisplayName", "Pedvo" },
				{ "OPT_Switching.DisplayName", "Switching" },
				{ "OPT_Zanlungo.DisplayName", "Zanlungo" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FusionCrowd,
				nullptr,
				"EOperationComponentType",
				"EOperationComponentType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
