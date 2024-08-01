// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/AgoraMediaRecorder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgoraMediaRecorder() {}
// Cross Module References
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaRecorder();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaRecorder_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaRecorderObserver_NoRegister();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EMediaRecorderContainerFormat();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EMediaRecorderStreamType();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMediaRecorderConfiguration();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AgoraPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaRecorderContainerFormat;
	static UEnum* EMediaRecorderContainerFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMediaRecorderContainerFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMediaRecorderContainerFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AgoraPlugin_EMediaRecorderContainerFormat, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EMediaRecorderContainerFormat"));
		}
		return Z_Registration_Info_UEnum_EMediaRecorderContainerFormat.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UEnum* StaticEnum<EMediaRecorderContainerFormat>()
	{
		return EMediaRecorderContainerFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_AgoraPlugin_EMediaRecorderContainerFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AgoraPlugin_EMediaRecorderContainerFormat_Statics::Enumerators[] = {
		{ "EMediaRecorderContainerFormat::FORMAT_NULL", (int64)EMediaRecorderContainerFormat::FORMAT_NULL },
		{ "EMediaRecorderContainerFormat::FORMAT_MP4", (int64)EMediaRecorderContainerFormat::FORMAT_MP4 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AgoraPlugin_EMediaRecorderContainerFormat_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FORMAT_MP4.Name", "EMediaRecorderContainerFormat::FORMAT_MP4" },
		{ "FORMAT_NULL.Name", "EMediaRecorderContainerFormat::FORMAT_NULL" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaRecorder.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AgoraPlugin_EMediaRecorderContainerFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		"EMediaRecorderContainerFormat",
		"EMediaRecorderContainerFormat",
		Z_Construct_UEnum_AgoraPlugin_EMediaRecorderContainerFormat_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EMediaRecorderContainerFormat_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EMediaRecorderContainerFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AgoraPlugin_EMediaRecorderContainerFormat_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AgoraPlugin_EMediaRecorderContainerFormat()
	{
		if (!Z_Registration_Info_UEnum_EMediaRecorderContainerFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaRecorderContainerFormat.InnerSingleton, Z_Construct_UEnum_AgoraPlugin_EMediaRecorderContainerFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMediaRecorderContainerFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaRecorderStreamType;
	static UEnum* EMediaRecorderStreamType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMediaRecorderStreamType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMediaRecorderStreamType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AgoraPlugin_EMediaRecorderStreamType, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EMediaRecorderStreamType"));
		}
		return Z_Registration_Info_UEnum_EMediaRecorderStreamType.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UEnum* StaticEnum<EMediaRecorderStreamType>()
	{
		return EMediaRecorderStreamType_StaticEnum();
	}
	struct Z_Construct_UEnum_AgoraPlugin_EMediaRecorderStreamType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AgoraPlugin_EMediaRecorderStreamType_Statics::Enumerators[] = {
		{ "EMediaRecorderStreamType::STREAM_TYPE_NULL", (int64)EMediaRecorderStreamType::STREAM_TYPE_NULL },
		{ "EMediaRecorderStreamType::STREAM_TYPE_AUDIO", (int64)EMediaRecorderStreamType::STREAM_TYPE_AUDIO },
		{ "EMediaRecorderStreamType::STREAM_TYPE_VIDEO", (int64)EMediaRecorderStreamType::STREAM_TYPE_VIDEO },
		{ "EMediaRecorderStreamType::STREAM_TYPE_BOTH", (int64)EMediaRecorderStreamType::STREAM_TYPE_BOTH },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AgoraPlugin_EMediaRecorderStreamType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaRecorder.h" },
		{ "STREAM_TYPE_AUDIO.Name", "EMediaRecorderStreamType::STREAM_TYPE_AUDIO" },
		{ "STREAM_TYPE_BOTH.Name", "EMediaRecorderStreamType::STREAM_TYPE_BOTH" },
		{ "STREAM_TYPE_NULL.Name", "EMediaRecorderStreamType::STREAM_TYPE_NULL" },
		{ "STREAM_TYPE_VIDEO.Name", "EMediaRecorderStreamType::STREAM_TYPE_VIDEO" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AgoraPlugin_EMediaRecorderStreamType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		"EMediaRecorderStreamType",
		"EMediaRecorderStreamType",
		Z_Construct_UEnum_AgoraPlugin_EMediaRecorderStreamType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EMediaRecorderStreamType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EMediaRecorderStreamType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AgoraPlugin_EMediaRecorderStreamType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AgoraPlugin_EMediaRecorderStreamType()
	{
		if (!Z_Registration_Info_UEnum_EMediaRecorderStreamType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaRecorderStreamType.InnerSingleton, Z_Construct_UEnum_AgoraPlugin_EMediaRecorderStreamType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMediaRecorderStreamType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaRecorderConfiguration;
class UScriptStruct* FMediaRecorderConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaRecorderConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaRecorderConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaRecorderConfiguration, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("MediaRecorderConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_MediaRecorderConfiguration.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FMediaRecorderConfiguration>()
{
	return FMediaRecorderConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_storagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_storagePath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_containerFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_containerFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_containerFormat;
		static const UECodeGen_Private::FBytePropertyParams NewProp_streamType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_streamType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_streamType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxDurationMs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_maxDurationMs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_recorderInfoUpdateInterval_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_recorderInfoUpdateInterval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaRecorder.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaRecorderConfiguration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_storagePath_MetaData[] = {
		{ "Category", "Agora|MediaRecorderConfiguration" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaRecorder.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_storagePath = { "storagePath", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaRecorderConfiguration, storagePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_storagePath_MetaData), Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_storagePath_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_containerFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_containerFormat_MetaData[] = {
		{ "Category", "Agora|MediaRecorderConfiguration" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaRecorder.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_containerFormat = { "containerFormat", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaRecorderConfiguration, containerFormat), Z_Construct_UEnum_AgoraPlugin_EMediaRecorderContainerFormat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_containerFormat_MetaData), Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_containerFormat_MetaData) }; // 3460148099
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_streamType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_streamType_MetaData[] = {
		{ "Category", "Agora|MediaRecorderConfiguration" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaRecorder.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_streamType = { "streamType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaRecorderConfiguration, streamType), Z_Construct_UEnum_AgoraPlugin_EMediaRecorderStreamType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_streamType_MetaData), Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_streamType_MetaData) }; // 2580459958
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_maxDurationMs_MetaData[] = {
		{ "Category", "Agora|MediaRecorderConfiguration" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaRecorder.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_maxDurationMs = { "maxDurationMs", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaRecorderConfiguration, maxDurationMs), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_maxDurationMs_MetaData), Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_maxDurationMs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_recorderInfoUpdateInterval_MetaData[] = {
		{ "Category", "Agora|MediaRecorderConfiguration" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaRecorder.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_recorderInfoUpdateInterval = { "recorderInfoUpdateInterval", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaRecorderConfiguration, recorderInfoUpdateInterval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_recorderInfoUpdateInterval_MetaData), Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_recorderInfoUpdateInterval_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_storagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_containerFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_containerFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_streamType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_streamType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_maxDurationMs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewProp_recorderInfoUpdateInterval,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"MediaRecorderConfiguration",
		Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::PropPointers),
		sizeof(FMediaRecorderConfiguration),
		alignof(FMediaRecorderConfiguration),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMediaRecorderConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_MediaRecorderConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaRecorderConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MediaRecorderConfiguration.InnerSingleton;
	}
	DEFINE_FUNCTION(UIMediaRecorder::execStopRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->StopRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaRecorder::execStartRecording)
	{
		P_GET_STRUCT_REF(FMediaRecorderConfiguration,Z_Param_Out_config);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->StartRecording(Z_Param_Out_config);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaRecorder::execSetMediaRecorderObserver)
	{
		P_GET_OBJECT(UIMediaRecorderObserver,Z_Param_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetMediaRecorderObserver(Z_Param_callback);
		P_NATIVE_END;
	}
	void UIMediaRecorder::StaticRegisterNativesUIMediaRecorder()
	{
		UClass* Class = UIMediaRecorder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMediaRecorderObserver", &UIMediaRecorder::execSetMediaRecorderObserver },
			{ "StartRecording", &UIMediaRecorder::execStartRecording },
			{ "StopRecording", &UIMediaRecorder::execStopRecording },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics
	{
		struct IMediaRecorder_eventSetMediaRecorderObserver_Parms
		{
			UIMediaRecorderObserver* callback;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_callback;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaRecorder_eventSetMediaRecorderObserver_Parms, callback), Z_Construct_UClass_UIMediaRecorderObserver_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaRecorder_eventSetMediaRecorderObserver_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics::NewProp_callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaRecorder" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaRecorder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaRecorder, nullptr, "SetMediaRecorderObserver", nullptr, nullptr, Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics::IMediaRecorder_eventSetMediaRecorderObserver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics::IMediaRecorder_eventSetMediaRecorderObserver_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics
	{
		struct IMediaRecorder_eventStartRecording_Parms
		{
			FMediaRecorderConfiguration config;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_config;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics::NewProp_config = { "config", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaRecorder_eventStartRecording_Parms, config), Z_Construct_UScriptStruct_FMediaRecorderConfiguration, METADATA_PARAMS(0, nullptr) }; // 3484816615
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaRecorder_eventStartRecording_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics::NewProp_config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaRecorder" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaRecorder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaRecorder, nullptr, "StartRecording", nullptr, nullptr, Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics::IMediaRecorder_eventStartRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics::IMediaRecorder_eventStartRecording_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaRecorder_StartRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaRecorder_StartRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaRecorder_StopRecording_Statics
	{
		struct IMediaRecorder_eventStopRecording_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaRecorder_StopRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaRecorder_eventStopRecording_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaRecorder_StopRecording_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaRecorder_StopRecording_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaRecorder_StopRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaRecorder" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaRecorder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaRecorder_StopRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaRecorder, nullptr, "StopRecording", nullptr, nullptr, Z_Construct_UFunction_UIMediaRecorder_StopRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaRecorder_StopRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaRecorder_StopRecording_Statics::IMediaRecorder_eventStopRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaRecorder_StopRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaRecorder_StopRecording_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaRecorder_StopRecording_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaRecorder_StopRecording_Statics::IMediaRecorder_eventStopRecording_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaRecorder_StopRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaRecorder_StopRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIMediaRecorder);
	UClass* Z_Construct_UClass_UIMediaRecorder_NoRegister()
	{
		return UIMediaRecorder::StaticClass();
	}
	struct Z_Construct_UClass_UIMediaRecorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIMediaRecorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaRecorder_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UIMediaRecorder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIMediaRecorder_SetMediaRecorderObserver, "SetMediaRecorderObserver" }, // 2845113682
		{ &Z_Construct_UFunction_UIMediaRecorder_StartRecording, "StartRecording" }, // 4055366340
		{ &Z_Construct_UFunction_UIMediaRecorder_StopRecording, "StopRecording" }, // 1104723555
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaRecorder_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaRecorder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "AgoraBluePrintPlugin/AgoraMediaRecorder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaRecorder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIMediaRecorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIMediaRecorder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIMediaRecorder_Statics::ClassParams = {
		&UIMediaRecorder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaRecorder_Statics::Class_MetaDataParams), Z_Construct_UClass_UIMediaRecorder_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UIMediaRecorder()
	{
		if (!Z_Registration_Info_UClass_UIMediaRecorder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIMediaRecorder.OuterSingleton, Z_Construct_UClass_UIMediaRecorder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIMediaRecorder.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UClass* StaticClass<UIMediaRecorder>()
	{
		return UIMediaRecorder::StaticClass();
	}
	UIMediaRecorder::UIMediaRecorder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIMediaRecorder);
	UIMediaRecorder::~UIMediaRecorder() {}
	struct Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_Statics::EnumInfo[] = {
		{ EMediaRecorderContainerFormat_StaticEnum, TEXT("EMediaRecorderContainerFormat"), &Z_Registration_Info_UEnum_EMediaRecorderContainerFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3460148099U) },
		{ EMediaRecorderStreamType_StaticEnum, TEXT("EMediaRecorderStreamType"), &Z_Registration_Info_UEnum_EMediaRecorderStreamType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2580459958U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_Statics::ScriptStructInfo[] = {
		{ FMediaRecorderConfiguration::StaticStruct, Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics::NewStructOps, TEXT("MediaRecorderConfiguration"), &Z_Registration_Info_UScriptStruct_MediaRecorderConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaRecorderConfiguration), 3484816615U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIMediaRecorder, UIMediaRecorder::StaticClass, TEXT("UIMediaRecorder"), &Z_Registration_Info_UClass_UIMediaRecorder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIMediaRecorder), 76259115U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_3733396837(TEXT("/Script/AgoraPlugin"),
		Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
