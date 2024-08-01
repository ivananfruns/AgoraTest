// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/URtcEngineProxyCompatibility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgoraSpatialAudio() {}
// Cross Module References
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UAgoraRtcEngine_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UILocalSpatialAudioEngine();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UILocalSpatialAudioEngine_NoRegister();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLocalSpatialAudioConfig();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteVoicePositionInfo();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRtcConnection();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialAudioZone();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_AgoraPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LocalSpatialAudioConfig;
class UScriptStruct* FLocalSpatialAudioConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LocalSpatialAudioConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LocalSpatialAudioConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalSpatialAudioConfig, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("LocalSpatialAudioConfig"));
	}
	return Z_Registration_Info_UScriptStruct_LocalSpatialAudioConfig.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FLocalSpatialAudioConfig>()
{
	return FLocalSpatialAudioConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rtcEngine_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_rtcEngine;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalSpatialAudioConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::NewProp_rtcEngine_MetaData[] = {
		{ "Category", "Agora|LocalSpatialAudioConfig" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::NewProp_rtcEngine = { "rtcEngine", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalSpatialAudioConfig, rtcEngine), Z_Construct_UClass_UAgoraRtcEngine_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::NewProp_rtcEngine_MetaData), Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::NewProp_rtcEngine_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::NewProp_rtcEngine,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"LocalSpatialAudioConfig",
		Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::PropPointers),
		sizeof(FLocalSpatialAudioConfig),
		alignof(FLocalSpatialAudioConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLocalSpatialAudioConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_LocalSpatialAudioConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LocalSpatialAudioConfig.InnerSingleton, Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LocalSpatialAudioConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteVoicePositionInfo;
class UScriptStruct* FRemoteVoicePositionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteVoicePositionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteVoicePositionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteVoicePositionInfo, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("RemoteVoicePositionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteVoicePositionInfo.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FRemoteVoicePositionInfo>()
{
	return FRemoteVoicePositionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_forward_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_forward;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteVoicePositionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::NewProp_position_MetaData[] = {
		{ "Category", "Agora|RemoteVoicePositionInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoteVoicePositionInfo, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::NewProp_position_MetaData), Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::NewProp_position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::NewProp_forward_MetaData[] = {
		{ "Category", "Agora|RemoteVoicePositionInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::NewProp_forward = { "forward", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoteVoicePositionInfo, forward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::NewProp_forward_MetaData), Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::NewProp_forward_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::NewProp_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::NewProp_forward,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"RemoteVoicePositionInfo",
		Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::PropPointers),
		sizeof(FRemoteVoicePositionInfo),
		alignof(FRemoteVoicePositionInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteVoicePositionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteVoicePositionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteVoicePositionInfo.InnerSingleton, Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteVoicePositionInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execmuteRemoteAudioStream)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_uid);
		P_GET_UBOOL(Z_Param_mute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->muteRemoteAudioStream(Z_Param_uid,Z_Param_mute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execSetPlayerAttenuation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_playerId);
		P_GET_UBOOL(Z_Param_forceSet);
		P_GET_PROPERTY(FStrProperty,Z_Param_attenuation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetPlayerAttenuation(Z_Param_playerId,Z_Param_forceSet,Z_Param_attenuation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execSetZones)
	{
		P_GET_TARRAY(FSpatialAudioZone,Z_Param_zones);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetZones(Z_Param_zones);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execMuteAllRemoteAudioStreams)
	{
		P_GET_UBOOL(Z_Param_mute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->MuteAllRemoteAudioStreams(Z_Param_mute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execMuteLocalAudioStream)
	{
		P_GET_UBOOL(Z_Param_mute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->MuteLocalAudioStream(Z_Param_mute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execSetParameters)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetParameters(Z_Param_params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execUpdatePlayerPositionInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_playerId);
		P_GET_STRUCT_REF(FRemoteVoicePositionInfo,Z_Param_Out_positionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UpdatePlayerPositionInfo(Z_Param_playerId,Z_Param_Out_positionInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execUpdateSelfPositionEx)
	{
		P_GET_STRUCT(FVector,Z_Param_position);
		P_GET_STRUCT(FVector,Z_Param_axisForward);
		P_GET_STRUCT(FVector,Z_Param_axisRight);
		P_GET_STRUCT(FVector,Z_Param_axisUp);
		P_GET_STRUCT_REF(FRtcConnection,Z_Param_Out_connection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UpdateSelfPositionEx(Z_Param_position,Z_Param_axisForward,Z_Param_axisRight,Z_Param_axisUp,Z_Param_Out_connection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execUpdateSelfPosition)
	{
		P_GET_STRUCT(FVector,Z_Param_position);
		P_GET_STRUCT(FVector,Z_Param_axisForward);
		P_GET_STRUCT(FVector,Z_Param_axisRight);
		P_GET_STRUCT(FVector,Z_Param_axisUp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UpdateSelfPosition(Z_Param_position,Z_Param_axisForward,Z_Param_axisRight,Z_Param_axisUp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execSetDistanceUnit)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_unit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetDistanceUnit(Z_Param_unit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execSetAudioRecvRange)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_range);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetAudioRecvRange(Z_Param_range);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execSetMaxAudioRecvCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_maxCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetMaxAudioRecvCount(Z_Param_maxCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execRelease)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Release();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execSetRemoteAudioAttenuation)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_uid);
		P_GET_UBOOL(Z_Param_forceSet);
		P_GET_PROPERTY(FStrProperty,Z_Param_attenuation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetRemoteAudioAttenuation(Z_Param_uid,Z_Param_forceSet,Z_Param_attenuation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execClearRemotePositionsEx)
	{
		P_GET_STRUCT_REF(FRtcConnection,Z_Param_Out_connection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ClearRemotePositionsEx(Z_Param_Out_connection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execClearRemotePositions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ClearRemotePositions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execRemoveRemotePositionEx)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_uid);
		P_GET_STRUCT_REF(FRtcConnection,Z_Param_Out_connection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RemoveRemotePositionEx(Z_Param_uid,Z_Param_Out_connection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execRemoveRemotePosition)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_uid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RemoveRemotePosition(Z_Param_uid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execUpdateRemotePositionEx)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_uid);
		P_GET_STRUCT_REF(FRemoteVoicePositionInfo,Z_Param_Out_posInfo);
		P_GET_STRUCT_REF(FRtcConnection,Z_Param_Out_connection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UpdateRemotePositionEx(Z_Param_uid,Z_Param_Out_posInfo,Z_Param_Out_connection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execUpdateRemotePosition)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_uid);
		P_GET_STRUCT_REF(FRemoteVoicePositionInfo,Z_Param_Out_posInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UpdateRemotePosition(Z_Param_uid,Z_Param_Out_posInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UILocalSpatialAudioEngine::execInitialize)
	{
		P_GET_STRUCT_REF(FLocalSpatialAudioConfig,Z_Param_Out_config);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Initialize(Z_Param_Out_config);
		P_NATIVE_END;
	}
	void UILocalSpatialAudioEngine::StaticRegisterNativesUILocalSpatialAudioEngine()
	{
		UClass* Class = UILocalSpatialAudioEngine::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearRemotePositions", &UILocalSpatialAudioEngine::execClearRemotePositions },
			{ "ClearRemotePositionsEx", &UILocalSpatialAudioEngine::execClearRemotePositionsEx },
			{ "Initialize", &UILocalSpatialAudioEngine::execInitialize },
			{ "MuteAllRemoteAudioStreams", &UILocalSpatialAudioEngine::execMuteAllRemoteAudioStreams },
			{ "MuteLocalAudioStream", &UILocalSpatialAudioEngine::execMuteLocalAudioStream },
			{ "muteRemoteAudioStream", &UILocalSpatialAudioEngine::execmuteRemoteAudioStream },
			{ "Release", &UILocalSpatialAudioEngine::execRelease },
			{ "RemoveRemotePosition", &UILocalSpatialAudioEngine::execRemoveRemotePosition },
			{ "RemoveRemotePositionEx", &UILocalSpatialAudioEngine::execRemoveRemotePositionEx },
			{ "SetAudioRecvRange", &UILocalSpatialAudioEngine::execSetAudioRecvRange },
			{ "SetDistanceUnit", &UILocalSpatialAudioEngine::execSetDistanceUnit },
			{ "SetMaxAudioRecvCount", &UILocalSpatialAudioEngine::execSetMaxAudioRecvCount },
			{ "SetParameters", &UILocalSpatialAudioEngine::execSetParameters },
			{ "SetPlayerAttenuation", &UILocalSpatialAudioEngine::execSetPlayerAttenuation },
			{ "SetRemoteAudioAttenuation", &UILocalSpatialAudioEngine::execSetRemoteAudioAttenuation },
			{ "SetZones", &UILocalSpatialAudioEngine::execSetZones },
			{ "UpdatePlayerPositionInfo", &UILocalSpatialAudioEngine::execUpdatePlayerPositionInfo },
			{ "UpdateRemotePosition", &UILocalSpatialAudioEngine::execUpdateRemotePosition },
			{ "UpdateRemotePositionEx", &UILocalSpatialAudioEngine::execUpdateRemotePositionEx },
			{ "UpdateSelfPosition", &UILocalSpatialAudioEngine::execUpdateSelfPosition },
			{ "UpdateSelfPositionEx", &UILocalSpatialAudioEngine::execUpdateSelfPositionEx },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions_Statics
	{
		struct ILocalSpatialAudioEngine_eventClearRemotePositions_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventClearRemotePositions_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "ClearRemotePositions", nullptr, nullptr, Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions_Statics::ILocalSpatialAudioEngine_eventClearRemotePositions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions_Statics::ILocalSpatialAudioEngine_eventClearRemotePositions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics
	{
		struct ILocalSpatialAudioEngine_eventClearRemotePositionsEx_Parms
		{
			FRtcConnection connection;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_connection;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics::NewProp_connection = { "connection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventClearRemotePositionsEx_Parms, connection), Z_Construct_UScriptStruct_FRtcConnection, METADATA_PARAMS(0, nullptr) }; // 3702062126
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventClearRemotePositionsEx_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics::NewProp_connection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "ClearRemotePositionsEx", nullptr, nullptr, Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics::PropPointers), sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics::ILocalSpatialAudioEngine_eventClearRemotePositionsEx_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics::Function_MetaDataParams), Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics::ILocalSpatialAudioEngine_eventClearRemotePositionsEx_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics
	{
		struct ILocalSpatialAudioEngine_eventInitialize_Parms
		{
			FLocalSpatialAudioConfig config;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics::NewProp_config = { "config", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventInitialize_Parms, config), Z_Construct_UScriptStruct_FLocalSpatialAudioConfig, METADATA_PARAMS(0, nullptr) }; // 875329743
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventInitialize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics::NewProp_config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "Initialize", nullptr, nullptr, Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics::ILocalSpatialAudioEngine_eventInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics::ILocalSpatialAudioEngine_eventInitialize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics
	{
		struct ILocalSpatialAudioEngine_eventMuteAllRemoteAudioStreams_Parms
		{
			bool mute;
			int32 ReturnValue;
		};
		static void NewProp_mute_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_mute;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::NewProp_mute_SetBit(void* Obj)
	{
		((ILocalSpatialAudioEngine_eventMuteAllRemoteAudioStreams_Parms*)Obj)->mute = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::NewProp_mute = { "mute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ILocalSpatialAudioEngine_eventMuteAllRemoteAudioStreams_Parms), &Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::NewProp_mute_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventMuteAllRemoteAudioStreams_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::NewProp_mute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "MuteAllRemoteAudioStreams", nullptr, nullptr, Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::ILocalSpatialAudioEngine_eventMuteAllRemoteAudioStreams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::ILocalSpatialAudioEngine_eventMuteAllRemoteAudioStreams_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics
	{
		struct ILocalSpatialAudioEngine_eventMuteLocalAudioStream_Parms
		{
			bool mute;
			int32 ReturnValue;
		};
		static void NewProp_mute_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_mute;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::NewProp_mute_SetBit(void* Obj)
	{
		((ILocalSpatialAudioEngine_eventMuteLocalAudioStream_Parms*)Obj)->mute = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::NewProp_mute = { "mute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ILocalSpatialAudioEngine_eventMuteLocalAudioStream_Parms), &Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::NewProp_mute_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventMuteLocalAudioStream_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::NewProp_mute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "MuteLocalAudioStream", nullptr, nullptr, Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::PropPointers), sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::ILocalSpatialAudioEngine_eventMuteLocalAudioStream_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::Function_MetaDataParams), Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::ILocalSpatialAudioEngine_eventMuteLocalAudioStream_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics
	{
		struct ILocalSpatialAudioEngine_eventmuteRemoteAudioStream_Parms
		{
			int64 uid;
			bool mute;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_uid;
		static void NewProp_mute_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_mute;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::NewProp_uid = { "uid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventmuteRemoteAudioStream_Parms, uid), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::NewProp_mute_SetBit(void* Obj)
	{
		((ILocalSpatialAudioEngine_eventmuteRemoteAudioStream_Parms*)Obj)->mute = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::NewProp_mute = { "mute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ILocalSpatialAudioEngine_eventmuteRemoteAudioStream_Parms), &Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::NewProp_mute_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventmuteRemoteAudioStream_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::NewProp_uid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::NewProp_mute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "muteRemoteAudioStream", nullptr, nullptr, Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::PropPointers), sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::ILocalSpatialAudioEngine_eventmuteRemoteAudioStream_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::Function_MetaDataParams), Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::ILocalSpatialAudioEngine_eventmuteRemoteAudioStream_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_Release_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_Release_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "Release", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UILocalSpatialAudioEngine_Release_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_Release_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics
	{
		struct ILocalSpatialAudioEngine_eventRemoveRemotePosition_Parms
		{
			int64 uid;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_uid;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics::NewProp_uid = { "uid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventRemoveRemotePosition_Parms, uid), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventRemoveRemotePosition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics::NewProp_uid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "RemoveRemotePosition", nullptr, nullptr, Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics::ILocalSpatialAudioEngine_eventRemoveRemotePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics::ILocalSpatialAudioEngine_eventRemoveRemotePosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics
	{
		struct ILocalSpatialAudioEngine_eventRemoveRemotePositionEx_Parms
		{
			int64 uid;
			FRtcConnection connection;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_uid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_connection;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::NewProp_uid = { "uid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventRemoveRemotePositionEx_Parms, uid), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::NewProp_connection = { "connection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventRemoveRemotePositionEx_Parms, connection), Z_Construct_UScriptStruct_FRtcConnection, METADATA_PARAMS(0, nullptr) }; // 3702062126
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventRemoveRemotePositionEx_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::NewProp_uid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::NewProp_connection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "RemoveRemotePositionEx", nullptr, nullptr, Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::PropPointers), sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::ILocalSpatialAudioEngine_eventRemoveRemotePositionEx_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::Function_MetaDataParams), Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::ILocalSpatialAudioEngine_eventRemoveRemotePositionEx_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics
	{
		struct ILocalSpatialAudioEngine_eventSetAudioRecvRange_Parms
		{
			float range;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_range;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetAudioRecvRange_Parms, range), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetAudioRecvRange_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics::NewProp_range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "SetAudioRecvRange", nullptr, nullptr, Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics::ILocalSpatialAudioEngine_eventSetAudioRecvRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics::ILocalSpatialAudioEngine_eventSetAudioRecvRange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics
	{
		struct ILocalSpatialAudioEngine_eventSetDistanceUnit_Parms
		{
			float unit;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_unit;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics::NewProp_unit = { "unit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetDistanceUnit_Parms, unit), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetDistanceUnit_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics::NewProp_unit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "SetDistanceUnit", nullptr, nullptr, Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics::ILocalSpatialAudioEngine_eventSetDistanceUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics::ILocalSpatialAudioEngine_eventSetDistanceUnit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics
	{
		struct ILocalSpatialAudioEngine_eventSetMaxAudioRecvCount_Parms
		{
			int32 maxCount;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_maxCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics::NewProp_maxCount = { "maxCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetMaxAudioRecvCount_Parms, maxCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetMaxAudioRecvCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics::NewProp_maxCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "SetMaxAudioRecvCount", nullptr, nullptr, Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics::ILocalSpatialAudioEngine_eventSetMaxAudioRecvCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics::ILocalSpatialAudioEngine_eventSetMaxAudioRecvCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics
	{
		struct ILocalSpatialAudioEngine_eventSetParameters_Parms
		{
			FString params;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_params;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics::NewProp_params = { "params", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetParameters_Parms, params), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetParameters_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics::NewProp_params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "SetParameters", nullptr, nullptr, Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics::ILocalSpatialAudioEngine_eventSetParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics::ILocalSpatialAudioEngine_eventSetParameters_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics
	{
		struct ILocalSpatialAudioEngine_eventSetPlayerAttenuation_Parms
		{
			int32 playerId;
			bool forceSet;
			FString attenuation;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_playerId;
		static void NewProp_forceSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_forceSet;
		static const UECodeGen_Private::FStrPropertyParams NewProp_attenuation;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetPlayerAttenuation_Parms, playerId), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::NewProp_forceSet_SetBit(void* Obj)
	{
		((ILocalSpatialAudioEngine_eventSetPlayerAttenuation_Parms*)Obj)->forceSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::NewProp_forceSet = { "forceSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ILocalSpatialAudioEngine_eventSetPlayerAttenuation_Parms), &Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::NewProp_forceSet_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::NewProp_attenuation = { "attenuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetPlayerAttenuation_Parms, attenuation), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetPlayerAttenuation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::NewProp_playerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::NewProp_forceSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::NewProp_attenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "CPP_Default_attenuation", "0.0" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "SetPlayerAttenuation", nullptr, nullptr, Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::ILocalSpatialAudioEngine_eventSetPlayerAttenuation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::ILocalSpatialAudioEngine_eventSetPlayerAttenuation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics
	{
		struct ILocalSpatialAudioEngine_eventSetRemoteAudioAttenuation_Parms
		{
			int64 uid;
			bool forceSet;
			FString attenuation;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_uid;
		static void NewProp_forceSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_forceSet;
		static const UECodeGen_Private::FStrPropertyParams NewProp_attenuation;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::NewProp_uid = { "uid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetRemoteAudioAttenuation_Parms, uid), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::NewProp_forceSet_SetBit(void* Obj)
	{
		((ILocalSpatialAudioEngine_eventSetRemoteAudioAttenuation_Parms*)Obj)->forceSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::NewProp_forceSet = { "forceSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ILocalSpatialAudioEngine_eventSetRemoteAudioAttenuation_Parms), &Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::NewProp_forceSet_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::NewProp_attenuation = { "attenuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetRemoteAudioAttenuation_Parms, attenuation), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetRemoteAudioAttenuation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::NewProp_uid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::NewProp_forceSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::NewProp_attenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "CPP_Default_attenuation", "0.0" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "SetRemoteAudioAttenuation", nullptr, nullptr, Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::ILocalSpatialAudioEngine_eventSetRemoteAudioAttenuation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::ILocalSpatialAudioEngine_eventSetRemoteAudioAttenuation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics
	{
		struct ILocalSpatialAudioEngine_eventSetZones_Parms
		{
			TArray<FSpatialAudioZone> zones;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_zones_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_zones;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::NewProp_zones_Inner = { "zones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSpatialAudioZone, METADATA_PARAMS(0, nullptr) }; // 211703054
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::NewProp_zones = { "zones", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetZones_Parms, zones), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 211703054
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventSetZones_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::NewProp_zones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::NewProp_zones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "SetZones", nullptr, nullptr, Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::PropPointers), sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::ILocalSpatialAudioEngine_eventSetZones_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::Function_MetaDataParams), Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::ILocalSpatialAudioEngine_eventSetZones_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics
	{
		struct ILocalSpatialAudioEngine_eventUpdatePlayerPositionInfo_Parms
		{
			int32 playerId;
			FRemoteVoicePositionInfo positionInfo;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_playerId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_positionInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_positionInfo;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdatePlayerPositionInfo_Parms, playerId), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::NewProp_positionInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::NewProp_positionInfo = { "positionInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdatePlayerPositionInfo_Parms, positionInfo), Z_Construct_UScriptStruct_FRemoteVoicePositionInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::NewProp_positionInfo_MetaData), Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::NewProp_positionInfo_MetaData) }; // 3361613788
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdatePlayerPositionInfo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::NewProp_playerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::NewProp_positionInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "UpdatePlayerPositionInfo", nullptr, nullptr, Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::ILocalSpatialAudioEngine_eventUpdatePlayerPositionInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::ILocalSpatialAudioEngine_eventUpdatePlayerPositionInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics
	{
		struct ILocalSpatialAudioEngine_eventUpdateRemotePosition_Parms
		{
			int64 uid;
			FRemoteVoicePositionInfo posInfo;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_uid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_posInfo;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::NewProp_uid = { "uid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateRemotePosition_Parms, uid), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::NewProp_posInfo = { "posInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateRemotePosition_Parms, posInfo), Z_Construct_UScriptStruct_FRemoteVoicePositionInfo, METADATA_PARAMS(0, nullptr) }; // 3361613788
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateRemotePosition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::NewProp_uid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::NewProp_posInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "UpdateRemotePosition", nullptr, nullptr, Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::ILocalSpatialAudioEngine_eventUpdateRemotePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::ILocalSpatialAudioEngine_eventUpdateRemotePosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics
	{
		struct ILocalSpatialAudioEngine_eventUpdateRemotePositionEx_Parms
		{
			int64 uid;
			FRemoteVoicePositionInfo posInfo;
			FRtcConnection connection;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_uid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_posInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_connection;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::NewProp_uid = { "uid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateRemotePositionEx_Parms, uid), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::NewProp_posInfo = { "posInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateRemotePositionEx_Parms, posInfo), Z_Construct_UScriptStruct_FRemoteVoicePositionInfo, METADATA_PARAMS(0, nullptr) }; // 3361613788
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::NewProp_connection = { "connection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateRemotePositionEx_Parms, connection), Z_Construct_UScriptStruct_FRtcConnection, METADATA_PARAMS(0, nullptr) }; // 3702062126
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateRemotePositionEx_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::NewProp_uid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::NewProp_posInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::NewProp_connection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "UpdateRemotePositionEx", nullptr, nullptr, Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::PropPointers), sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::ILocalSpatialAudioEngine_eventUpdateRemotePositionEx_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::Function_MetaDataParams), Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::ILocalSpatialAudioEngine_eventUpdateRemotePositionEx_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics
	{
		struct ILocalSpatialAudioEngine_eventUpdateSelfPosition_Parms
		{
			FVector position;
			FVector axisForward;
			FVector axisRight;
			FVector axisUp;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_position;
		static const UECodeGen_Private::FStructPropertyParams NewProp_axisForward;
		static const UECodeGen_Private::FStructPropertyParams NewProp_axisRight;
		static const UECodeGen_Private::FStructPropertyParams NewProp_axisUp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateSelfPosition_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::NewProp_axisForward = { "axisForward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateSelfPosition_Parms, axisForward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::NewProp_axisRight = { "axisRight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateSelfPosition_Parms, axisRight), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::NewProp_axisUp = { "axisUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateSelfPosition_Parms, axisUp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateSelfPosition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::NewProp_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::NewProp_axisForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::NewProp_axisRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::NewProp_axisUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "UpdateSelfPosition", nullptr, nullptr, Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::ILocalSpatialAudioEngine_eventUpdateSelfPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::ILocalSpatialAudioEngine_eventUpdateSelfPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics
	{
		struct ILocalSpatialAudioEngine_eventUpdateSelfPositionEx_Parms
		{
			FVector position;
			FVector axisForward;
			FVector axisRight;
			FVector axisUp;
			FRtcConnection connection;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_position;
		static const UECodeGen_Private::FStructPropertyParams NewProp_axisForward;
		static const UECodeGen_Private::FStructPropertyParams NewProp_axisRight;
		static const UECodeGen_Private::FStructPropertyParams NewProp_axisUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_connection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_connection;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateSelfPositionEx_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_axisForward = { "axisForward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateSelfPositionEx_Parms, axisForward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_axisRight = { "axisRight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateSelfPositionEx_Parms, axisRight), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_axisUp = { "axisUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateSelfPositionEx_Parms, axisUp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_connection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_connection = { "connection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateSelfPositionEx_Parms, connection), Z_Construct_UScriptStruct_FRtcConnection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_connection_MetaData), Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_connection_MetaData) }; // 3702062126
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ILocalSpatialAudioEngine_eventUpdateSelfPositionEx_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_axisForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_axisRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_axisUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_connection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|ILocalSpatialAudioEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UILocalSpatialAudioEngine, nullptr, "UpdateSelfPositionEx", nullptr, nullptr, Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::PropPointers), sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::ILocalSpatialAudioEngine_eventUpdateSelfPositionEx_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::Function_MetaDataParams), Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::ILocalSpatialAudioEngine_eventUpdateSelfPositionEx_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UILocalSpatialAudioEngine);
	UClass* Z_Construct_UClass_UILocalSpatialAudioEngine_NoRegister()
	{
		return UILocalSpatialAudioEngine::StaticClass();
	}
	struct Z_Construct_UClass_UILocalSpatialAudioEngine_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UILocalSpatialAudioEngine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UILocalSpatialAudioEngine_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UILocalSpatialAudioEngine_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositions, "ClearRemotePositions" }, // 3562716461
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_ClearRemotePositionsEx, "ClearRemotePositionsEx" }, // 2025952988
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_Initialize, "Initialize" }, // 267121983
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteAllRemoteAudioStreams, "MuteAllRemoteAudioStreams" }, // 3912587645
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_MuteLocalAudioStream, "MuteLocalAudioStream" }, // 2215874956
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_muteRemoteAudioStream, "muteRemoteAudioStream" }, // 2894508800
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_Release, "Release" }, // 927473225
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePosition, "RemoveRemotePosition" }, // 3226490724
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_RemoveRemotePositionEx, "RemoveRemotePositionEx" }, // 324141240
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_SetAudioRecvRange, "SetAudioRecvRange" }, // 2913280552
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_SetDistanceUnit, "SetDistanceUnit" }, // 394119092
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_SetMaxAudioRecvCount, "SetMaxAudioRecvCount" }, // 1313490685
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_SetParameters, "SetParameters" }, // 1861874006
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_SetPlayerAttenuation, "SetPlayerAttenuation" }, // 1054855569
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_SetRemoteAudioAttenuation, "SetRemoteAudioAttenuation" }, // 1379819860
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_SetZones, "SetZones" }, // 1864943344
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdatePlayerPositionInfo, "UpdatePlayerPositionInfo" }, // 3040769117
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePosition, "UpdateRemotePosition" }, // 2252131746
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateRemotePositionEx, "UpdateRemotePositionEx" }, // 1625238089
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPosition, "UpdateSelfPosition" }, // 3584301862
		{ &Z_Construct_UFunction_UILocalSpatialAudioEngine_UpdateSelfPositionEx, "UpdateSelfPositionEx" }, // 246889347
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UILocalSpatialAudioEngine_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UILocalSpatialAudioEngine_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraSpatialAudio.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UILocalSpatialAudioEngine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UILocalSpatialAudioEngine>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UILocalSpatialAudioEngine_Statics::ClassParams = {
		&UILocalSpatialAudioEngine::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UILocalSpatialAudioEngine_Statics::Class_MetaDataParams), Z_Construct_UClass_UILocalSpatialAudioEngine_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UILocalSpatialAudioEngine()
	{
		if (!Z_Registration_Info_UClass_UILocalSpatialAudioEngine.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UILocalSpatialAudioEngine.OuterSingleton, Z_Construct_UClass_UILocalSpatialAudioEngine_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UILocalSpatialAudioEngine.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UClass* StaticClass<UILocalSpatialAudioEngine>()
	{
		return UILocalSpatialAudioEngine::StaticClass();
	}
	UILocalSpatialAudioEngine::UILocalSpatialAudioEngine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UILocalSpatialAudioEngine);
	UILocalSpatialAudioEngine::~UILocalSpatialAudioEngine() {}
	struct Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_Statics::ScriptStructInfo[] = {
		{ FLocalSpatialAudioConfig::StaticStruct, Z_Construct_UScriptStruct_FLocalSpatialAudioConfig_Statics::NewStructOps, TEXT("LocalSpatialAudioConfig"), &Z_Registration_Info_UScriptStruct_LocalSpatialAudioConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocalSpatialAudioConfig), 875329743U) },
		{ FRemoteVoicePositionInfo::StaticStruct, Z_Construct_UScriptStruct_FRemoteVoicePositionInfo_Statics::NewStructOps, TEXT("RemoteVoicePositionInfo"), &Z_Registration_Info_UScriptStruct_RemoteVoicePositionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteVoicePositionInfo), 3361613788U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UILocalSpatialAudioEngine, UILocalSpatialAudioEngine::StaticClass, TEXT("UILocalSpatialAudioEngine"), &Z_Registration_Info_UClass_UILocalSpatialAudioEngine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UILocalSpatialAudioEngine), 3976885350U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_2513642193(TEXT("/Script/AgoraPlugin"),
		Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraSpatialAudio_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
