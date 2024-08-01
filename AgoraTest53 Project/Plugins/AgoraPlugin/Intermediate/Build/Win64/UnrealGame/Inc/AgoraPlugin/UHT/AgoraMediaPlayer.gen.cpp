// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/URtcEngineProxyCompatibility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgoraMediaPlayer() {}
// Cross Module References
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIAudioPcmFrameSink_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIAudioSpectrumObserver_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaPlayer();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaPlayer_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaPlayerCacheManager();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaPlayerCacheManager_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaPlayerCustomDataProvider_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaPlayerSourceObserver_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIVideoFrameObserver_NoRegister();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_AGORAOPTIONAL();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_STATE();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_ERAW_AUDIO_FRAME_OP_MODE_TYPE();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_ERENDER_MODE_TYPE();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAgoraMediaSource();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStreamInfo();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialAudioParams();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AgoraPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AgoraMediaSource;
class UScriptStruct* FAgoraMediaSource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AgoraMediaSource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AgoraMediaSource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAgoraMediaSource, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("AgoraMediaSource"));
	}
	return Z_Registration_Info_UScriptStruct_AgoraMediaSource.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FAgoraMediaSource>()
{
	return FAgoraMediaSource::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAgoraMediaSource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_url;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uri_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_uri;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_startPos_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_startPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_autoPlay_MetaData[];
#endif
		static void NewProp_autoPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_autoPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enableCache_MetaData[];
#endif
		static void NewProp_enableCache_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_enableCache;
		static const UECodeGen_Private::FBytePropertyParams NewProp_isAgoraSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isAgoraSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_isAgoraSource;
		static const UECodeGen_Private::FBytePropertyParams NewProp_isLiveSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isLiveSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_isLiveSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_provider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_provider;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAgoraMediaSource>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_url_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgoraMediaSource, url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_url_MetaData), Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_url_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_uri_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_uri = { "uri", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgoraMediaSource, uri), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_uri_MetaData), Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_uri_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_startPos_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_startPos = { "startPos", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgoraMediaSource, startPos), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_startPos_MetaData), Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_startPos_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_autoPlay_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_autoPlay_SetBit(void* Obj)
	{
		((FAgoraMediaSource*)Obj)->autoPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_autoPlay = { "autoPlay", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAgoraMediaSource), &Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_autoPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_autoPlay_MetaData), Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_autoPlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_enableCache_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_enableCache_SetBit(void* Obj)
	{
		((FAgoraMediaSource*)Obj)->enableCache = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_enableCache = { "enableCache", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAgoraMediaSource), &Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_enableCache_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_enableCache_MetaData), Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_enableCache_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isAgoraSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isAgoraSource_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isAgoraSource = { "isAgoraSource", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgoraMediaSource, isAgoraSource), Z_Construct_UEnum_AgoraPlugin_AGORAOPTIONAL, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isAgoraSource_MetaData), Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isAgoraSource_MetaData) }; // 4022735785
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isLiveSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isLiveSource_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isLiveSource = { "isLiveSource", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgoraMediaSource, isLiveSource), Z_Construct_UEnum_AgoraPlugin_AGORAOPTIONAL, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isLiveSource_MetaData), Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isLiveSource_MetaData) }; // 4022735785
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_provider_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_provider = { "provider", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgoraMediaSource, provider), Z_Construct_UClass_UIMediaPlayerCustomDataProvider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_provider_MetaData), Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_provider_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_uri,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_startPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_autoPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_enableCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isAgoraSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isAgoraSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isLiveSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isLiveSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_provider,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"AgoraMediaSource",
		Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::PropPointers),
		sizeof(FAgoraMediaSource),
		alignof(FAgoraMediaSource),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAgoraMediaSource()
	{
		if (!Z_Registration_Info_UScriptStruct_AgoraMediaSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AgoraMediaSource.InnerSingleton, Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AgoraMediaSource.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAUDIO_DUAL_MONO_MODE;
	static UEnum* EAUDIO_DUAL_MONO_MODE_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAUDIO_DUAL_MONO_MODE.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAUDIO_DUAL_MONO_MODE.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EAUDIO_DUAL_MONO_MODE"));
		}
		return Z_Registration_Info_UEnum_EAUDIO_DUAL_MONO_MODE.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UEnum* StaticEnum<EAUDIO_DUAL_MONO_MODE>()
	{
		return EAUDIO_DUAL_MONO_MODE_StaticEnum();
	}
	struct Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE_Statics::Enumerators[] = {
		{ "EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_STEREO", (int64)EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_STEREO },
		{ "EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_L", (int64)EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_L },
		{ "EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_R", (int64)EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_R },
		{ "EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_MIX", (int64)EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_MIX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE_Statics::Enum_MetaDataParams[] = {
		{ "AUDIO_DUAL_MONO_L.Name", "EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_L" },
		{ "AUDIO_DUAL_MONO_MIX.Name", "EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_MIX" },
		{ "AUDIO_DUAL_MONO_R.Name", "EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_R" },
		{ "AUDIO_DUAL_MONO_STEREO.Name", "EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_STEREO" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		"EAUDIO_DUAL_MONO_MODE",
		"EAUDIO_DUAL_MONO_MODE",
		Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE()
	{
		if (!Z_Registration_Info_UEnum_EAUDIO_DUAL_MONO_MODE.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAUDIO_DUAL_MONO_MODE.InnerSingleton, Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAUDIO_DUAL_MONO_MODE.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMEDIA_STREAM_TYPE;
	static UEnum* EMEDIA_STREAM_TYPE_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMEDIA_STREAM_TYPE.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMEDIA_STREAM_TYPE.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EMEDIA_STREAM_TYPE"));
		}
		return Z_Registration_Info_UEnum_EMEDIA_STREAM_TYPE.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UEnum* StaticEnum<EMEDIA_STREAM_TYPE>()
	{
		return EMEDIA_STREAM_TYPE_StaticEnum();
	}
	struct Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE_Statics::Enumerators[] = {
		{ "EMEDIA_STREAM_TYPE::STREAM_TYPE_UNKNOWN", (int64)EMEDIA_STREAM_TYPE::STREAM_TYPE_UNKNOWN },
		{ "EMEDIA_STREAM_TYPE::STREAM_TYPE_VIDEO", (int64)EMEDIA_STREAM_TYPE::STREAM_TYPE_VIDEO },
		{ "EMEDIA_STREAM_TYPE::STREAM_TYPE_AUDIO", (int64)EMEDIA_STREAM_TYPE::STREAM_TYPE_AUDIO },
		{ "EMEDIA_STREAM_TYPE::STREAM_TYPE_SUBTITLE", (int64)EMEDIA_STREAM_TYPE::STREAM_TYPE_SUBTITLE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
		{ "STREAM_TYPE_AUDIO.Name", "EMEDIA_STREAM_TYPE::STREAM_TYPE_AUDIO" },
		{ "STREAM_TYPE_SUBTITLE.Name", "EMEDIA_STREAM_TYPE::STREAM_TYPE_SUBTITLE" },
		{ "STREAM_TYPE_UNKNOWN.Name", "EMEDIA_STREAM_TYPE::STREAM_TYPE_UNKNOWN" },
		{ "STREAM_TYPE_VIDEO.Name", "EMEDIA_STREAM_TYPE::STREAM_TYPE_VIDEO" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		"EMEDIA_STREAM_TYPE",
		"EMEDIA_STREAM_TYPE",
		Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE()
	{
		if (!Z_Registration_Info_UEnum_EMEDIA_STREAM_TYPE.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMEDIA_STREAM_TYPE.InnerSingleton, Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMEDIA_STREAM_TYPE.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerStreamInfo;
class UScriptStruct* FPlayerStreamInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerStreamInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerStreamInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerStreamInfo, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("PlayerStreamInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerStreamInfo.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FPlayerStreamInfo>()
{
	return FPlayerStreamInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_streamIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_streamIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_streamType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_streamType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_streamType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_codecName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_codecName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_language_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_language;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_videoFrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_videoFrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_videoBitRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_videoBitRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_videoWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_videoWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_videoHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_videoHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_videoRotation_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_videoRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_audioSampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_audioSampleRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_audioChannels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_audioChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_audioBitsPerSample_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_audioBitsPerSample;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_duration_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerStreamInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamIndex_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamIndex = { "streamIndex", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStreamInfo, streamIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamIndex_MetaData), Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamIndex_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamType_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamType = { "streamType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStreamInfo, streamType), Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamType_MetaData), Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamType_MetaData) }; // 467534559
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_codecName_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_codecName = { "codecName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStreamInfo, codecName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_codecName_MetaData), Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_codecName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_language_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStreamInfo, language), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_language_MetaData), Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_language_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoFrameRate_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoFrameRate = { "videoFrameRate", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStreamInfo, videoFrameRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoFrameRate_MetaData), Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoFrameRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoBitRate_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoBitRate = { "videoBitRate", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStreamInfo, videoBitRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoBitRate_MetaData), Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoBitRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoWidth_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoWidth = { "videoWidth", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStreamInfo, videoWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoWidth_MetaData), Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoHeight_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoHeight = { "videoHeight", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStreamInfo, videoHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoHeight_MetaData), Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoRotation_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoRotation = { "videoRotation", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStreamInfo, videoRotation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoRotation_MetaData), Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioSampleRate_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioSampleRate = { "audioSampleRate", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStreamInfo, audioSampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioSampleRate_MetaData), Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioSampleRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioChannels_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioChannels = { "audioChannels", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStreamInfo, audioChannels), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioChannels_MetaData), Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioChannels_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioBitsPerSample_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioBitsPerSample = { "audioBitsPerSample", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStreamInfo, audioBitsPerSample), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioBitsPerSample_MetaData), Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioBitsPerSample_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_duration_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStreamInfo, duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_duration_MetaData), Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_duration_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_codecName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_language,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoFrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoBitRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioBitsPerSample,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_duration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"PlayerStreamInfo",
		Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::PropPointers),
		sizeof(FPlayerStreamInfo),
		alignof(FPlayerStreamInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerStreamInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayerStreamInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerStreamInfo.InnerSingleton, Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayerStreamInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSetSoundPositionParams)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_pan);
		P_GET_PROPERTY(FFloatProperty,Z_Param_gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetSoundPositionParams(Z_Param_pan,Z_Param_gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSetSpatialAudioParams)
	{
		P_GET_STRUCT_REF(FSpatialAudioParams,Z_Param_Out_params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetSpatialAudioParams(Z_Param_Out_params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execUnloadSrc)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_src);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UnloadSrc(Z_Param_src);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execPlayPreloadedSrc)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_src);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PlayPreloadedSrc(Z_Param_src);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execPreloadSrc)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_src);
		P_GET_PROPERTY(FInt64Property,Z_Param_startPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PreloadSrc(Z_Param_src,Z_Param_startPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSwitchSrc)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_src);
		P_GET_UBOOL(Z_Param_syncPts);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SwitchSrc(Z_Param_src,Z_Param_syncPts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSwitchAgoraCDNSrc)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_src);
		P_GET_UBOOL(Z_Param_syncPts);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SwitchAgoraCDNSrc(Z_Param_src,Z_Param_syncPts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execRenewAgoraCDNSrcToken)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_token);
		P_GET_PROPERTY(FInt64Property,Z_Param_ts);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RenewAgoraCDNSrcToken(Z_Param_token,Z_Param_ts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execEnableAutoSwitchAgoraCDN)
	{
		P_GET_UBOOL(Z_Param_enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->EnableAutoSwitchAgoraCDN(Z_Param_enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execGetCurrentAgoraCDNIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentAgoraCDNIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSwitchAgoraCDNLineByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SwitchAgoraCDNLineByIndex(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execGetAgoraCDNLineCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAgoraCDNLineCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execOpenWithAgoraCDNSrc)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_src);
		P_GET_PROPERTY(FInt64Property,Z_Param_startPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->OpenWithAgoraCDNSrc(Z_Param_src,Z_Param_startPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execGetPlaySrc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPlaySrc();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execGetPlayerSdkVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPlayerSdkVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSetAudioDualMonoMode)
	{
		P_GET_ENUM(EAUDIO_DUAL_MONO_MODE,Z_Param_mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetAudioDualMonoMode(EAUDIO_DUAL_MONO_MODE(Z_Param_mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execUnregisterMediaPlayerAudioSpectrumObserver)
	{
		P_GET_OBJECT(UIAudioSpectrumObserver,Z_Param_observer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UnregisterMediaPlayerAudioSpectrumObserver(Z_Param_observer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execRegisterMediaPlayerAudioSpectrumObserver)
	{
		P_GET_OBJECT(UIAudioSpectrumObserver,Z_Param_observer);
		P_GET_PROPERTY(FIntProperty,Z_Param_intervalInMS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RegisterMediaPlayerAudioSpectrumObserver(Z_Param_observer,Z_Param_intervalInMS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execUnregisterVideoFrameObserver)
	{
		P_GET_OBJECT(UIVideoFrameObserver,Z_Param_observer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UnregisterVideoFrameObserver(Z_Param_observer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execRegisterVideoFrameObserver)
	{
		P_GET_OBJECT(UIVideoFrameObserver,Z_Param_observer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RegisterVideoFrameObserver(Z_Param_observer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execUnregisterAudioFrameObserver)
	{
		P_GET_OBJECT(UIAudioPcmFrameSink,Z_Param_observer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UnregisterAudioFrameObserver(Z_Param_observer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execRegisterAudioFrameObserver)
	{
		P_GET_OBJECT(UIAudioPcmFrameSink,Z_Param_observer);
		P_GET_ENUM(ERAW_AUDIO_FRAME_OP_MODE_TYPE,Z_Param_mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RegisterAudioFrameObserver(Z_Param_observer,ERAW_AUDIO_FRAME_OP_MODE_TYPE(Z_Param_mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execUnregisterPlayerSourceObserver)
	{
		P_GET_OBJECT(UIMediaPlayerSourceObserver,Z_Param_observer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->UnregisterPlayerSourceObserver(Z_Param_observer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execRegisterPlayerSourceObserver)
	{
		P_GET_OBJECT(UIMediaPlayerSourceObserver,Z_Param_observer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RegisterPlayerSourceObserver(Z_Param_observer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSetRenderMode)
	{
		P_GET_ENUM(ERENDER_MODE_TYPE,Z_Param_renderMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetRenderMode(ERENDER_MODE_TYPE(Z_Param_renderMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSetView)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_view);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetView(Z_Param_view);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execGetPublishSignalVolume)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPublishSignalVolume(Z_Param_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execAdjustPublishSignalVolume)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AdjustPublishSignalVolume(Z_Param_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execGetPlayoutVolume)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayoutVolume(Z_Param_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execAdjustPlayoutVolume)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AdjustPlayoutVolume(Z_Param_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execGetMute)
	{
		P_GET_UBOOL(Z_Param_muted);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMute(Z_Param_muted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execMute)
	{
		P_GET_UBOOL(Z_Param_muted);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Mute(Z_Param_muted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execGetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMEDIA_PLAYER_STATE*)Z_Param__Result=P_THIS->GetState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSetExternalSubtitle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_url);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetExternalSubtitle(Z_Param_url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSelectInternalSubtitle)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SelectInternalSubtitle(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execTakeScreenshot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->TakeScreenshot(Z_Param_filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSetPlayerOptionInString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetPlayerOptionInString(Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSetPlayerOptionInInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetPlayerOptionInInt(Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSelectAudioTrack)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SelectAudioTrack(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSetPlaybackSpeed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetPlaybackSpeed(Z_Param_speed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSetLoopCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_loopCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetLoopCount(Z_Param_loopCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execGetStreamInfo)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_index);
		P_GET_STRUCT_REF(FPlayerStreamInfo,Z_Param_Out_info);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStreamInfo(Z_Param_index,Z_Param_Out_info);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execGetStreamCount)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStreamCount(Z_Param_Out_count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execGetPlayPosition)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_pos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayPosition(Z_Param_Out_pos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execGetDuration)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDuration(Z_Param_Out_duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSetAudioPitch)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_pitch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetAudioPitch(Z_Param_pitch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execSeek)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_newPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Seek(Z_Param_newPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execResume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Resume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Pause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Play();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execOpenWithMediaSource)
	{
		P_GET_STRUCT_REF(FAgoraMediaSource,Z_Param_Out_source);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->OpenWithMediaSource(Z_Param_Out_source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execOpenWithCustomSource)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_startPos);
		P_GET_OBJECT(UIMediaPlayerCustomDataProvider,Z_Param_provider);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->OpenWithCustomSource(Z_Param_startPos,Z_Param_provider);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execOpen)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_url);
		P_GET_PROPERTY(FInt64Property,Z_Param_startPos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Open(Z_Param_url,Z_Param_startPos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayer::execGetMediaPlayerId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMediaPlayerId();
		P_NATIVE_END;
	}
	void UIMediaPlayer::StaticRegisterNativesUIMediaPlayer()
	{
		UClass* Class = UIMediaPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustPlayoutVolume", &UIMediaPlayer::execAdjustPlayoutVolume },
			{ "AdjustPublishSignalVolume", &UIMediaPlayer::execAdjustPublishSignalVolume },
			{ "EnableAutoSwitchAgoraCDN", &UIMediaPlayer::execEnableAutoSwitchAgoraCDN },
			{ "GetAgoraCDNLineCount", &UIMediaPlayer::execGetAgoraCDNLineCount },
			{ "GetCurrentAgoraCDNIndex", &UIMediaPlayer::execGetCurrentAgoraCDNIndex },
			{ "GetDuration", &UIMediaPlayer::execGetDuration },
			{ "GetMediaPlayerId", &UIMediaPlayer::execGetMediaPlayerId },
			{ "GetMute", &UIMediaPlayer::execGetMute },
			{ "GetPlayerSdkVersion", &UIMediaPlayer::execGetPlayerSdkVersion },
			{ "GetPlayoutVolume", &UIMediaPlayer::execGetPlayoutVolume },
			{ "GetPlayPosition", &UIMediaPlayer::execGetPlayPosition },
			{ "GetPlaySrc", &UIMediaPlayer::execGetPlaySrc },
			{ "GetPublishSignalVolume", &UIMediaPlayer::execGetPublishSignalVolume },
			{ "GetState", &UIMediaPlayer::execGetState },
			{ "GetStreamCount", &UIMediaPlayer::execGetStreamCount },
			{ "GetStreamInfo", &UIMediaPlayer::execGetStreamInfo },
			{ "Mute", &UIMediaPlayer::execMute },
			{ "Open", &UIMediaPlayer::execOpen },
			{ "OpenWithAgoraCDNSrc", &UIMediaPlayer::execOpenWithAgoraCDNSrc },
			{ "OpenWithCustomSource", &UIMediaPlayer::execOpenWithCustomSource },
			{ "OpenWithMediaSource", &UIMediaPlayer::execOpenWithMediaSource },
			{ "Pause", &UIMediaPlayer::execPause },
			{ "Play", &UIMediaPlayer::execPlay },
			{ "PlayPreloadedSrc", &UIMediaPlayer::execPlayPreloadedSrc },
			{ "PreloadSrc", &UIMediaPlayer::execPreloadSrc },
			{ "RegisterAudioFrameObserver", &UIMediaPlayer::execRegisterAudioFrameObserver },
			{ "RegisterMediaPlayerAudioSpectrumObserver", &UIMediaPlayer::execRegisterMediaPlayerAudioSpectrumObserver },
			{ "RegisterPlayerSourceObserver", &UIMediaPlayer::execRegisterPlayerSourceObserver },
			{ "RegisterVideoFrameObserver", &UIMediaPlayer::execRegisterVideoFrameObserver },
			{ "RenewAgoraCDNSrcToken", &UIMediaPlayer::execRenewAgoraCDNSrcToken },
			{ "Resume", &UIMediaPlayer::execResume },
			{ "Seek", &UIMediaPlayer::execSeek },
			{ "SelectAudioTrack", &UIMediaPlayer::execSelectAudioTrack },
			{ "SelectInternalSubtitle", &UIMediaPlayer::execSelectInternalSubtitle },
			{ "SetAudioDualMonoMode", &UIMediaPlayer::execSetAudioDualMonoMode },
			{ "SetAudioPitch", &UIMediaPlayer::execSetAudioPitch },
			{ "SetExternalSubtitle", &UIMediaPlayer::execSetExternalSubtitle },
			{ "SetLoopCount", &UIMediaPlayer::execSetLoopCount },
			{ "SetPlaybackSpeed", &UIMediaPlayer::execSetPlaybackSpeed },
			{ "SetPlayerOptionInInt", &UIMediaPlayer::execSetPlayerOptionInInt },
			{ "SetPlayerOptionInString", &UIMediaPlayer::execSetPlayerOptionInString },
			{ "SetRenderMode", &UIMediaPlayer::execSetRenderMode },
			{ "SetSoundPositionParams", &UIMediaPlayer::execSetSoundPositionParams },
			{ "SetSpatialAudioParams", &UIMediaPlayer::execSetSpatialAudioParams },
			{ "SetView", &UIMediaPlayer::execSetView },
			{ "Stop", &UIMediaPlayer::execStop },
			{ "SwitchAgoraCDNLineByIndex", &UIMediaPlayer::execSwitchAgoraCDNLineByIndex },
			{ "SwitchAgoraCDNSrc", &UIMediaPlayer::execSwitchAgoraCDNSrc },
			{ "SwitchSrc", &UIMediaPlayer::execSwitchSrc },
			{ "TakeScreenshot", &UIMediaPlayer::execTakeScreenshot },
			{ "UnloadSrc", &UIMediaPlayer::execUnloadSrc },
			{ "UnregisterAudioFrameObserver", &UIMediaPlayer::execUnregisterAudioFrameObserver },
			{ "UnregisterMediaPlayerAudioSpectrumObserver", &UIMediaPlayer::execUnregisterMediaPlayerAudioSpectrumObserver },
			{ "UnregisterPlayerSourceObserver", &UIMediaPlayer::execUnregisterPlayerSourceObserver },
			{ "UnregisterVideoFrameObserver", &UIMediaPlayer::execUnregisterVideoFrameObserver },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics
	{
		struct IMediaPlayer_eventAdjustPlayoutVolume_Parms
		{
			int32 volume;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_volume;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventAdjustPlayoutVolume_Parms, volume), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventAdjustPlayoutVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics::NewProp_volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "AdjustPlayoutVolume", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics::IMediaPlayer_eventAdjustPlayoutVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics::IMediaPlayer_eventAdjustPlayoutVolume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics
	{
		struct IMediaPlayer_eventAdjustPublishSignalVolume_Parms
		{
			int32 volume;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_volume;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventAdjustPublishSignalVolume_Parms, volume), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventAdjustPublishSignalVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics::NewProp_volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "AdjustPublishSignalVolume", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics::IMediaPlayer_eventAdjustPublishSignalVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics::IMediaPlayer_eventAdjustPublishSignalVolume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics
	{
		struct IMediaPlayer_eventEnableAutoSwitchAgoraCDN_Parms
		{
			bool enable;
			int32 ReturnValue;
		};
		static void NewProp_enable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_enable;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::NewProp_enable_SetBit(void* Obj)
	{
		((IMediaPlayer_eventEnableAutoSwitchAgoraCDN_Parms*)Obj)->enable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::NewProp_enable = { "enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IMediaPlayer_eventEnableAutoSwitchAgoraCDN_Parms), &Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::NewProp_enable_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventEnableAutoSwitchAgoraCDN_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::NewProp_enable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "EnableAutoSwitchAgoraCDN", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::IMediaPlayer_eventEnableAutoSwitchAgoraCDN_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::IMediaPlayer_eventEnableAutoSwitchAgoraCDN_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount_Statics
	{
		struct IMediaPlayer_eventGetAgoraCDNLineCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventGetAgoraCDNLineCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "GetAgoraCDNLineCount", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount_Statics::IMediaPlayer_eventGetAgoraCDNLineCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount_Statics::IMediaPlayer_eventGetAgoraCDNLineCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex_Statics
	{
		struct IMediaPlayer_eventGetCurrentAgoraCDNIndex_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventGetCurrentAgoraCDNIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "GetCurrentAgoraCDNIndex", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex_Statics::IMediaPlayer_eventGetCurrentAgoraCDNIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex_Statics::IMediaPlayer_eventGetCurrentAgoraCDNIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics
	{
		struct IMediaPlayer_eventGetDuration_Parms
		{
			int64 duration;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_duration;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventGetDuration_Parms, duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventGetDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics::NewProp_duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "GetDuration", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics::IMediaPlayer_eventGetDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics::IMediaPlayer_eventGetDuration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_GetDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_GetDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId_Statics
	{
		struct IMediaPlayer_eventGetMediaPlayerId_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventGetMediaPlayerId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "GetMediaPlayerId", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId_Statics::IMediaPlayer_eventGetMediaPlayerId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId_Statics::IMediaPlayer_eventGetMediaPlayerId_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics
	{
		struct IMediaPlayer_eventGetMute_Parms
		{
			bool muted;
			int32 ReturnValue;
		};
		static void NewProp_muted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_muted;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::NewProp_muted_SetBit(void* Obj)
	{
		((IMediaPlayer_eventGetMute_Parms*)Obj)->muted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::NewProp_muted = { "muted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IMediaPlayer_eventGetMute_Parms), &Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::NewProp_muted_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventGetMute_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::NewProp_muted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "GetMute", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::IMediaPlayer_eventGetMute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::IMediaPlayer_eventGetMute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_GetMute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_GetMute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion_Statics
	{
		struct IMediaPlayer_eventGetPlayerSdkVersion_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventGetPlayerSdkVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "GetPlayerSdkVersion", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion_Statics::IMediaPlayer_eventGetPlayerSdkVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion_Statics::IMediaPlayer_eventGetPlayerSdkVersion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics
	{
		struct IMediaPlayer_eventGetPlayoutVolume_Parms
		{
			int32 volume;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_volume;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventGetPlayoutVolume_Parms, volume), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventGetPlayoutVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics::NewProp_volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "GetPlayoutVolume", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics::IMediaPlayer_eventGetPlayoutVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics::IMediaPlayer_eventGetPlayoutVolume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics
	{
		struct IMediaPlayer_eventGetPlayPosition_Parms
		{
			int64 pos;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_pos;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics::NewProp_pos = { "pos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventGetPlayPosition_Parms, pos), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventGetPlayPosition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics::NewProp_pos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "GetPlayPosition", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics::IMediaPlayer_eventGetPlayPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics::IMediaPlayer_eventGetPlayPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc_Statics
	{
		struct IMediaPlayer_eventGetPlaySrc_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventGetPlaySrc_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "GetPlaySrc", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc_Statics::IMediaPlayer_eventGetPlaySrc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc_Statics::IMediaPlayer_eventGetPlaySrc_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics
	{
		struct IMediaPlayer_eventGetPublishSignalVolume_Parms
		{
			int32 volume;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_volume;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventGetPublishSignalVolume_Parms, volume), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventGetPublishSignalVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics::NewProp_volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "GetPublishSignalVolume", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics::IMediaPlayer_eventGetPublishSignalVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics::IMediaPlayer_eventGetPublishSignalVolume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_GetState_Statics
	{
		struct IMediaPlayer_eventGetState_Parms
		{
			EMEDIA_PLAYER_STATE ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIMediaPlayer_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_STATE, METADATA_PARAMS(0, nullptr) }; // 3305692306
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_GetState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_GetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "GetState", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_GetState_Statics::IMediaPlayer_eventGetState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_GetState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_GetState_Statics::IMediaPlayer_eventGetState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics
	{
		struct IMediaPlayer_eventGetStreamCount_Parms
		{
			int64 count;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_count;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventGetStreamCount_Parms, count), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventGetStreamCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics::NewProp_count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "GetStreamCount", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics::IMediaPlayer_eventGetStreamCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics::IMediaPlayer_eventGetStreamCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_GetStreamCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_GetStreamCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics
	{
		struct IMediaPlayer_eventGetStreamInfo_Parms
		{
			int64 index;
			FPlayerStreamInfo info;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_info;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventGetStreamInfo_Parms, index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::NewProp_info = { "info", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventGetStreamInfo_Parms, info), Z_Construct_UScriptStruct_FPlayerStreamInfo, METADATA_PARAMS(0, nullptr) }; // 3089932895
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventGetStreamInfo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::NewProp_info,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "GetStreamInfo", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::IMediaPlayer_eventGetStreamInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::IMediaPlayer_eventGetStreamInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_Mute_Statics
	{
		struct IMediaPlayer_eventMute_Parms
		{
			bool muted;
			int32 ReturnValue;
		};
		static void NewProp_muted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_muted;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::NewProp_muted_SetBit(void* Obj)
	{
		((IMediaPlayer_eventMute_Parms*)Obj)->muted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::NewProp_muted = { "muted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IMediaPlayer_eventMute_Parms), &Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::NewProp_muted_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventMute_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::NewProp_muted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "Mute", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::IMediaPlayer_eventMute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::IMediaPlayer_eventMute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_Mute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_Mute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_Open_Statics
	{
		struct IMediaPlayer_eventOpen_Parms
		{
			FString url;
			int64 startPos;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_url;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_startPos;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_Open_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventOpen_Parms, url), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UIMediaPlayer_Open_Statics::NewProp_startPos = { "startPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventOpen_Parms, startPos), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_Open_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventOpen_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_Open_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_Open_Statics::NewProp_url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_Open_Statics::NewProp_startPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_Open_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_Open_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "Open", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_Open_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Open_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_Open_Statics::IMediaPlayer_eventOpen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Open_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_Open_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Open_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_Open_Statics::IMediaPlayer_eventOpen_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_Open()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_Open_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics
	{
		struct IMediaPlayer_eventOpenWithAgoraCDNSrc_Parms
		{
			FString src;
			int64 startPos;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_src;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_startPos;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventOpenWithAgoraCDNSrc_Parms, src), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::NewProp_startPos = { "startPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventOpenWithAgoraCDNSrc_Parms, startPos), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventOpenWithAgoraCDNSrc_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::NewProp_src,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::NewProp_startPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "OpenWithAgoraCDNSrc", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::IMediaPlayer_eventOpenWithAgoraCDNSrc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::IMediaPlayer_eventOpenWithAgoraCDNSrc_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics
	{
		struct IMediaPlayer_eventOpenWithCustomSource_Parms
		{
			int64 startPos;
			UIMediaPlayerCustomDataProvider* provider;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_startPos;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_provider;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::NewProp_startPos = { "startPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventOpenWithCustomSource_Parms, startPos), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::NewProp_provider = { "provider", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventOpenWithCustomSource_Parms, provider), Z_Construct_UClass_UIMediaPlayerCustomDataProvider_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventOpenWithCustomSource_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::NewProp_startPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::NewProp_provider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "OpenWithCustomSource", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::IMediaPlayer_eventOpenWithCustomSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::IMediaPlayer_eventOpenWithCustomSource_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics
	{
		struct IMediaPlayer_eventOpenWithMediaSource_Parms
		{
			FAgoraMediaSource source;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_source_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_source;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::NewProp_source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventOpenWithMediaSource_Parms, source), Z_Construct_UScriptStruct_FAgoraMediaSource, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::NewProp_source_MetaData), Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::NewProp_source_MetaData) }; // 3878423339
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventOpenWithMediaSource_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::NewProp_source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "OpenWithMediaSource", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::IMediaPlayer_eventOpenWithMediaSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::IMediaPlayer_eventOpenWithMediaSource_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_Pause_Statics
	{
		struct IMediaPlayer_eventPause_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_Pause_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventPause_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_Pause_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_Pause_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_Pause_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "Pause", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_Pause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Pause_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_Pause_Statics::IMediaPlayer_eventPause_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_Pause_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Pause_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_Pause_Statics::IMediaPlayer_eventPause_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_Play_Statics
	{
		struct IMediaPlayer_eventPlay_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_Play_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventPlay_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_Play_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_Play_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "Play", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Play_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_Play_Statics::IMediaPlayer_eventPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_Play_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Play_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_Play_Statics::IMediaPlayer_eventPlay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics
	{
		struct IMediaPlayer_eventPlayPreloadedSrc_Parms
		{
			FString src;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_src;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventPlayPreloadedSrc_Parms, src), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventPlayPreloadedSrc_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics::NewProp_src,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "PlayPreloadedSrc", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics::IMediaPlayer_eventPlayPreloadedSrc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics::IMediaPlayer_eventPlayPreloadedSrc_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics
	{
		struct IMediaPlayer_eventPreloadSrc_Parms
		{
			FString src;
			int64 startPos;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_src;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_startPos;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventPreloadSrc_Parms, src), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::NewProp_startPos = { "startPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventPreloadSrc_Parms, startPos), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventPreloadSrc_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::NewProp_src,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::NewProp_startPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "PreloadSrc", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::IMediaPlayer_eventPreloadSrc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::IMediaPlayer_eventPreloadSrc_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_PreloadSrc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_PreloadSrc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics
	{
		struct IMediaPlayer_eventRegisterAudioFrameObserver_Parms
		{
			UIAudioPcmFrameSink* observer;
			ERAW_AUDIO_FRAME_OP_MODE_TYPE mode;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_observer;
		static const UECodeGen_Private::FBytePropertyParams NewProp_mode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_mode;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::NewProp_observer = { "observer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventRegisterAudioFrameObserver_Parms, observer), Z_Construct_UClass_UIAudioPcmFrameSink_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::NewProp_mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::NewProp_mode = { "mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventRegisterAudioFrameObserver_Parms, mode), Z_Construct_UEnum_AgoraPlugin_ERAW_AUDIO_FRAME_OP_MODE_TYPE, METADATA_PARAMS(0, nullptr) }; // 2989003729
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventRegisterAudioFrameObserver_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::NewProp_observer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::NewProp_mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::NewProp_mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "CPP_Default_mode", "RAW_AUDIO_FRAME_OP_MODE_READ_ONLY" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "RegisterAudioFrameObserver", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::IMediaPlayer_eventRegisterAudioFrameObserver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::IMediaPlayer_eventRegisterAudioFrameObserver_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics
	{
		struct IMediaPlayer_eventRegisterMediaPlayerAudioSpectrumObserver_Parms
		{
			UIAudioSpectrumObserver* observer;
			int32 intervalInMS;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_observer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_intervalInMS;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::NewProp_observer = { "observer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventRegisterMediaPlayerAudioSpectrumObserver_Parms, observer), Z_Construct_UClass_UIAudioSpectrumObserver_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::NewProp_intervalInMS = { "intervalInMS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventRegisterMediaPlayerAudioSpectrumObserver_Parms, intervalInMS), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventRegisterMediaPlayerAudioSpectrumObserver_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::NewProp_observer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::NewProp_intervalInMS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "RegisterMediaPlayerAudioSpectrumObserver", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::IMediaPlayer_eventRegisterMediaPlayerAudioSpectrumObserver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::IMediaPlayer_eventRegisterMediaPlayerAudioSpectrumObserver_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics
	{
		struct IMediaPlayer_eventRegisterPlayerSourceObserver_Parms
		{
			UIMediaPlayerSourceObserver* observer;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_observer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics::NewProp_observer = { "observer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventRegisterPlayerSourceObserver_Parms, observer), Z_Construct_UClass_UIMediaPlayerSourceObserver_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventRegisterPlayerSourceObserver_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics::NewProp_observer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "RegisterPlayerSourceObserver", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics::IMediaPlayer_eventRegisterPlayerSourceObserver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics::IMediaPlayer_eventRegisterPlayerSourceObserver_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics
	{
		struct IMediaPlayer_eventRegisterVideoFrameObserver_Parms
		{
			UIVideoFrameObserver* observer;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_observer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics::NewProp_observer = { "observer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventRegisterVideoFrameObserver_Parms, observer), Z_Construct_UClass_UIVideoFrameObserver_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventRegisterVideoFrameObserver_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics::NewProp_observer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "RegisterVideoFrameObserver", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics::IMediaPlayer_eventRegisterVideoFrameObserver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics::IMediaPlayer_eventRegisterVideoFrameObserver_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics
	{
		struct IMediaPlayer_eventRenewAgoraCDNSrcToken_Parms
		{
			FString token;
			int64 ts;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_token;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ts;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::NewProp_token = { "token", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventRenewAgoraCDNSrcToken_Parms, token), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::NewProp_ts = { "ts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventRenewAgoraCDNSrcToken_Parms, ts), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventRenewAgoraCDNSrcToken_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::NewProp_token,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::NewProp_ts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "RenewAgoraCDNSrcToken", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::IMediaPlayer_eventRenewAgoraCDNSrcToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::IMediaPlayer_eventRenewAgoraCDNSrcToken_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_Resume_Statics
	{
		struct IMediaPlayer_eventResume_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_Resume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventResume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_Resume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_Resume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_Resume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_Resume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "Resume", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_Resume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Resume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_Resume_Statics::IMediaPlayer_eventResume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Resume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_Resume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Resume_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_Resume_Statics::IMediaPlayer_eventResume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_Resume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_Resume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_Seek_Statics
	{
		struct IMediaPlayer_eventSeek_Parms
		{
			int64 newPos;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_newPos;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UIMediaPlayer_Seek_Statics::NewProp_newPos = { "newPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSeek_Parms, newPos), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_Seek_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSeek_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_Seek_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_Seek_Statics::NewProp_newPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_Seek_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_Seek_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_Seek_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "Seek", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_Seek_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Seek_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_Seek_Statics::IMediaPlayer_eventSeek_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Seek_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_Seek_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Seek_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_Seek_Statics::IMediaPlayer_eventSeek_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_Seek()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_Seek_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics
	{
		struct IMediaPlayer_eventSelectAudioTrack_Parms
		{
			int32 index;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSelectAudioTrack_Parms, index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSelectAudioTrack_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SelectAudioTrack", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics::IMediaPlayer_eventSelectAudioTrack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics::IMediaPlayer_eventSelectAudioTrack_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics
	{
		struct IMediaPlayer_eventSelectInternalSubtitle_Parms
		{
			int32 index;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSelectInternalSubtitle_Parms, index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSelectInternalSubtitle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SelectInternalSubtitle", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics::IMediaPlayer_eventSelectInternalSubtitle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics::IMediaPlayer_eventSelectInternalSubtitle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics
	{
		struct IMediaPlayer_eventSetAudioDualMonoMode_Parms
		{
			EAUDIO_DUAL_MONO_MODE mode;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_mode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_mode;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::NewProp_mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::NewProp_mode = { "mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSetAudioDualMonoMode_Parms, mode), Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE, METADATA_PARAMS(0, nullptr) }; // 3024373118
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSetAudioDualMonoMode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::NewProp_mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::NewProp_mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SetAudioDualMonoMode", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::IMediaPlayer_eventSetAudioDualMonoMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::IMediaPlayer_eventSetAudioDualMonoMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics
	{
		struct IMediaPlayer_eventSetAudioPitch_Parms
		{
			int32 pitch;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_pitch;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics::NewProp_pitch = { "pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSetAudioPitch_Parms, pitch), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSetAudioPitch_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics::NewProp_pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SetAudioPitch", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics::IMediaPlayer_eventSetAudioPitch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics::IMediaPlayer_eventSetAudioPitch_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics
	{
		struct IMediaPlayer_eventSetExternalSubtitle_Parms
		{
			FString url;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_url;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSetExternalSubtitle_Parms, url), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSetExternalSubtitle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics::NewProp_url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SetExternalSubtitle", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics::IMediaPlayer_eventSetExternalSubtitle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics::IMediaPlayer_eventSetExternalSubtitle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics
	{
		struct IMediaPlayer_eventSetLoopCount_Parms
		{
			int32 loopCount;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_loopCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics::NewProp_loopCount = { "loopCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSetLoopCount_Parms, loopCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSetLoopCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics::NewProp_loopCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SetLoopCount", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics::IMediaPlayer_eventSetLoopCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics::IMediaPlayer_eventSetLoopCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SetLoopCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SetLoopCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics
	{
		struct IMediaPlayer_eventSetPlaybackSpeed_Parms
		{
			int32 speed;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_speed;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSetPlaybackSpeed_Parms, speed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSetPlaybackSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SetPlaybackSpeed", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics::IMediaPlayer_eventSetPlaybackSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics::IMediaPlayer_eventSetPlaybackSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics
	{
		struct IMediaPlayer_eventSetPlayerOptionInInt_Parms
		{
			FString key;
			int32 value;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_value;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSetPlayerOptionInInt_Parms, key), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSetPlayerOptionInInt_Parms, value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSetPlayerOptionInInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::NewProp_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SetPlayerOptionInInt", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::IMediaPlayer_eventSetPlayerOptionInInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::IMediaPlayer_eventSetPlayerOptionInInt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics
	{
		struct IMediaPlayer_eventSetPlayerOptionInString_Parms
		{
			FString key;
			FString value;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_value;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSetPlayerOptionInString_Parms, key), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSetPlayerOptionInString_Parms, value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSetPlayerOptionInString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::NewProp_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SetPlayerOptionInString", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::IMediaPlayer_eventSetPlayerOptionInString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::IMediaPlayer_eventSetPlayerOptionInString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics
	{
		struct IMediaPlayer_eventSetRenderMode_Parms
		{
			ERENDER_MODE_TYPE renderMode;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_renderMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_renderMode;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::NewProp_renderMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::NewProp_renderMode = { "renderMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSetRenderMode_Parms, renderMode), Z_Construct_UEnum_AgoraPlugin_ERENDER_MODE_TYPE, METADATA_PARAMS(0, nullptr) }; // 3992192896
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSetRenderMode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::NewProp_renderMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::NewProp_renderMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SetRenderMode", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::IMediaPlayer_eventSetRenderMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::IMediaPlayer_eventSetRenderMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SetRenderMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SetRenderMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics
	{
		struct IMediaPlayer_eventSetSoundPositionParams_Parms
		{
			float pan;
			float gain;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_pan;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gain;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::NewProp_pan = { "pan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSetSoundPositionParams_Parms, pan), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::NewProp_gain = { "gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSetSoundPositionParams_Parms, gain), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSetSoundPositionParams_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::NewProp_pan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::NewProp_gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SetSoundPositionParams", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::IMediaPlayer_eventSetSoundPositionParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::IMediaPlayer_eventSetSoundPositionParams_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics
	{
		struct IMediaPlayer_eventSetSpatialAudioParams_Parms
		{
			FSpatialAudioParams params;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_params;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::NewProp_params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::NewProp_params = { "params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSetSpatialAudioParams_Parms, params), Z_Construct_UScriptStruct_FSpatialAudioParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::NewProp_params_MetaData), Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::NewProp_params_MetaData) }; // 3447389370
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSetSpatialAudioParams_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::NewProp_params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SetSpatialAudioParams", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::IMediaPlayer_eventSetSpatialAudioParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::IMediaPlayer_eventSetSpatialAudioParams_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SetView_Statics
	{
		struct IMediaPlayer_eventSetView_Parms
		{
			int64 view;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_view;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UIMediaPlayer_SetView_Statics::NewProp_view = { "view", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSetView_Parms, view), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SetView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSetView_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SetView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetView_Statics::NewProp_view,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SetView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SetView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SetView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SetView", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_SetView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_SetView_Statics::IMediaPlayer_eventSetView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_SetView_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SetView_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_SetView_Statics::IMediaPlayer_eventSetView_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SetView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SetView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_Stop_Statics
	{
		struct IMediaPlayer_eventStop_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_Stop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventStop_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_Stop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_Stop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "Stop", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_Stop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Stop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_Stop_Statics::IMediaPlayer_eventStop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_Stop_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_Stop_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_Stop_Statics::IMediaPlayer_eventStop_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics
	{
		struct IMediaPlayer_eventSwitchAgoraCDNLineByIndex_Parms
		{
			int32 index;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSwitchAgoraCDNLineByIndex_Parms, index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSwitchAgoraCDNLineByIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SwitchAgoraCDNLineByIndex", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::IMediaPlayer_eventSwitchAgoraCDNLineByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::IMediaPlayer_eventSwitchAgoraCDNLineByIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics
	{
		struct IMediaPlayer_eventSwitchAgoraCDNSrc_Parms
		{
			FString src;
			bool syncPts;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_src;
		static void NewProp_syncPts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_syncPts;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSwitchAgoraCDNSrc_Parms, src), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_syncPts_SetBit(void* Obj)
	{
		((IMediaPlayer_eventSwitchAgoraCDNSrc_Parms*)Obj)->syncPts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_syncPts = { "syncPts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IMediaPlayer_eventSwitchAgoraCDNSrc_Parms), &Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_syncPts_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSwitchAgoraCDNSrc_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_src,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_syncPts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SwitchAgoraCDNSrc", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::IMediaPlayer_eventSwitchAgoraCDNSrc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::IMediaPlayer_eventSwitchAgoraCDNSrc_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics
	{
		struct IMediaPlayer_eventSwitchSrc_Parms
		{
			FString src;
			bool syncPts;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_src;
		static void NewProp_syncPts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_syncPts;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSwitchSrc_Parms, src), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::NewProp_syncPts_SetBit(void* Obj)
	{
		((IMediaPlayer_eventSwitchSrc_Parms*)Obj)->syncPts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::NewProp_syncPts = { "syncPts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IMediaPlayer_eventSwitchSrc_Parms), &Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::NewProp_syncPts_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventSwitchSrc_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::NewProp_src,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::NewProp_syncPts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "SwitchSrc", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::IMediaPlayer_eventSwitchSrc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::IMediaPlayer_eventSwitchSrc_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_SwitchSrc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_SwitchSrc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics
	{
		struct IMediaPlayer_eventTakeScreenshot_Parms
		{
			FString filename;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_filename;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics::NewProp_filename = { "filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventTakeScreenshot_Parms, filename), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventTakeScreenshot_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics::NewProp_filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "TakeScreenshot", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics::IMediaPlayer_eventTakeScreenshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics::IMediaPlayer_eventTakeScreenshot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics
	{
		struct IMediaPlayer_eventUnloadSrc_Parms
		{
			FString src;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_src;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventUnloadSrc_Parms, src), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventUnloadSrc_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics::NewProp_src,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "UnloadSrc", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics::IMediaPlayer_eventUnloadSrc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics::IMediaPlayer_eventUnloadSrc_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_UnloadSrc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_UnloadSrc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics
	{
		struct IMediaPlayer_eventUnregisterAudioFrameObserver_Parms
		{
			UIAudioPcmFrameSink* observer;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_observer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics::NewProp_observer = { "observer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventUnregisterAudioFrameObserver_Parms, observer), Z_Construct_UClass_UIAudioPcmFrameSink_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventUnregisterAudioFrameObserver_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics::NewProp_observer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "UnregisterAudioFrameObserver", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics::IMediaPlayer_eventUnregisterAudioFrameObserver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics::IMediaPlayer_eventUnregisterAudioFrameObserver_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics
	{
		struct IMediaPlayer_eventUnregisterMediaPlayerAudioSpectrumObserver_Parms
		{
			UIAudioSpectrumObserver* observer;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_observer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics::NewProp_observer = { "observer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventUnregisterMediaPlayerAudioSpectrumObserver_Parms, observer), Z_Construct_UClass_UIAudioSpectrumObserver_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventUnregisterMediaPlayerAudioSpectrumObserver_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics::NewProp_observer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "UnregisterMediaPlayerAudioSpectrumObserver", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics::IMediaPlayer_eventUnregisterMediaPlayerAudioSpectrumObserver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics::IMediaPlayer_eventUnregisterMediaPlayerAudioSpectrumObserver_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics
	{
		struct IMediaPlayer_eventUnregisterPlayerSourceObserver_Parms
		{
			UIMediaPlayerSourceObserver* observer;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_observer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics::NewProp_observer = { "observer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventUnregisterPlayerSourceObserver_Parms, observer), Z_Construct_UClass_UIMediaPlayerSourceObserver_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventUnregisterPlayerSourceObserver_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics::NewProp_observer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "UnregisterPlayerSourceObserver", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics::IMediaPlayer_eventUnregisterPlayerSourceObserver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics::IMediaPlayer_eventUnregisterPlayerSourceObserver_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics
	{
		struct IMediaPlayer_eventUnregisterVideoFrameObserver_Parms
		{
			UIVideoFrameObserver* observer;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_observer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics::NewProp_observer = { "observer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventUnregisterVideoFrameObserver_Parms, observer), Z_Construct_UClass_UIVideoFrameObserver_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayer_eventUnregisterVideoFrameObserver_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics::NewProp_observer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayer, nullptr, "UnregisterVideoFrameObserver", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics::IMediaPlayer_eventUnregisterVideoFrameObserver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics::IMediaPlayer_eventUnregisterVideoFrameObserver_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIMediaPlayer);
	UClass* Z_Construct_UClass_UIMediaPlayer_NoRegister()
	{
		return UIMediaPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UIMediaPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIMediaPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UIMediaPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIMediaPlayer_AdjustPlayoutVolume, "AdjustPlayoutVolume" }, // 1742611176
		{ &Z_Construct_UFunction_UIMediaPlayer_AdjustPublishSignalVolume, "AdjustPublishSignalVolume" }, // 4141609241
		{ &Z_Construct_UFunction_UIMediaPlayer_EnableAutoSwitchAgoraCDN, "EnableAutoSwitchAgoraCDN" }, // 1274225804
		{ &Z_Construct_UFunction_UIMediaPlayer_GetAgoraCDNLineCount, "GetAgoraCDNLineCount" }, // 162907667
		{ &Z_Construct_UFunction_UIMediaPlayer_GetCurrentAgoraCDNIndex, "GetCurrentAgoraCDNIndex" }, // 1316810951
		{ &Z_Construct_UFunction_UIMediaPlayer_GetDuration, "GetDuration" }, // 2851211488
		{ &Z_Construct_UFunction_UIMediaPlayer_GetMediaPlayerId, "GetMediaPlayerId" }, // 1393394432
		{ &Z_Construct_UFunction_UIMediaPlayer_GetMute, "GetMute" }, // 4021826952
		{ &Z_Construct_UFunction_UIMediaPlayer_GetPlayerSdkVersion, "GetPlayerSdkVersion" }, // 2396661111
		{ &Z_Construct_UFunction_UIMediaPlayer_GetPlayoutVolume, "GetPlayoutVolume" }, // 2463376746
		{ &Z_Construct_UFunction_UIMediaPlayer_GetPlayPosition, "GetPlayPosition" }, // 2223320949
		{ &Z_Construct_UFunction_UIMediaPlayer_GetPlaySrc, "GetPlaySrc" }, // 4056231560
		{ &Z_Construct_UFunction_UIMediaPlayer_GetPublishSignalVolume, "GetPublishSignalVolume" }, // 499354398
		{ &Z_Construct_UFunction_UIMediaPlayer_GetState, "GetState" }, // 4151863891
		{ &Z_Construct_UFunction_UIMediaPlayer_GetStreamCount, "GetStreamCount" }, // 3101440907
		{ &Z_Construct_UFunction_UIMediaPlayer_GetStreamInfo, "GetStreamInfo" }, // 3221588368
		{ &Z_Construct_UFunction_UIMediaPlayer_Mute, "Mute" }, // 518235074
		{ &Z_Construct_UFunction_UIMediaPlayer_Open, "Open" }, // 1334741485
		{ &Z_Construct_UFunction_UIMediaPlayer_OpenWithAgoraCDNSrc, "OpenWithAgoraCDNSrc" }, // 3327947024
		{ &Z_Construct_UFunction_UIMediaPlayer_OpenWithCustomSource, "OpenWithCustomSource" }, // 1649837200
		{ &Z_Construct_UFunction_UIMediaPlayer_OpenWithMediaSource, "OpenWithMediaSource" }, // 1078262110
		{ &Z_Construct_UFunction_UIMediaPlayer_Pause, "Pause" }, // 2068785
		{ &Z_Construct_UFunction_UIMediaPlayer_Play, "Play" }, // 1487971390
		{ &Z_Construct_UFunction_UIMediaPlayer_PlayPreloadedSrc, "PlayPreloadedSrc" }, // 2601648051
		{ &Z_Construct_UFunction_UIMediaPlayer_PreloadSrc, "PreloadSrc" }, // 995270136
		{ &Z_Construct_UFunction_UIMediaPlayer_RegisterAudioFrameObserver, "RegisterAudioFrameObserver" }, // 1061172539
		{ &Z_Construct_UFunction_UIMediaPlayer_RegisterMediaPlayerAudioSpectrumObserver, "RegisterMediaPlayerAudioSpectrumObserver" }, // 2913888744
		{ &Z_Construct_UFunction_UIMediaPlayer_RegisterPlayerSourceObserver, "RegisterPlayerSourceObserver" }, // 3453587544
		{ &Z_Construct_UFunction_UIMediaPlayer_RegisterVideoFrameObserver, "RegisterVideoFrameObserver" }, // 2424853890
		{ &Z_Construct_UFunction_UIMediaPlayer_RenewAgoraCDNSrcToken, "RenewAgoraCDNSrcToken" }, // 3781127015
		{ &Z_Construct_UFunction_UIMediaPlayer_Resume, "Resume" }, // 1786880318
		{ &Z_Construct_UFunction_UIMediaPlayer_Seek, "Seek" }, // 3443355124
		{ &Z_Construct_UFunction_UIMediaPlayer_SelectAudioTrack, "SelectAudioTrack" }, // 104225004
		{ &Z_Construct_UFunction_UIMediaPlayer_SelectInternalSubtitle, "SelectInternalSubtitle" }, // 1521464099
		{ &Z_Construct_UFunction_UIMediaPlayer_SetAudioDualMonoMode, "SetAudioDualMonoMode" }, // 3938046772
		{ &Z_Construct_UFunction_UIMediaPlayer_SetAudioPitch, "SetAudioPitch" }, // 3461277406
		{ &Z_Construct_UFunction_UIMediaPlayer_SetExternalSubtitle, "SetExternalSubtitle" }, // 4050460753
		{ &Z_Construct_UFunction_UIMediaPlayer_SetLoopCount, "SetLoopCount" }, // 1244714662
		{ &Z_Construct_UFunction_UIMediaPlayer_SetPlaybackSpeed, "SetPlaybackSpeed" }, // 2910600690
		{ &Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInInt, "SetPlayerOptionInInt" }, // 1218764037
		{ &Z_Construct_UFunction_UIMediaPlayer_SetPlayerOptionInString, "SetPlayerOptionInString" }, // 3166680947
		{ &Z_Construct_UFunction_UIMediaPlayer_SetRenderMode, "SetRenderMode" }, // 2951261267
		{ &Z_Construct_UFunction_UIMediaPlayer_SetSoundPositionParams, "SetSoundPositionParams" }, // 1200640096
		{ &Z_Construct_UFunction_UIMediaPlayer_SetSpatialAudioParams, "SetSpatialAudioParams" }, // 454778602
		{ &Z_Construct_UFunction_UIMediaPlayer_SetView, "SetView" }, // 635874990
		{ &Z_Construct_UFunction_UIMediaPlayer_Stop, "Stop" }, // 1996286287
		{ &Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNLineByIndex, "SwitchAgoraCDNLineByIndex" }, // 3621136543
		{ &Z_Construct_UFunction_UIMediaPlayer_SwitchAgoraCDNSrc, "SwitchAgoraCDNSrc" }, // 1211197150
		{ &Z_Construct_UFunction_UIMediaPlayer_SwitchSrc, "SwitchSrc" }, // 2367564830
		{ &Z_Construct_UFunction_UIMediaPlayer_TakeScreenshot, "TakeScreenshot" }, // 4123604200
		{ &Z_Construct_UFunction_UIMediaPlayer_UnloadSrc, "UnloadSrc" }, // 1191206516
		{ &Z_Construct_UFunction_UIMediaPlayer_UnregisterAudioFrameObserver, "UnregisterAudioFrameObserver" }, // 1222175801
		{ &Z_Construct_UFunction_UIMediaPlayer_UnregisterMediaPlayerAudioSpectrumObserver, "UnregisterMediaPlayerAudioSpectrumObserver" }, // 1909690928
		{ &Z_Construct_UFunction_UIMediaPlayer_UnregisterPlayerSourceObserver, "UnregisterPlayerSourceObserver" }, // 2997409704
		{ &Z_Construct_UFunction_UIMediaPlayer_UnregisterVideoFrameObserver, "UnregisterVideoFrameObserver" }, // 3473165497
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIMediaPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIMediaPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIMediaPlayer_Statics::ClassParams = {
		&UIMediaPlayer::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UIMediaPlayer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UIMediaPlayer()
	{
		if (!Z_Registration_Info_UClass_UIMediaPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIMediaPlayer.OuterSingleton, Z_Construct_UClass_UIMediaPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIMediaPlayer.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UClass* StaticClass<UIMediaPlayer>()
	{
		return UIMediaPlayer::StaticClass();
	}
	UIMediaPlayer::UIMediaPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIMediaPlayer);
	UIMediaPlayer::~UIMediaPlayer() {}
	DEFINE_FUNCTION(UIMediaPlayerCacheManager::execGetCacheFileCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCacheFileCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayerCacheManager::execGetMaxCacheFileSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetMaxCacheFileSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayerCacheManager::execGetMaxCacheFileCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxCacheFileCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayerCacheManager::execGetCacheDir)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_GET_PROPERTY(FIntProperty,Z_Param_length);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCacheDir(Z_Param_path,Z_Param_length);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayerCacheManager::execEnableAutoRemoveCache)
	{
		P_GET_UBOOL(Z_Param_enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->EnableAutoRemoveCache(Z_Param_enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayerCacheManager::execSetMaxCacheFileSize)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_cacheSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetMaxCacheFileSize(Z_Param_cacheSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayerCacheManager::execSetMaxCacheFileCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetMaxCacheFileCount(Z_Param_count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayerCacheManager::execSetCacheDir)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetCacheDir(Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayerCacheManager::execRemoveCacheByUri)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_uri);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RemoveCacheByUri(Z_Param_uri);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayerCacheManager::execRemoveOldCache)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RemoveOldCache();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIMediaPlayerCacheManager::execRemoveAllCaches)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RemoveAllCaches();
		P_NATIVE_END;
	}
	void UIMediaPlayerCacheManager::StaticRegisterNativesUIMediaPlayerCacheManager()
	{
		UClass* Class = UIMediaPlayerCacheManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableAutoRemoveCache", &UIMediaPlayerCacheManager::execEnableAutoRemoveCache },
			{ "GetCacheDir", &UIMediaPlayerCacheManager::execGetCacheDir },
			{ "GetCacheFileCount", &UIMediaPlayerCacheManager::execGetCacheFileCount },
			{ "GetMaxCacheFileCount", &UIMediaPlayerCacheManager::execGetMaxCacheFileCount },
			{ "GetMaxCacheFileSize", &UIMediaPlayerCacheManager::execGetMaxCacheFileSize },
			{ "RemoveAllCaches", &UIMediaPlayerCacheManager::execRemoveAllCaches },
			{ "RemoveCacheByUri", &UIMediaPlayerCacheManager::execRemoveCacheByUri },
			{ "RemoveOldCache", &UIMediaPlayerCacheManager::execRemoveOldCache },
			{ "SetCacheDir", &UIMediaPlayerCacheManager::execSetCacheDir },
			{ "SetMaxCacheFileCount", &UIMediaPlayerCacheManager::execSetMaxCacheFileCount },
			{ "SetMaxCacheFileSize", &UIMediaPlayerCacheManager::execSetMaxCacheFileSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics
	{
		struct IMediaPlayerCacheManager_eventEnableAutoRemoveCache_Parms
		{
			bool enable;
			int32 ReturnValue;
		};
		static void NewProp_enable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_enable;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::NewProp_enable_SetBit(void* Obj)
	{
		((IMediaPlayerCacheManager_eventEnableAutoRemoveCache_Parms*)Obj)->enable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::NewProp_enable = { "enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IMediaPlayerCacheManager_eventEnableAutoRemoveCache_Parms), &Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::NewProp_enable_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventEnableAutoRemoveCache_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::NewProp_enable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayerCacheManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayerCacheManager, nullptr, "EnableAutoRemoveCache", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::IMediaPlayerCacheManager_eventEnableAutoRemoveCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::IMediaPlayerCacheManager_eventEnableAutoRemoveCache_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics
	{
		struct IMediaPlayerCacheManager_eventGetCacheDir_Parms
		{
			FString path;
			int32 length;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_path;
		static const UECodeGen_Private::FIntPropertyParams NewProp_length;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventGetCacheDir_Parms, path), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventGetCacheDir_Parms, length), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventGetCacheDir_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::NewProp_path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::NewProp_length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayerCacheManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayerCacheManager, nullptr, "GetCacheDir", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::IMediaPlayerCacheManager_eventGetCacheDir_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::IMediaPlayerCacheManager_eventGetCacheDir_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount_Statics
	{
		struct IMediaPlayerCacheManager_eventGetCacheFileCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventGetCacheFileCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayerCacheManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayerCacheManager, nullptr, "GetCacheFileCount", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount_Statics::IMediaPlayerCacheManager_eventGetCacheFileCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount_Statics::IMediaPlayerCacheManager_eventGetCacheFileCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount_Statics
	{
		struct IMediaPlayerCacheManager_eventGetMaxCacheFileCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventGetMaxCacheFileCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayerCacheManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayerCacheManager, nullptr, "GetMaxCacheFileCount", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount_Statics::IMediaPlayerCacheManager_eventGetMaxCacheFileCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount_Statics::IMediaPlayerCacheManager_eventGetMaxCacheFileCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize_Statics
	{
		struct IMediaPlayerCacheManager_eventGetMaxCacheFileSize_Parms
		{
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventGetMaxCacheFileSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayerCacheManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayerCacheManager, nullptr, "GetMaxCacheFileSize", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize_Statics::IMediaPlayerCacheManager_eventGetMaxCacheFileSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize_Statics::IMediaPlayerCacheManager_eventGetMaxCacheFileSize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches_Statics
	{
		struct IMediaPlayerCacheManager_eventRemoveAllCaches_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventRemoveAllCaches_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayerCacheManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayerCacheManager, nullptr, "RemoveAllCaches", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches_Statics::IMediaPlayerCacheManager_eventRemoveAllCaches_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches_Statics::IMediaPlayerCacheManager_eventRemoveAllCaches_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics
	{
		struct IMediaPlayerCacheManager_eventRemoveCacheByUri_Parms
		{
			FString uri;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_uri;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics::NewProp_uri = { "uri", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventRemoveCacheByUri_Parms, uri), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventRemoveCacheByUri_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics::NewProp_uri,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayerCacheManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayerCacheManager, nullptr, "RemoveCacheByUri", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics::IMediaPlayerCacheManager_eventRemoveCacheByUri_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics::IMediaPlayerCacheManager_eventRemoveCacheByUri_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache_Statics
	{
		struct IMediaPlayerCacheManager_eventRemoveOldCache_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventRemoveOldCache_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayerCacheManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayerCacheManager, nullptr, "RemoveOldCache", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache_Statics::IMediaPlayerCacheManager_eventRemoveOldCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache_Statics::IMediaPlayerCacheManager_eventRemoveOldCache_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics
	{
		struct IMediaPlayerCacheManager_eventSetCacheDir_Parms
		{
			FString path;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_path;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventSetCacheDir_Parms, path), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventSetCacheDir_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics::NewProp_path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayerCacheManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayerCacheManager, nullptr, "SetCacheDir", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics::IMediaPlayerCacheManager_eventSetCacheDir_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics::IMediaPlayerCacheManager_eventSetCacheDir_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics
	{
		struct IMediaPlayerCacheManager_eventSetMaxCacheFileCount_Parms
		{
			int32 count;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_count;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventSetMaxCacheFileCount_Parms, count), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventSetMaxCacheFileCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics::NewProp_count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayerCacheManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayerCacheManager, nullptr, "SetMaxCacheFileCount", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics::IMediaPlayerCacheManager_eventSetMaxCacheFileCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics::IMediaPlayerCacheManager_eventSetMaxCacheFileCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics
	{
		struct IMediaPlayerCacheManager_eventSetMaxCacheFileSize_Parms
		{
			int64 cacheSize;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_cacheSize;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics::NewProp_cacheSize = { "cacheSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventSetMaxCacheFileSize_Parms, cacheSize), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMediaPlayerCacheManager_eventSetMaxCacheFileSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics::NewProp_cacheSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayerCacheManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMediaPlayerCacheManager, nullptr, "SetMaxCacheFileSize", nullptr, nullptr, Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics::IMediaPlayerCacheManager_eventSetMaxCacheFileSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics::IMediaPlayerCacheManager_eventSetMaxCacheFileSize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIMediaPlayerCacheManager);
	UClass* Z_Construct_UClass_UIMediaPlayerCacheManager_NoRegister()
	{
		return UIMediaPlayerCacheManager::StaticClass();
	}
	struct Z_Construct_UClass_UIMediaPlayerCacheManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIMediaPlayerCacheManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerCacheManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UIMediaPlayerCacheManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIMediaPlayerCacheManager_EnableAutoRemoveCache, "EnableAutoRemoveCache" }, // 4121922221
		{ &Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheDir, "GetCacheDir" }, // 1094961110
		{ &Z_Construct_UFunction_UIMediaPlayerCacheManager_GetCacheFileCount, "GetCacheFileCount" }, // 3702770275
		{ &Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileCount, "GetMaxCacheFileCount" }, // 2611859770
		{ &Z_Construct_UFunction_UIMediaPlayerCacheManager_GetMaxCacheFileSize, "GetMaxCacheFileSize" }, // 1851481499
		{ &Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveAllCaches, "RemoveAllCaches" }, // 1208015175
		{ &Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveCacheByUri, "RemoveCacheByUri" }, // 3953373907
		{ &Z_Construct_UFunction_UIMediaPlayerCacheManager_RemoveOldCache, "RemoveOldCache" }, // 3046860452
		{ &Z_Construct_UFunction_UIMediaPlayerCacheManager_SetCacheDir, "SetCacheDir" }, // 2955141005
		{ &Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileCount, "SetMaxCacheFileCount" }, // 1860512202
		{ &Z_Construct_UFunction_UIMediaPlayerCacheManager_SetMaxCacheFileSize, "SetMaxCacheFileSize" }, // 591036419
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerCacheManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaPlayerCacheManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraMediaPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIMediaPlayerCacheManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIMediaPlayerCacheManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIMediaPlayerCacheManager_Statics::ClassParams = {
		&UIMediaPlayerCacheManager::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaPlayerCacheManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UIMediaPlayerCacheManager_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UIMediaPlayerCacheManager()
	{
		if (!Z_Registration_Info_UClass_UIMediaPlayerCacheManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIMediaPlayerCacheManager.OuterSingleton, Z_Construct_UClass_UIMediaPlayerCacheManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIMediaPlayerCacheManager.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UClass* StaticClass<UIMediaPlayerCacheManager>()
	{
		return UIMediaPlayerCacheManager::StaticClass();
	}
	UIMediaPlayerCacheManager::UIMediaPlayerCacheManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIMediaPlayerCacheManager);
	UIMediaPlayerCacheManager::~UIMediaPlayerCacheManager() {}
	struct Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_Statics::EnumInfo[] = {
		{ EAUDIO_DUAL_MONO_MODE_StaticEnum, TEXT("EAUDIO_DUAL_MONO_MODE"), &Z_Registration_Info_UEnum_EAUDIO_DUAL_MONO_MODE, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3024373118U) },
		{ EMEDIA_STREAM_TYPE_StaticEnum, TEXT("EMEDIA_STREAM_TYPE"), &Z_Registration_Info_UEnum_EMEDIA_STREAM_TYPE, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 467534559U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_Statics::ScriptStructInfo[] = {
		{ FAgoraMediaSource::StaticStruct, Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewStructOps, TEXT("AgoraMediaSource"), &Z_Registration_Info_UScriptStruct_AgoraMediaSource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAgoraMediaSource), 3878423339U) },
		{ FPlayerStreamInfo::StaticStruct, Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewStructOps, TEXT("PlayerStreamInfo"), &Z_Registration_Info_UScriptStruct_PlayerStreamInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerStreamInfo), 3089932895U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIMediaPlayer, UIMediaPlayer::StaticClass, TEXT("UIMediaPlayer"), &Z_Registration_Info_UClass_UIMediaPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIMediaPlayer), 1543283669U) },
		{ Z_Construct_UClass_UIMediaPlayerCacheManager, UIMediaPlayerCacheManager::StaticClass, TEXT("UIMediaPlayerCacheManager"), &Z_Registration_Info_UClass_UIMediaPlayerCacheManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIMediaPlayerCacheManager), 1676469690U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_4110229113(TEXT("/Script/AgoraPlugin"),
		Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
