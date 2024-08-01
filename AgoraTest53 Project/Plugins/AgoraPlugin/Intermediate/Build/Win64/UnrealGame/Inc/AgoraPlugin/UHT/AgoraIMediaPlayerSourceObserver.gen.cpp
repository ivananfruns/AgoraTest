// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgoraIMediaPlayerSourceObserver() {}
// Cross Module References
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaPlayerCustomDataProvider();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaPlayerCustomDataProvider_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaPlayerSourceObserver();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaPlayerSourceObserver_NoRegister();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_ERROR();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_STATE();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCacheStatistics();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerUpdatedInfo();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSrcInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AgoraPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EENUMCUSTOM_MEDIA_PLAYER_ERROR;
	static UEnum* EENUMCUSTOM_MEDIA_PLAYER_ERROR_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EENUMCUSTOM_MEDIA_PLAYER_ERROR.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EENUMCUSTOM_MEDIA_PLAYER_ERROR.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_ERROR, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EENUMCUSTOM_MEDIA_PLAYER_ERROR"));
		}
		return Z_Registration_Info_UEnum_EENUMCUSTOM_MEDIA_PLAYER_ERROR.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UEnum* StaticEnum<EENUMCUSTOM_MEDIA_PLAYER_ERROR>()
	{
		return EENUMCUSTOM_MEDIA_PLAYER_ERROR_StaticEnum();
	}
	struct Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_ERROR_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_ERROR_Statics::Enumerators[] = {
		{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_NONE", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_NONE },
		{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_ARGUMENTS", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_ARGUMENTS },
		{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INTERNAL", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INTERNAL },
		{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_NO_RESOURCE", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_NO_RESOURCE },
		{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_MEDIA_SOURCE", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_MEDIA_SOURCE },
		{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_UNKNOWN_STREAM_TYPE", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_UNKNOWN_STREAM_TYPE },
		{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_OBJ_NOT_INITIALIZED", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_OBJ_NOT_INITIALIZED },
		{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_CODEC_NOT_SUPPORTED", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_CODEC_NOT_SUPPORTED },
		{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_VIDEO_RENDER_FAILED", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_VIDEO_RENDER_FAILED },
		{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_STATE", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_STATE },
		{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_URL_NOT_FOUND", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_URL_NOT_FOUND },
		{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_CONNECTION_STATE", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_CONNECTION_STATE },
		{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_SRC_BUFFER_UNDERFLOW", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_SRC_BUFFER_UNDERFLOW },
		{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INTERRUPTED", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INTERRUPTED },
		{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_NOT_SUPPORTED", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_NOT_SUPPORTED },
		{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_TOKEN_EXPIRED", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_TOKEN_EXPIRED },
		{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_IP_EXPIRED", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_IP_EXPIRED },
		{ "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_UNKNOWN", (int64)EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_UNKNOWN },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_ERROR_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
		{ "PLAYER_ERROR_CODEC_NOT_SUPPORTED.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_CODEC_NOT_SUPPORTED" },
		{ "PLAYER_ERROR_INTERNAL.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INTERNAL" },
		{ "PLAYER_ERROR_INTERRUPTED.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INTERRUPTED" },
		{ "PLAYER_ERROR_INVALID_ARGUMENTS.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_ARGUMENTS" },
		{ "PLAYER_ERROR_INVALID_CONNECTION_STATE.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_CONNECTION_STATE" },
		{ "PLAYER_ERROR_INVALID_MEDIA_SOURCE.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_MEDIA_SOURCE" },
		{ "PLAYER_ERROR_INVALID_STATE.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_STATE" },
		{ "PLAYER_ERROR_IP_EXPIRED.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_IP_EXPIRED" },
		{ "PLAYER_ERROR_NO_RESOURCE.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_NO_RESOURCE" },
		{ "PLAYER_ERROR_NONE.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_NONE" },
		{ "PLAYER_ERROR_NOT_SUPPORTED.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_NOT_SUPPORTED" },
		{ "PLAYER_ERROR_OBJ_NOT_INITIALIZED.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_OBJ_NOT_INITIALIZED" },
		{ "PLAYER_ERROR_SRC_BUFFER_UNDERFLOW.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_SRC_BUFFER_UNDERFLOW" },
		{ "PLAYER_ERROR_TOKEN_EXPIRED.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_TOKEN_EXPIRED" },
		{ "PLAYER_ERROR_UNKNOWN.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_UNKNOWN" },
		{ "PLAYER_ERROR_UNKNOWN_STREAM_TYPE.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_UNKNOWN_STREAM_TYPE" },
		{ "PLAYER_ERROR_URL_NOT_FOUND.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_URL_NOT_FOUND" },
		{ "PLAYER_ERROR_VIDEO_RENDER_FAILED.Name", "EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_VIDEO_RENDER_FAILED" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_ERROR_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		"EENUMCUSTOM_MEDIA_PLAYER_ERROR",
		"EENUMCUSTOM_MEDIA_PLAYER_ERROR",
		Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_ERROR_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_ERROR_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_ERROR_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_ERROR_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_ERROR()
	{
		if (!Z_Registration_Info_UEnum_EENUMCUSTOM_MEDIA_PLAYER_ERROR.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EENUMCUSTOM_MEDIA_PLAYER_ERROR.InnerSingleton, Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_ERROR_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EENUMCUSTOM_MEDIA_PLAYER_ERROR.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ENUMWRAP_MEDIA_PLAYER_ERROR;
class UScriptStruct* FENUMWRAP_MEDIA_PLAYER_ERROR::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ENUMWRAP_MEDIA_PLAYER_ERROR.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ENUMWRAP_MEDIA_PLAYER_ERROR.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("ENUMWRAP_MEDIA_PLAYER_ERROR"));
	}
	return Z_Registration_Info_UScriptStruct_ENUMWRAP_MEDIA_PLAYER_ERROR.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FENUMWRAP_MEDIA_PLAYER_ERROR>()
{
	return FENUMWRAP_MEDIA_PLAYER_ERROR::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ValueWrapper_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueWrapper_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ValueWrapper;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FENUMWRAP_MEDIA_PLAYER_ERROR>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::NewProp_ValueWrapper_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::NewProp_ValueWrapper_MetaData[] = {
		{ "Category", "Agora|EENUMCUSTOM_MEDIA_PLAYER_ERROR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// require to call [GetRawValue] method to get the raw value\n" },
#endif
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "require to call [GetRawValue] method to get the raw value" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::NewProp_ValueWrapper = { "ValueWrapper", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FENUMWRAP_MEDIA_PLAYER_ERROR, ValueWrapper), Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_ERROR, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::NewProp_ValueWrapper_MetaData), Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::NewProp_ValueWrapper_MetaData) }; // 4191108703
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::NewProp_ValueWrapper_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::NewProp_ValueWrapper,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"ENUMWRAP_MEDIA_PLAYER_ERROR",
		Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::PropPointers),
		sizeof(FENUMWRAP_MEDIA_PLAYER_ERROR),
		alignof(FENUMWRAP_MEDIA_PLAYER_ERROR),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR()
	{
		if (!Z_Registration_Info_UScriptStruct_ENUMWRAP_MEDIA_PLAYER_ERROR.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ENUMWRAP_MEDIA_PLAYER_ERROR.InnerSingleton, Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ENUMWRAP_MEDIA_PLAYER_ERROR.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMEDIA_PLAYER_EVENT;
	static UEnum* EMEDIA_PLAYER_EVENT_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMEDIA_PLAYER_EVENT.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMEDIA_PLAYER_EVENT.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EMEDIA_PLAYER_EVENT"));
		}
		return Z_Registration_Info_UEnum_EMEDIA_PLAYER_EVENT.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UEnum* StaticEnum<EMEDIA_PLAYER_EVENT>()
	{
		return EMEDIA_PLAYER_EVENT_StaticEnum();
	}
	struct Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT_Statics::Enumerators[] = {
		{ "PLAYER_EVENT_SEEK_BEGIN", (int64)PLAYER_EVENT_SEEK_BEGIN },
		{ "PLAYER_EVENT_SEEK_COMPLETE", (int64)PLAYER_EVENT_SEEK_COMPLETE },
		{ "PLAYER_EVENT_SEEK_ERROR", (int64)PLAYER_EVENT_SEEK_ERROR },
		{ "PLAYER_EVENT_AUDIO_TRACK_CHANGED", (int64)PLAYER_EVENT_AUDIO_TRACK_CHANGED },
		{ "PLAYER_EVENT_BUFFER_LOW", (int64)PLAYER_EVENT_BUFFER_LOW },
		{ "PLAYER_EVENT_BUFFER_RECOVER", (int64)PLAYER_EVENT_BUFFER_RECOVER },
		{ "PLAYER_EVENT_FREEZE_START", (int64)PLAYER_EVENT_FREEZE_START },
		{ "PLAYER_EVENT_FREEZE_STOP", (int64)PLAYER_EVENT_FREEZE_STOP },
		{ "PLAYER_EVENT_SWITCH_BEGIN", (int64)PLAYER_EVENT_SWITCH_BEGIN },
		{ "PLAYER_EVENT_SWITCH_COMPLETE", (int64)PLAYER_EVENT_SWITCH_COMPLETE },
		{ "PLAYER_EVENT_SWITCH_ERROR", (int64)PLAYER_EVENT_SWITCH_ERROR },
		{ "PLAYER_EVENT_FIRST_DISPLAYED", (int64)PLAYER_EVENT_FIRST_DISPLAYED },
		{ "PLAYER_EVENT_REACH_CACHE_FILE_MAX_COUNT", (int64)PLAYER_EVENT_REACH_CACHE_FILE_MAX_COUNT },
		{ "PLAYER_EVENT_REACH_CACHE_FILE_MAX_SIZE", (int64)PLAYER_EVENT_REACH_CACHE_FILE_MAX_SIZE },
		{ "PLAYER_EVENT_TRY_OPEN_START", (int64)PLAYER_EVENT_TRY_OPEN_START },
		{ "PLAYER_EVENT_TRY_OPEN_SUCCEED", (int64)PLAYER_EVENT_TRY_OPEN_SUCCEED },
		{ "PLAYER_EVENT_TRY_OPEN_FAILED", (int64)PLAYER_EVENT_TRY_OPEN_FAILED },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
		{ "PLAYER_EVENT_AUDIO_TRACK_CHANGED.Name", "PLAYER_EVENT_AUDIO_TRACK_CHANGED" },
		{ "PLAYER_EVENT_BUFFER_LOW.Name", "PLAYER_EVENT_BUFFER_LOW" },
		{ "PLAYER_EVENT_BUFFER_RECOVER.Name", "PLAYER_EVENT_BUFFER_RECOVER" },
		{ "PLAYER_EVENT_FIRST_DISPLAYED.Name", "PLAYER_EVENT_FIRST_DISPLAYED" },
		{ "PLAYER_EVENT_FREEZE_START.Name", "PLAYER_EVENT_FREEZE_START" },
		{ "PLAYER_EVENT_FREEZE_STOP.Name", "PLAYER_EVENT_FREEZE_STOP" },
		{ "PLAYER_EVENT_REACH_CACHE_FILE_MAX_COUNT.Name", "PLAYER_EVENT_REACH_CACHE_FILE_MAX_COUNT" },
		{ "PLAYER_EVENT_REACH_CACHE_FILE_MAX_SIZE.Name", "PLAYER_EVENT_REACH_CACHE_FILE_MAX_SIZE" },
		{ "PLAYER_EVENT_SEEK_BEGIN.Name", "PLAYER_EVENT_SEEK_BEGIN" },
		{ "PLAYER_EVENT_SEEK_COMPLETE.Name", "PLAYER_EVENT_SEEK_COMPLETE" },
		{ "PLAYER_EVENT_SEEK_ERROR.Name", "PLAYER_EVENT_SEEK_ERROR" },
		{ "PLAYER_EVENT_SWITCH_BEGIN.Name", "PLAYER_EVENT_SWITCH_BEGIN" },
		{ "PLAYER_EVENT_SWITCH_COMPLETE.Name", "PLAYER_EVENT_SWITCH_COMPLETE" },
		{ "PLAYER_EVENT_SWITCH_ERROR.Name", "PLAYER_EVENT_SWITCH_ERROR" },
		{ "PLAYER_EVENT_TRY_OPEN_FAILED.Name", "PLAYER_EVENT_TRY_OPEN_FAILED" },
		{ "PLAYER_EVENT_TRY_OPEN_START.Name", "PLAYER_EVENT_TRY_OPEN_START" },
		{ "PLAYER_EVENT_TRY_OPEN_SUCCEED.Name", "PLAYER_EVENT_TRY_OPEN_SUCCEED" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		"EMEDIA_PLAYER_EVENT",
		"EMEDIA_PLAYER_EVENT",
		Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT()
	{
		if (!Z_Registration_Info_UEnum_EMEDIA_PLAYER_EVENT.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMEDIA_PLAYER_EVENT.InnerSingleton, Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMEDIA_PLAYER_EVENT.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPLAYER_PRELOAD_EVENT;
	static UEnum* EPLAYER_PRELOAD_EVENT_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPLAYER_PRELOAD_EVENT.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPLAYER_PRELOAD_EVENT.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EPLAYER_PRELOAD_EVENT"));
		}
		return Z_Registration_Info_UEnum_EPLAYER_PRELOAD_EVENT.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UEnum* StaticEnum<EPLAYER_PRELOAD_EVENT>()
	{
		return EPLAYER_PRELOAD_EVENT_StaticEnum();
	}
	struct Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT_Statics::Enumerators[] = {
		{ "EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_BEGIN", (int64)EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_BEGIN },
		{ "EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_COMPLETE", (int64)EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_COMPLETE },
		{ "EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_ERROR", (int64)EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_ERROR },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
		{ "PLAYER_PRELOAD_EVENT_BEGIN.Name", "EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_BEGIN" },
		{ "PLAYER_PRELOAD_EVENT_COMPLETE.Name", "EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_COMPLETE" },
		{ "PLAYER_PRELOAD_EVENT_ERROR.Name", "EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_ERROR" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		"EPLAYER_PRELOAD_EVENT",
		"EPLAYER_PRELOAD_EVENT",
		Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT()
	{
		if (!Z_Registration_Info_UEnum_EPLAYER_PRELOAD_EVENT.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPLAYER_PRELOAD_EVENT.InnerSingleton, Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPLAYER_PRELOAD_EVENT.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SrcInfo;
class UScriptStruct* FSrcInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SrcInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SrcInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSrcInfo, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("SrcInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SrcInfo.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FSrcInfo>()
{
	return FSrcInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSrcInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bitrateInKbps_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_bitrateInKbps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSrcInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSrcInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSrcInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSrcInfo_Statics::NewProp_bitrateInKbps_MetaData[] = {
		{ "Category", "Agora|SrcInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSrcInfo_Statics::NewProp_bitrateInKbps = { "bitrateInKbps", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSrcInfo, bitrateInKbps), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSrcInfo_Statics::NewProp_bitrateInKbps_MetaData), Z_Construct_UScriptStruct_FSrcInfo_Statics::NewProp_bitrateInKbps_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSrcInfo_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Agora|SrcInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSrcInfo_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSrcInfo, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSrcInfo_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FSrcInfo_Statics::NewProp_name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSrcInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSrcInfo_Statics::NewProp_bitrateInKbps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSrcInfo_Statics::NewProp_name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSrcInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"SrcInfo",
		Z_Construct_UScriptStruct_FSrcInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSrcInfo_Statics::PropPointers),
		sizeof(FSrcInfo),
		alignof(FSrcInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSrcInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSrcInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSrcInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSrcInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SrcInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SrcInfo.InnerSingleton, Z_Construct_UScriptStruct_FSrcInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SrcInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CacheStatistics;
class UScriptStruct* FCacheStatistics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CacheStatistics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CacheStatistics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCacheStatistics, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("CacheStatistics"));
	}
	return Z_Registration_Info_UScriptStruct_CacheStatistics.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FCacheStatistics>()
{
	return FCacheStatistics::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCacheStatistics_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fileSize_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_fileSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cacheSize_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_cacheSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_downloadSize_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_downloadSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheStatistics_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCacheStatistics>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_fileSize_MetaData[] = {
		{ "Category", "Agora|CacheStatistics" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_fileSize = { "fileSize", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCacheStatistics, fileSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_fileSize_MetaData), Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_fileSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_cacheSize_MetaData[] = {
		{ "Category", "Agora|CacheStatistics" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_cacheSize = { "cacheSize", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCacheStatistics, cacheSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_cacheSize_MetaData), Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_cacheSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_downloadSize_MetaData[] = {
		{ "Category", "Agora|CacheStatistics" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_downloadSize = { "downloadSize", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCacheStatistics, downloadSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_downloadSize_MetaData), Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_downloadSize_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCacheStatistics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_fileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_cacheSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_downloadSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCacheStatistics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"CacheStatistics",
		Z_Construct_UScriptStruct_FCacheStatistics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheStatistics_Statics::PropPointers),
		sizeof(FCacheStatistics),
		alignof(FCacheStatistics),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheStatistics_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCacheStatistics_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheStatistics_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCacheStatistics()
	{
		if (!Z_Registration_Info_UScriptStruct_CacheStatistics.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CacheStatistics.InnerSingleton, Z_Construct_UScriptStruct_FCacheStatistics_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CacheStatistics.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerUpdatedInfo;
class UScriptStruct* FPlayerUpdatedInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerUpdatedInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerUpdatedInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerUpdatedInfo, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("PlayerUpdatedInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerUpdatedInfo.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FPlayerUpdatedInfo>()
{
	return FPlayerUpdatedInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerId_SetValue_MetaData[];
#endif
		static void NewProp_playerId_SetValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_playerId_SetValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_playerId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deviceId_SetValue_MetaData[];
#endif
		static void NewProp_deviceId_SetValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_deviceId_SetValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deviceId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cacheStatistics_SetValue_MetaData[];
#endif
		static void NewProp_cacheStatistics_SetValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_cacheStatistics_SetValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cacheStatistics_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_cacheStatistics;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerUpdatedInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_playerId_SetValue_MetaData[] = {
		{ "Category", "Agora|PlayerUpdatedInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If the box is unchecked, the value of the corresponding variable (named without _SetValue)  will be ignored.\n" },
#endif
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the box is unchecked, the value of the corresponding variable (named without _SetValue)  will be ignored." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_playerId_SetValue_SetBit(void* Obj)
	{
		((FPlayerUpdatedInfo*)Obj)->playerId_SetValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_playerId_SetValue = { "playerId_SetValue", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlayerUpdatedInfo), &Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_playerId_SetValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_playerId_SetValue_MetaData), Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_playerId_SetValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_playerId_MetaData[] = {
		{ "Category", "Agora|PlayerUpdatedInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerUpdatedInfo, playerId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_playerId_MetaData), Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_playerId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_deviceId_SetValue_MetaData[] = {
		{ "Category", "Agora|PlayerUpdatedInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If the box is unchecked, the value of the corresponding variable (named without _SetValue)  will be ignored.\n" },
#endif
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the box is unchecked, the value of the corresponding variable (named without _SetValue)  will be ignored." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_deviceId_SetValue_SetBit(void* Obj)
	{
		((FPlayerUpdatedInfo*)Obj)->deviceId_SetValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_deviceId_SetValue = { "deviceId_SetValue", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlayerUpdatedInfo), &Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_deviceId_SetValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_deviceId_SetValue_MetaData), Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_deviceId_SetValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_deviceId_MetaData[] = {
		{ "Category", "Agora|PlayerUpdatedInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerUpdatedInfo, deviceId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_deviceId_MetaData), Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_deviceId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_cacheStatistics_SetValue_MetaData[] = {
		{ "Category", "Agora|PlayerUpdatedInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If the box is unchecked, the value of the corresponding variable (named without _SetValue)  will be ignored.\n" },
#endif
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the box is unchecked, the value of the corresponding variable (named without _SetValue)  will be ignored." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_cacheStatistics_SetValue_SetBit(void* Obj)
	{
		((FPlayerUpdatedInfo*)Obj)->cacheStatistics_SetValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_cacheStatistics_SetValue = { "cacheStatistics_SetValue", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlayerUpdatedInfo), &Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_cacheStatistics_SetValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_cacheStatistics_SetValue_MetaData), Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_cacheStatistics_SetValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_cacheStatistics_MetaData[] = {
		{ "Category", "Agora|PlayerUpdatedInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_cacheStatistics = { "cacheStatistics", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerUpdatedInfo, cacheStatistics), Z_Construct_UScriptStruct_FCacheStatistics, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_cacheStatistics_MetaData), Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_cacheStatistics_MetaData) }; // 4026758730
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_playerId_SetValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_playerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_deviceId_SetValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_deviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_cacheStatistics_SetValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_cacheStatistics,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"PlayerUpdatedInfo",
		Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::PropPointers),
		sizeof(FPlayerUpdatedInfo),
		alignof(FPlayerUpdatedInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerUpdatedInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayerUpdatedInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerUpdatedInfo.InnerSingleton, Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayerUpdatedInfo.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnPlayerSourceStateChanged_Parms
		{
			EMEDIA_PLAYER_STATE state;
			FENUMWRAP_MEDIA_PLAYER_ERROR ec;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_state_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_state;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ec;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerSourceStateChanged_Parms, state), Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_STATE, METADATA_PARAMS(0, nullptr) }; // 3305692306
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::NewProp_ec = { "ec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerSourceStateChanged_Parms, ec), Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR, METADATA_PARAMS(0, nullptr) }; // 1354023837
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::NewProp_state_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::NewProp_state,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::NewProp_ec,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPlayerSourceStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerSourceStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerSourceStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPlayerSourceStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerSourceStateChanged, EMEDIA_PLAYER_STATE state, FENUMWRAP_MEDIA_PLAYER_ERROR ec)
{
	struct _Script_AgoraPlugin_eventOnPlayerSourceStateChanged_Parms
	{
		EMEDIA_PLAYER_STATE state;
		FENUMWRAP_MEDIA_PLAYER_ERROR ec;
	};
	_Script_AgoraPlugin_eventOnPlayerSourceStateChanged_Parms Parms;
	Parms.state=state;
	Parms.ec=ec;
	OnPlayerSourceStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnPositionChanged_Parms
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
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::NewProp_position_ms = { "position_ms", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPositionChanged_Parms, position_ms), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::NewProp_position_ms,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPositionChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPositionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPositionChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPositionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPositionChanged, int64 position_ms)
{
	struct _Script_AgoraPlugin_eventOnPositionChanged_Parms
	{
		int64 position_ms;
	};
	_Script_AgoraPlugin_eventOnPositionChanged_Parms Parms;
	Parms.position_ms=position_ms;
	OnPositionChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnPlayerEvent_Parms
		{
			TEnumAsByte<EMEDIA_PLAYER_EVENT> eventCode;
			int64 elapsedTime;
			FString message;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_eventCode;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_elapsedTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_eventCode = { "eventCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerEvent_Parms, eventCode), Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT, METADATA_PARAMS(0, nullptr) }; // 2345495675
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_elapsedTime = { "elapsedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerEvent_Parms, elapsedTime), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerEvent_Parms, message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_message_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_message_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_eventCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_elapsedTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPlayerEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPlayerEvent_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerEvent, EMEDIA_PLAYER_EVENT eventCode, int64 elapsedTime, const FString& message)
{
	struct _Script_AgoraPlugin_eventOnPlayerEvent_Parms
	{
		TEnumAsByte<EMEDIA_PLAYER_EVENT> eventCode;
		int64 elapsedTime;
		FString message;
	};
	_Script_AgoraPlugin_eventOnPlayerEvent_Parms Parms;
	Parms.eventCode=eventCode;
	Parms.elapsedTime=elapsedTime;
	Parms.message=message;
	OnPlayerEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnMetaDataSource_Parms
		{
			int64 data;
			int32 length;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_data;
		static const UECodeGen_Private::FIntPropertyParams NewProp_length;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnMetaDataSource_Parms, data), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnMetaDataSource_Parms, length), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::NewProp_length,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnMetaDataSource__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnMetaDataSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnMetaDataSource_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMetaDataSource_DelegateWrapper(const FMulticastScriptDelegate& OnMetaDataSource, int64 data, int32 length)
{
	struct _Script_AgoraPlugin_eventOnMetaDataSource_Parms
	{
		int64 data;
		int32 length;
	};
	_Script_AgoraPlugin_eventOnMetaDataSource_Parms Parms;
	Parms.data=data;
	Parms.length=length;
	OnMetaDataSource.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnPlayBufferUpdated_Parms
		{
			int64 playCachedBuffer;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_playCachedBuffer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::NewProp_playCachedBuffer = { "playCachedBuffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayBufferUpdated_Parms, playCachedBuffer), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::NewProp_playCachedBuffer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPlayBufferUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayBufferUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayBufferUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPlayBufferUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnPlayBufferUpdated, int64 playCachedBuffer)
{
	struct _Script_AgoraPlugin_eventOnPlayBufferUpdated_Parms
	{
		int64 playCachedBuffer;
	};
	_Script_AgoraPlugin_eventOnPlayBufferUpdated_Parms Parms;
	Parms.playCachedBuffer=playCachedBuffer;
	OnPlayBufferUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnPreloadEvent_Parms
		{
			FString src;
			EPLAYER_PRELOAD_EVENT event;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_src_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_src;
		static const UECodeGen_Private::FBytePropertyParams NewProp_event_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_event;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_src_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPreloadEvent_Parms, src), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_src_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_src_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_event_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_event = { "event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPreloadEvent_Parms, event), Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT, METADATA_PARAMS(0, nullptr) }; // 949806035
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_src,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_event_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_event,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPreloadEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPreloadEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPreloadEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPreloadEvent_DelegateWrapper(const FMulticastScriptDelegate& OnPreloadEvent, const FString& src, EPLAYER_PRELOAD_EVENT event)
{
	struct _Script_AgoraPlugin_eventOnPreloadEvent_Parms
	{
		FString src;
		EPLAYER_PRELOAD_EVENT event;
	};
	_Script_AgoraPlugin_eventOnPreloadEvent_Parms Parms;
	Parms.src=src;
	Parms.event=event;
	OnPreloadEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnCompleted__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnCompleted)
{
	OnCompleted.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnAgoraCDNTokenWillExpire__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAgoraCDNTokenWillExpire_DelegateWrapper(const FMulticastScriptDelegate& OnAgoraCDNTokenWillExpire)
{
	OnAgoraCDNTokenWillExpire.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnPlayerSrcInfoChanged_Parms
		{
			FSrcInfo from;
			FSrcInfo to;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_from_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_from;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_to_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_to;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_from_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_from = { "from", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerSrcInfoChanged_Parms, from), Z_Construct_UScriptStruct_FSrcInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_from_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_from_MetaData) }; // 1881709792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_to_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_to = { "to", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerSrcInfoChanged_Parms, to), Z_Construct_UScriptStruct_FSrcInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_to_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_to_MetaData) }; // 1881709792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_from,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_to,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPlayerSrcInfoChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerSrcInfoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerSrcInfoChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPlayerSrcInfoChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerSrcInfoChanged, FSrcInfo const& from, FSrcInfo const& to)
{
	struct _Script_AgoraPlugin_eventOnPlayerSrcInfoChanged_Parms
	{
		FSrcInfo from;
		FSrcInfo to;
	};
	_Script_AgoraPlugin_eventOnPlayerSrcInfoChanged_Parms Parms;
	Parms.from=from;
	Parms.to=to;
	OnPlayerSrcInfoChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnPlayerInfoUpdated_Parms
		{
			FPlayerUpdatedInfo info;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_info_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_info;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::NewProp_info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::NewProp_info = { "info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerInfoUpdated_Parms, info), Z_Construct_UScriptStruct_FPlayerUpdatedInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::NewProp_info_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::NewProp_info_MetaData) }; // 2832888955
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::NewProp_info,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPlayerInfoUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerInfoUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerInfoUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPlayerInfoUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerInfoUpdated, FPlayerUpdatedInfo const& info)
{
	struct _Script_AgoraPlugin_eventOnPlayerInfoUpdated_Parms
	{
		FPlayerUpdatedInfo info;
	};
	_Script_AgoraPlugin_eventOnPlayerInfoUpdated_Parms Parms;
	Parms.info=info;
	OnPlayerInfoUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnAudioVolumeIndicationSource_Parms
		{
			int32 volume;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnAudioVolumeIndicationSource_Parms, volume), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::NewProp_volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnAudioVolumeIndicationSource__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnAudioVolumeIndicationSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnAudioVolumeIndicationSource_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAudioVolumeIndicationSource_DelegateWrapper(const FMulticastScriptDelegate& OnAudioVolumeIndicationSource, int32 volume)
{
	struct _Script_AgoraPlugin_eventOnAudioVolumeIndicationSource_Parms
	{
		int32 volume;
	};
	_Script_AgoraPlugin_eventOnAudioVolumeIndicationSource_Parms Parms;
	Parms.volume=volume;
	OnAudioVolumeIndicationSource.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnReadData_Parms
		{
			TArray<int64> buffer;
			int32 bufferSize;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_buffer_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_buffer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_bufferSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::NewProp_buffer_Inner = { "buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::NewProp_buffer = { "buffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnReadData_Parms, buffer), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::NewProp_bufferSize = { "bufferSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnReadData_Parms, bufferSize), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::NewProp_buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::NewProp_buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::NewProp_bufferSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnReadData__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnReadData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnReadData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnReadData_DelegateWrapper(const FMulticastScriptDelegate& OnReadData, const TArray<int64>& buffer, int32 bufferSize)
{
	struct _Script_AgoraPlugin_eventOnReadData_Parms
	{
		TArray<int64> buffer;
		int32 bufferSize;
	};
	_Script_AgoraPlugin_eventOnReadData_Parms Parms;
	Parms.buffer=buffer;
	Parms.bufferSize=bufferSize;
	OnReadData.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnSeek_Parms
		{
			int64 offset;
			int32 whence;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_offset;
		static const UECodeGen_Private::FIntPropertyParams NewProp_whence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnSeek_Parms, offset), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics::NewProp_whence = { "whence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnSeek_Parms, whence), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics::NewProp_offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics::NewProp_whence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnSeek__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnSeek_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnSeek_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSeek_DelegateWrapper(const FMulticastScriptDelegate& OnSeek, int64 offset, int32 whence)
{
	struct _Script_AgoraPlugin_eventOnSeek_Parms
	{
		int64 offset;
		int32 whence;
	};
	_Script_AgoraPlugin_eventOnSeek_Parms Parms;
	Parms.offset=offset;
	Parms.whence=whence;
	OnSeek.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UIMediaPlayerSourceObserver::StaticRegisterNativesUIMediaPlayerSourceObserver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIMediaPlayerSourceObserver);
	UClass* Z_Construct_UClass_UIMediaPlayerSourceObserver_NoRegister()
	{
		return UIMediaPlayerSourceObserver::StaticClass();
	}
	struct Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerSourceStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerSourceStateChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPositionChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPositionChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMetaData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayBufferUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayBufferUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPreloadEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreloadEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAgoraCDNTokenWillExpire_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAgoraCDNTokenWillExpire;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerSrcInfoChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerSrcInfoChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerInfoUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerInfoUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAudioVolumeIndication_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioVolumeIndication;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSourceStateChanged_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSourceStateChanged = { "OnPlayerSourceStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIMediaPlayerSourceObserver, OnPlayerSourceStateChanged), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSourceStateChanged_MetaData), Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSourceStateChanged_MetaData) }; // 900932792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPositionChanged_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPositionChanged = { "OnPositionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIMediaPlayerSourceObserver, OnPositionChanged), Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPositionChanged_MetaData), Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPositionChanged_MetaData) }; // 3228299861
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerEvent_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerEvent = { "OnPlayerEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIMediaPlayerSourceObserver, OnPlayerEvent), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerEvent_MetaData), Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerEvent_MetaData) }; // 2156904957
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnMetaData_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnMetaData = { "OnMetaData", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIMediaPlayerSourceObserver, OnMetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnMetaData_MetaData), Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnMetaData_MetaData) }; // 228361389
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayBufferUpdated_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayBufferUpdated = { "OnPlayBufferUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIMediaPlayerSourceObserver, OnPlayBufferUpdated), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayBufferUpdated_MetaData), Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayBufferUpdated_MetaData) }; // 1315717087
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPreloadEvent_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPreloadEvent = { "OnPreloadEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIMediaPlayerSourceObserver, OnPreloadEvent), Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPreloadEvent_MetaData), Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPreloadEvent_MetaData) }; // 2243148115
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIMediaPlayerSourceObserver, OnCompleted), Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnCompleted_MetaData), Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnCompleted_MetaData) }; // 904964748
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnAgoraCDNTokenWillExpire_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnAgoraCDNTokenWillExpire = { "OnAgoraCDNTokenWillExpire", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIMediaPlayerSourceObserver, OnAgoraCDNTokenWillExpire), Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnAgoraCDNTokenWillExpire_MetaData), Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnAgoraCDNTokenWillExpire_MetaData) }; // 899402493
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSrcInfoChanged_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSrcInfoChanged = { "OnPlayerSrcInfoChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIMediaPlayerSourceObserver, OnPlayerSrcInfoChanged), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSrcInfoChanged_MetaData), Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSrcInfoChanged_MetaData) }; // 1875048940
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerInfoUpdated_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerInfoUpdated = { "OnPlayerInfoUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIMediaPlayerSourceObserver, OnPlayerInfoUpdated), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerInfoUpdated_MetaData), Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerInfoUpdated_MetaData) }; // 3605387894
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnAudioVolumeIndication_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnAudioVolumeIndication = { "OnAudioVolumeIndication", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIMediaPlayerSourceObserver, OnAudioVolumeIndication), Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnAudioVolumeIndication_MetaData), Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnAudioVolumeIndication_MetaData) }; // 3827168979
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSourceStateChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPositionChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnMetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayBufferUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPreloadEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnAgoraCDNTokenWillExpire,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSrcInfoChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerInfoUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::NewProp_OnAudioVolumeIndication,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIMediaPlayerSourceObserver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::ClassParams = {
		&UIMediaPlayerSourceObserver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::Class_MetaDataParams), Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UIMediaPlayerSourceObserver()
	{
		if (!Z_Registration_Info_UClass_UIMediaPlayerSourceObserver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIMediaPlayerSourceObserver.OuterSingleton, Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIMediaPlayerSourceObserver.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UClass* StaticClass<UIMediaPlayerSourceObserver>()
	{
		return UIMediaPlayerSourceObserver::StaticClass();
	}
	UIMediaPlayerSourceObserver::UIMediaPlayerSourceObserver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIMediaPlayerSourceObserver);
	UIMediaPlayerSourceObserver::~UIMediaPlayerSourceObserver() {}
	void UIMediaPlayerCustomDataProvider::StaticRegisterNativesUIMediaPlayerCustomDataProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIMediaPlayerCustomDataProvider);
	UClass* Z_Construct_UClass_UIMediaPlayerCustomDataProvider_NoRegister()
	{
		return UIMediaPlayerCustomDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReadData_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReadData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSeek_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSeek;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::NewProp_OnReadData_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::NewProp_OnReadData = { "OnReadData", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIMediaPlayerCustomDataProvider, OnReadData), Z_Construct_UDelegateFunction_AgoraPlugin_OnReadData__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::NewProp_OnReadData_MetaData), Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::NewProp_OnReadData_MetaData) }; // 1297111864
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::NewProp_OnSeek_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::NewProp_OnSeek = { "OnSeek", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIMediaPlayerCustomDataProvider, OnSeek), Z_Construct_UDelegateFunction_AgoraPlugin_OnSeek__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::NewProp_OnSeek_MetaData), Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::NewProp_OnSeek_MetaData) }; // 2694512504
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::NewProp_OnReadData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::NewProp_OnSeek,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIMediaPlayerCustomDataProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::ClassParams = {
		&UIMediaPlayerCustomDataProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UIMediaPlayerCustomDataProvider()
	{
		if (!Z_Registration_Info_UClass_UIMediaPlayerCustomDataProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIMediaPlayerCustomDataProvider.OuterSingleton, Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIMediaPlayerCustomDataProvider.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UClass* StaticClass<UIMediaPlayerCustomDataProvider>()
	{
		return UIMediaPlayerCustomDataProvider::StaticClass();
	}
	UIMediaPlayerCustomDataProvider::UIMediaPlayerCustomDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIMediaPlayerCustomDataProvider);
	UIMediaPlayerCustomDataProvider::~UIMediaPlayerCustomDataProvider() {}
	struct Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_Statics::EnumInfo[] = {
		{ EENUMCUSTOM_MEDIA_PLAYER_ERROR_StaticEnum, TEXT("EENUMCUSTOM_MEDIA_PLAYER_ERROR"), &Z_Registration_Info_UEnum_EENUMCUSTOM_MEDIA_PLAYER_ERROR, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4191108703U) },
		{ EMEDIA_PLAYER_EVENT_StaticEnum, TEXT("EMEDIA_PLAYER_EVENT"), &Z_Registration_Info_UEnum_EMEDIA_PLAYER_EVENT, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2345495675U) },
		{ EPLAYER_PRELOAD_EVENT_StaticEnum, TEXT("EPLAYER_PRELOAD_EVENT"), &Z_Registration_Info_UEnum_EPLAYER_PRELOAD_EVENT, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 949806035U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_Statics::ScriptStructInfo[] = {
		{ FENUMWRAP_MEDIA_PLAYER_ERROR::StaticStruct, Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics::NewStructOps, TEXT("ENUMWRAP_MEDIA_PLAYER_ERROR"), &Z_Registration_Info_UScriptStruct_ENUMWRAP_MEDIA_PLAYER_ERROR, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FENUMWRAP_MEDIA_PLAYER_ERROR), 1354023837U) },
		{ FSrcInfo::StaticStruct, Z_Construct_UScriptStruct_FSrcInfo_Statics::NewStructOps, TEXT("SrcInfo"), &Z_Registration_Info_UScriptStruct_SrcInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSrcInfo), 1881709792U) },
		{ FCacheStatistics::StaticStruct, Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewStructOps, TEXT("CacheStatistics"), &Z_Registration_Info_UScriptStruct_CacheStatistics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCacheStatistics), 4026758730U) },
		{ FPlayerUpdatedInfo::StaticStruct, Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewStructOps, TEXT("PlayerUpdatedInfo"), &Z_Registration_Info_UScriptStruct_PlayerUpdatedInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerUpdatedInfo), 2832888955U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIMediaPlayerSourceObserver, UIMediaPlayerSourceObserver::StaticClass, TEXT("UIMediaPlayerSourceObserver"), &Z_Registration_Info_UClass_UIMediaPlayerSourceObserver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIMediaPlayerSourceObserver), 1033382058U) },
		{ Z_Construct_UClass_UIMediaPlayerCustomDataProvider, UIMediaPlayerCustomDataProvider::StaticClass, TEXT("UIMediaPlayerCustomDataProvider"), &Z_Registration_Info_UClass_UIMediaPlayerCustomDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIMediaPlayerCustomDataProvider), 901491824U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_1039102345(TEXT("/Script/AgoraPlugin"),
		Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
