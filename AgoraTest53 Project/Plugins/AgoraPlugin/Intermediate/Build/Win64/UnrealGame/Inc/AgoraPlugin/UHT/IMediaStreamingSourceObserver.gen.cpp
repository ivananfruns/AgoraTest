// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/IMediaStreamingSourceObserver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMediaStreamingSourceObserver() {}
// Cross Module References
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaStreamingSourceObserver();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaStreamingSourceObserver_NoRegister();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_ESTREAMING_SRC_ERR();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_ESTREAMING_SRC_STATE();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnEofOnce__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaData__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnOpenDone__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnProgress__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnSeekDone__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnStateChanged__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AgoraPlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnStateChanged__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnStateChanged_Parms
		{
			ESTREAMING_SRC_STATE state;
			ESTREAMING_SRC_ERR err_code;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_state_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_state;
		static const UECodeGen_Private::FBytePropertyParams NewProp_err_code_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_err_code;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnStateChanged__DelegateSignature_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnStateChanged__DelegateSignature_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnStateChanged_Parms, state), Z_Construct_UEnum_AgoraPlugin_ESTREAMING_SRC_STATE, METADATA_PARAMS(0, nullptr) }; // 1713613347
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnStateChanged__DelegateSignature_Statics::NewProp_err_code_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnStateChanged__DelegateSignature_Statics::NewProp_err_code = { "err_code", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnStateChanged_Parms, err_code), Z_Construct_UEnum_AgoraPlugin_ESTREAMING_SRC_ERR, METADATA_PARAMS(0, nullptr) }; // 2268698916
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnStateChanged__DelegateSignature_Statics::NewProp_state_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnStateChanged__DelegateSignature_Statics::NewProp_state,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnStateChanged__DelegateSignature_Statics::NewProp_err_code_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnStateChanged__DelegateSignature_Statics::NewProp_err_code,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IMediaStreamingSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnStateChanged__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnStateChanged__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStateChanged, ESTREAMING_SRC_STATE state, ESTREAMING_SRC_ERR err_code)
{
	struct _Script_AgoraPlugin_eventOnStateChanged_Parms
	{
		ESTREAMING_SRC_STATE state;
		ESTREAMING_SRC_ERR err_code;
	};
	_Script_AgoraPlugin_eventOnStateChanged_Parms Parms;
	Parms.state=state;
	Parms.err_code=err_code;
	OnStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnOpenDone__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnOpenDone_Parms
		{
			ESTREAMING_SRC_ERR err_code;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_err_code_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_err_code;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnOpenDone__DelegateSignature_Statics::NewProp_err_code_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnOpenDone__DelegateSignature_Statics::NewProp_err_code = { "err_code", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnOpenDone_Parms, err_code), Z_Construct_UEnum_AgoraPlugin_ESTREAMING_SRC_ERR, METADATA_PARAMS(0, nullptr) }; // 2268698916
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnOpenDone__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnOpenDone__DelegateSignature_Statics::NewProp_err_code_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnOpenDone__DelegateSignature_Statics::NewProp_err_code,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnOpenDone__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IMediaStreamingSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnOpenDone__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnOpenDone__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnOpenDone__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnOpenDone__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnOpenDone__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnOpenDone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnOpenDone__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnOpenDone__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnOpenDone__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnOpenDone__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnOpenDone_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnOpenDone__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnOpenDone__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnOpenDone_DelegateWrapper(const FMulticastScriptDelegate& OnOpenDone, ESTREAMING_SRC_ERR err_code)
{
	struct _Script_AgoraPlugin_eventOnOpenDone_Parms
	{
		ESTREAMING_SRC_ERR err_code;
	};
	_Script_AgoraPlugin_eventOnOpenDone_Parms Parms;
	Parms.err_code=err_code;
	OnOpenDone.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnSeekDone__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnSeekDone_Parms
		{
			ESTREAMING_SRC_ERR err_code;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_err_code_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_err_code;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnSeekDone__DelegateSignature_Statics::NewProp_err_code_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnSeekDone__DelegateSignature_Statics::NewProp_err_code = { "err_code", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnSeekDone_Parms, err_code), Z_Construct_UEnum_AgoraPlugin_ESTREAMING_SRC_ERR, METADATA_PARAMS(0, nullptr) }; // 2268698916
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnSeekDone__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnSeekDone__DelegateSignature_Statics::NewProp_err_code_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnSeekDone__DelegateSignature_Statics::NewProp_err_code,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnSeekDone__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IMediaStreamingSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnSeekDone__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnSeekDone__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnSeekDone__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnSeekDone__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnSeekDone__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnSeekDone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnSeekDone__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnSeekDone__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnSeekDone__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnSeekDone__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnSeekDone_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnSeekDone__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnSeekDone__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSeekDone_DelegateWrapper(const FMulticastScriptDelegate& OnSeekDone, ESTREAMING_SRC_ERR err_code)
{
	struct _Script_AgoraPlugin_eventOnSeekDone_Parms
	{
		ESTREAMING_SRC_ERR err_code;
	};
	_Script_AgoraPlugin_eventOnSeekDone_Parms Parms;
	Parms.err_code=err_code;
	OnSeekDone.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnEofOnce__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnEofOnce_Parms
		{
			int64 progress_ms;
			int64 repeat_count;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_progress_ms;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_repeat_count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnEofOnce__DelegateSignature_Statics::NewProp_progress_ms = { "progress_ms", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnEofOnce_Parms, progress_ms), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnEofOnce__DelegateSignature_Statics::NewProp_repeat_count = { "repeat_count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnEofOnce_Parms, repeat_count), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnEofOnce__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnEofOnce__DelegateSignature_Statics::NewProp_progress_ms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnEofOnce__DelegateSignature_Statics::NewProp_repeat_count,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnEofOnce__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IMediaStreamingSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnEofOnce__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnEofOnce__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnEofOnce__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnEofOnce__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnEofOnce__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnEofOnce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnEofOnce__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnEofOnce__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnEofOnce__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnEofOnce__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnEofOnce_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnEofOnce__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnEofOnce__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnEofOnce_DelegateWrapper(const FMulticastScriptDelegate& OnEofOnce, int64 progress_ms, int64 repeat_count)
{
	struct _Script_AgoraPlugin_eventOnEofOnce_Parms
	{
		int64 progress_ms;
		int64 repeat_count;
	};
	_Script_AgoraPlugin_eventOnEofOnce_Parms Parms;
	Parms.progress_ms=progress_ms;
	Parms.repeat_count=repeat_count;
	OnEofOnce.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnProgress__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnProgress_Parms
		{
			int64 position_ms;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_position_ms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnProgress__DelegateSignature_Statics::NewProp_position_ms = { "position_ms", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnProgress_Parms, position_ms), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnProgress__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnProgress__DelegateSignature_Statics::NewProp_position_ms,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnProgress__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IMediaStreamingSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnProgress__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnProgress__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnProgress__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnProgress__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnProgress__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnProgress__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnProgress__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnProgress__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnProgress__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnProgress_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnProgress__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnProgress__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnProgress_DelegateWrapper(const FMulticastScriptDelegate& OnProgress, int64 position_ms)
{
	struct _Script_AgoraPlugin_eventOnProgress_Parms
	{
		int64 position_ms;
	};
	_Script_AgoraPlugin_eventOnProgress_Parms Parms;
	Parms.position_ms=position_ms;
	OnProgress.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaData__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnMetaData_Parms
		{
			int64 data;
			int32 length;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_data;
		static const UECodeGen_Private::FIntPropertyParams NewProp_length;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaData__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaData__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnMetaData_Parms, data), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaData__DelegateSignature_Statics::NewProp_data_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaData__DelegateSignature_Statics::NewProp_data_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaData__DelegateSignature_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnMetaData_Parms, length), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaData__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaData__DelegateSignature_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaData__DelegateSignature_Statics::NewProp_length,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaData__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IMediaStreamingSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaData__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnMetaData__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaData__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaData__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaData__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnMetaData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaData__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaData__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaData__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaData__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnMetaData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaData__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaData__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMetaData_DelegateWrapper(const FMulticastScriptDelegate& OnMetaData, const int64 data, int32 length)
{
	struct _Script_AgoraPlugin_eventOnMetaData_Parms
	{
		int64 data;
		int32 length;
	};
	_Script_AgoraPlugin_eventOnMetaData_Parms Parms;
	Parms.data=data;
	Parms.length=length;
	OnMetaData.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UIMediaStreamingSourceObserver::StaticRegisterNativesUIMediaStreamingSourceObserver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIMediaStreamingSourceObserver);
	UClass* Z_Construct_UClass_UIMediaStreamingSourceObserver_NoRegister()
	{
		return UIMediaStreamingSourceObserver::StaticClass();
	}
	struct Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnOpenDone_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOpenDone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSeekDone_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSeekDone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEofOnce_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEofOnce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnProgress_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMetaData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "AgoraBluePrintPlugin/IMediaStreamingSourceObserver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IMediaStreamingSourceObserver.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnStateChanged_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IMediaStreamingSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnStateChanged = { "OnStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIMediaStreamingSourceObserver, OnStateChanged), Z_Construct_UDelegateFunction_AgoraPlugin_OnStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnStateChanged_MetaData), Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnStateChanged_MetaData) }; // 535837537
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnOpenDone_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IMediaStreamingSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnOpenDone = { "OnOpenDone", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIMediaStreamingSourceObserver, OnOpenDone), Z_Construct_UDelegateFunction_AgoraPlugin_OnOpenDone__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnOpenDone_MetaData), Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnOpenDone_MetaData) }; // 694480497
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnSeekDone_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IMediaStreamingSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnSeekDone = { "OnSeekDone", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIMediaStreamingSourceObserver, OnSeekDone), Z_Construct_UDelegateFunction_AgoraPlugin_OnSeekDone__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnSeekDone_MetaData), Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnSeekDone_MetaData) }; // 2510999065
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnEofOnce_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IMediaStreamingSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnEofOnce = { "OnEofOnce", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIMediaStreamingSourceObserver, OnEofOnce), Z_Construct_UDelegateFunction_AgoraPlugin_OnEofOnce__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnEofOnce_MetaData), Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnEofOnce_MetaData) }; // 2367856053
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnProgress_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IMediaStreamingSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnProgress = { "OnProgress", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIMediaStreamingSourceObserver, OnProgress), Z_Construct_UDelegateFunction_AgoraPlugin_OnProgress__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnProgress_MetaData), Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnProgress_MetaData) }; // 2462670094
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnMetaData_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IMediaStreamingSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnMetaData = { "OnMetaData", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIMediaStreamingSourceObserver, OnMetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaData__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnMetaData_MetaData), Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnMetaData_MetaData) }; // 2227154490
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnStateChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnOpenDone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnSeekDone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnEofOnce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::NewProp_OnMetaData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIMediaStreamingSourceObserver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::ClassParams = {
		&UIMediaStreamingSourceObserver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::Class_MetaDataParams), Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UIMediaStreamingSourceObserver()
	{
		if (!Z_Registration_Info_UClass_UIMediaStreamingSourceObserver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIMediaStreamingSourceObserver.OuterSingleton, Z_Construct_UClass_UIMediaStreamingSourceObserver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIMediaStreamingSourceObserver.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UClass* StaticClass<UIMediaStreamingSourceObserver>()
	{
		return UIMediaStreamingSourceObserver::StaticClass();
	}
	UIMediaStreamingSourceObserver::UIMediaStreamingSourceObserver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIMediaStreamingSourceObserver);
	UIMediaStreamingSourceObserver::~UIMediaStreamingSourceObserver() {}
	struct Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIMediaStreamingSourceObserver, UIMediaStreamingSourceObserver::StaticClass, TEXT("UIMediaStreamingSourceObserver"), &Z_Registration_Info_UClass_UIMediaStreamingSourceObserver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIMediaStreamingSourceObserver), 3469626258U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_456850484(TEXT("/Script/AgoraPlugin"),
		Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaStreamingSourceObserver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
