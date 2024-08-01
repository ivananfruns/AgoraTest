// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/IFrameObserver.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/URtcEngineProxyCompatibility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIFrameObserver() {}
// Cross Module References
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIAudioFrameObserver();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIAudioFrameObserver_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIAudioPcmFrameSink();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIAudioPcmFrameSink_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIAudioSpectrumObserver();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIAudioSpectrumObserver_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIVideoFrameObserver();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIVideoFrameObserver_NoRegister();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EAUDIO_FRAME_TYPE();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EBYTES_PER_SAMPLE();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EVIDEO_CODEC_TYPE();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EVIDEO_FRAME_TYPE();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EVIDEO_PIXEL_FORMAT();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EVIDEO_SOURCE_TYPE();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EVIDEO_STREAM_TYPE();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_GetMirrorApplied__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_GetMixedAudioParams__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_GetObservedAudioFramePosition__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_GetObservedFramePosition__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_GetPlaybackAudioParams__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_GetRecordAudioParams__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_GetRotationApplied__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_GetVideoFormatPreference__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_GetVideoFrameProcessMode__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_IsExternal__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnCaptureVideoFrame__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnFrame__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnLocalAudioSpectrum__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnMediaPlayerVideoFrame__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioFrame__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrame__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrameBeforeMixing__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPreEncodeVideoFrame__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioFrame__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnRemoteAudioSpectrum__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnRenderVideoFrame__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnTranscodedVideoFrame__DelegateSignature();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAudioFrame();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAudioPcmFrame();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAudioSpectrumData();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FEncodedVideoFrameInfo();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FENUMWRAP_VIDEO_ORIENTATION();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUserAudioSpectrumInfo();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVideoFrame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AgoraPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBYTES_PER_SAMPLE;
	static UEnum* EBYTES_PER_SAMPLE_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBYTES_PER_SAMPLE.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBYTES_PER_SAMPLE.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AgoraPlugin_EBYTES_PER_SAMPLE, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EBYTES_PER_SAMPLE"));
		}
		return Z_Registration_Info_UEnum_EBYTES_PER_SAMPLE.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UEnum* StaticEnum<EBYTES_PER_SAMPLE>()
	{
		return EBYTES_PER_SAMPLE_StaticEnum();
	}
	struct Z_Construct_UEnum_AgoraPlugin_EBYTES_PER_SAMPLE_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AgoraPlugin_EBYTES_PER_SAMPLE_Statics::Enumerators[] = {
		{ "EBYTES_PER_SAMPLE::TWO_BYTES_PER_NULL", (int64)EBYTES_PER_SAMPLE::TWO_BYTES_PER_NULL },
		{ "EBYTES_PER_SAMPLE::TWO_BYTES_PER_SAMPLE", (int64)EBYTES_PER_SAMPLE::TWO_BYTES_PER_SAMPLE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AgoraPlugin_EBYTES_PER_SAMPLE_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
		{ "TWO_BYTES_PER_NULL.Name", "EBYTES_PER_SAMPLE::TWO_BYTES_PER_NULL" },
		{ "TWO_BYTES_PER_SAMPLE.Name", "EBYTES_PER_SAMPLE::TWO_BYTES_PER_SAMPLE" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AgoraPlugin_EBYTES_PER_SAMPLE_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		"EBYTES_PER_SAMPLE",
		"EBYTES_PER_SAMPLE",
		Z_Construct_UEnum_AgoraPlugin_EBYTES_PER_SAMPLE_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EBYTES_PER_SAMPLE_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EBYTES_PER_SAMPLE_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AgoraPlugin_EBYTES_PER_SAMPLE_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AgoraPlugin_EBYTES_PER_SAMPLE()
	{
		if (!Z_Registration_Info_UEnum_EBYTES_PER_SAMPLE.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBYTES_PER_SAMPLE.InnerSingleton, Z_Construct_UEnum_AgoraPlugin_EBYTES_PER_SAMPLE_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBYTES_PER_SAMPLE.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioPcmFrame;
class UScriptStruct* FAudioPcmFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioPcmFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioPcmFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioPcmFrame, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("AudioPcmFrame"));
	}
	return Z_Registration_Info_UScriptStruct_AudioPcmFrame.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FAudioPcmFrame>()
{
	return FAudioPcmFrame::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAudioPcmFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_capture_timestamp_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_capture_timestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_samples_per_channel__MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_samples_per_channel_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sample_rate_hz__MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_sample_rate_hz_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_num_channels__MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_num_channels_;
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_per_sample_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bytes_per_sample_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_bytes_per_sample;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_data__Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data__MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_data_;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioPcmFrame>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_capture_timestamp_MetaData[] = {
		{ "Category", "Agora|AudioPcmFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_capture_timestamp = { "capture_timestamp", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioPcmFrame, capture_timestamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_capture_timestamp_MetaData), Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_capture_timestamp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_samples_per_channel__MetaData[] = {
		{ "Category", "Agora|AudioPcmFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_samples_per_channel_ = { "samples_per_channel_", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioPcmFrame, samples_per_channel_), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_samples_per_channel__MetaData), Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_samples_per_channel__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_sample_rate_hz__MetaData[] = {
		{ "Category", "Agora|AudioPcmFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_sample_rate_hz_ = { "sample_rate_hz_", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioPcmFrame, sample_rate_hz_), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_sample_rate_hz__MetaData), Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_sample_rate_hz__MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_num_channels__MetaData[] = {
		{ "Category", "Agora|AudioPcmFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_num_channels_ = { "num_channels_", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioPcmFrame, num_channels_), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_num_channels__MetaData), Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_num_channels__MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_bytes_per_sample_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_bytes_per_sample_MetaData[] = {
		{ "Category", "Agora|AudioPcmFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_bytes_per_sample = { "bytes_per_sample", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioPcmFrame, bytes_per_sample), Z_Construct_UEnum_AgoraPlugin_EBYTES_PER_SAMPLE, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_bytes_per_sample_MetaData), Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_bytes_per_sample_MetaData) }; // 350425444
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_data__Inner = { "data_", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_data__MetaData[] = {
		{ "Category", "Agora|AudioPcmFrame" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*3840 * sizeof(int16_t)*/" },
#endif
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "3840 * sizeof(int16_t)" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_data_ = { "data_", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioPcmFrame, data_), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_data__MetaData), Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_data__MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_capture_timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_samples_per_channel_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_sample_rate_hz_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_num_channels_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_bytes_per_sample_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_bytes_per_sample,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_data__Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewProp_data_,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"AudioPcmFrame",
		Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::PropPointers),
		sizeof(FAudioPcmFrame),
		alignof(FAudioPcmFrame),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAudioPcmFrame()
	{
		if (!Z_Registration_Info_UScriptStruct_AudioPcmFrame.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioPcmFrame.InnerSingleton, Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AudioPcmFrame.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVIDEO_PIXEL_FORMAT;
	static UEnum* EVIDEO_PIXEL_FORMAT_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVIDEO_PIXEL_FORMAT.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVIDEO_PIXEL_FORMAT.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AgoraPlugin_EVIDEO_PIXEL_FORMAT, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EVIDEO_PIXEL_FORMAT"));
		}
		return Z_Registration_Info_UEnum_EVIDEO_PIXEL_FORMAT.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UEnum* StaticEnum<EVIDEO_PIXEL_FORMAT>()
	{
		return EVIDEO_PIXEL_FORMAT_StaticEnum();
	}
	struct Z_Construct_UEnum_AgoraPlugin_EVIDEO_PIXEL_FORMAT_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AgoraPlugin_EVIDEO_PIXEL_FORMAT_Statics::Enumerators[] = {
		{ "EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_DEFAULT", (int64)EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_DEFAULT },
		{ "EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_I420", (int64)EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_I420 },
		{ "EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_BGRA", (int64)EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_BGRA },
		{ "EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_NV21", (int64)EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_NV21 },
		{ "EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_RGBA", (int64)EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_RGBA },
		{ "EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_NV12", (int64)EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_NV12 },
		{ "EVIDEO_PIXEL_FORMAT::VIDEO_TEXTURE_2D", (int64)EVIDEO_PIXEL_FORMAT::VIDEO_TEXTURE_2D },
		{ "EVIDEO_PIXEL_FORMAT::VIDEO_TEXTURE_OES", (int64)EVIDEO_PIXEL_FORMAT::VIDEO_TEXTURE_OES },
		{ "EVIDEO_PIXEL_FORMAT::VIDEO_CVPIXEL_NV12", (int64)EVIDEO_PIXEL_FORMAT::VIDEO_CVPIXEL_NV12 },
		{ "EVIDEO_PIXEL_FORMAT::VIDEO_CVPIXEL_I420", (int64)EVIDEO_PIXEL_FORMAT::VIDEO_CVPIXEL_I420 },
		{ "EVIDEO_PIXEL_FORMAT::VIDEO_CVPIXEL_BGRA", (int64)EVIDEO_PIXEL_FORMAT::VIDEO_CVPIXEL_BGRA },
		{ "EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_I422", (int64)EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_I422 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AgoraPlugin_EVIDEO_PIXEL_FORMAT_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
		{ "VIDEO_CVPIXEL_BGRA.Name", "EVIDEO_PIXEL_FORMAT::VIDEO_CVPIXEL_BGRA" },
		{ "VIDEO_CVPIXEL_I420.Name", "EVIDEO_PIXEL_FORMAT::VIDEO_CVPIXEL_I420" },
		{ "VIDEO_CVPIXEL_NV12.Name", "EVIDEO_PIXEL_FORMAT::VIDEO_CVPIXEL_NV12" },
		{ "VIDEO_PIXEL_BGRA.Name", "EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_BGRA" },
		{ "VIDEO_PIXEL_DEFAULT.Name", "EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_DEFAULT" },
		{ "VIDEO_PIXEL_I420.Name", "EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_I420" },
		{ "VIDEO_PIXEL_I422.Name", "EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_I422" },
		{ "VIDEO_PIXEL_NV12.Name", "EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_NV12" },
		{ "VIDEO_PIXEL_NV21.Name", "EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_NV21" },
		{ "VIDEO_PIXEL_RGBA.Name", "EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_RGBA" },
		{ "VIDEO_TEXTURE_2D.Name", "EVIDEO_PIXEL_FORMAT::VIDEO_TEXTURE_2D" },
		{ "VIDEO_TEXTURE_OES.Name", "EVIDEO_PIXEL_FORMAT::VIDEO_TEXTURE_OES" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AgoraPlugin_EVIDEO_PIXEL_FORMAT_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		"EVIDEO_PIXEL_FORMAT",
		"EVIDEO_PIXEL_FORMAT",
		Z_Construct_UEnum_AgoraPlugin_EVIDEO_PIXEL_FORMAT_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EVIDEO_PIXEL_FORMAT_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EVIDEO_PIXEL_FORMAT_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AgoraPlugin_EVIDEO_PIXEL_FORMAT_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AgoraPlugin_EVIDEO_PIXEL_FORMAT()
	{
		if (!Z_Registration_Info_UEnum_EVIDEO_PIXEL_FORMAT.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVIDEO_PIXEL_FORMAT.InnerSingleton, Z_Construct_UEnum_AgoraPlugin_EVIDEO_PIXEL_FORMAT_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVIDEO_PIXEL_FORMAT.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VideoFrame;
class UScriptStruct* FVideoFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VideoFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VideoFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVideoFrame, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("VideoFrame"));
	}
	return Z_Registration_Info_UScriptStruct_VideoFrame.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FVideoFrame>()
{
	return FVideoFrame::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVideoFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_yStride_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_yStride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uStride_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_uStride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vStride_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_vStride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_rotation;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_yBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_yBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_yBuffer;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_uBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_uBuffer;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_vBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_vBuffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_renderTimeMs_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_renderTimeMs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_avsync_type_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_avsync_type;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_metadata_buffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_metadata_buffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_metadata_buffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_metadata_size_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_metadata_size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sharedContext_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_sharedContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_textureId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_textureId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_matrix_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_matrix_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_matrix;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_alphaBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_alphaBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_alphaBuffer;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_pixelBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pixelBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_pixelBuffer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoFrame_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVideoFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVideoFrame>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_type_MetaData[] = {
		{ "Category", "Agora|VideoFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVideoFrame, type), Z_Construct_UEnum_AgoraPlugin_EVIDEO_PIXEL_FORMAT, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_type_MetaData), Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_type_MetaData) }; // 1622204650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_width_MetaData[] = {
		{ "Category", "Agora|VideoFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVideoFrame, width), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_width_MetaData), Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_width_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_height_MetaData[] = {
		{ "Category", "Agora|VideoFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVideoFrame, height), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_height_MetaData), Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_height_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_yStride_MetaData[] = {
		{ "Category", "Agora|VideoFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_yStride = { "yStride", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVideoFrame, yStride), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_yStride_MetaData), Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_yStride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_uStride_MetaData[] = {
		{ "Category", "Agora|VideoFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_uStride = { "uStride", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVideoFrame, uStride), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_uStride_MetaData), Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_uStride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_vStride_MetaData[] = {
		{ "Category", "Agora|VideoFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_vStride = { "vStride", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVideoFrame, vStride), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_vStride_MetaData), Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_vStride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_rotation_MetaData[] = {
		{ "Category", "Agora|VideoFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVideoFrame, rotation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_rotation_MetaData), Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_rotation_MetaData) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_yBuffer_Inner = { "yBuffer", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_yBuffer_MetaData[] = {
		{ "Category", "Agora|VideoFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_yBuffer = { "yBuffer", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVideoFrame, yBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_yBuffer_MetaData), Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_yBuffer_MetaData) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_uBuffer_Inner = { "uBuffer", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_uBuffer_MetaData[] = {
		{ "Category", "Agora|VideoFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_uBuffer = { "uBuffer", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVideoFrame, uBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_uBuffer_MetaData), Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_uBuffer_MetaData) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_vBuffer_Inner = { "vBuffer", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_vBuffer_MetaData[] = {
		{ "Category", "Agora|VideoFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_vBuffer = { "vBuffer", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVideoFrame, vBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_vBuffer_MetaData), Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_vBuffer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_renderTimeMs_MetaData[] = {
		{ "Category", "Agora|VideoFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_renderTimeMs = { "renderTimeMs", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVideoFrame, renderTimeMs), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_renderTimeMs_MetaData), Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_renderTimeMs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_avsync_type_MetaData[] = {
		{ "Category", "Agora|VideoFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_avsync_type = { "avsync_type", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVideoFrame, avsync_type), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_avsync_type_MetaData), Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_avsync_type_MetaData) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_metadata_buffer_Inner = { "metadata_buffer", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_metadata_buffer_MetaData[] = {
		{ "Category", "Agora|VideoFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_metadata_buffer = { "metadata_buffer", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVideoFrame, metadata_buffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_metadata_buffer_MetaData), Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_metadata_buffer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_metadata_size_MetaData[] = {
		{ "Category", "Agora|VideoFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_metadata_size = { "metadata_size", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVideoFrame, metadata_size), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_metadata_size_MetaData), Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_metadata_size_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_sharedContext_MetaData[] = {
		{ "Category", "Agora|VideoFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_sharedContext = { "sharedContext", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVideoFrame, sharedContext), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_sharedContext_MetaData), Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_sharedContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_textureId_MetaData[] = {
		{ "Category", "Agora|VideoFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_textureId = { "textureId", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVideoFrame, textureId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_textureId_MetaData), Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_textureId_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_matrix_Inner = { "matrix", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_matrix_MetaData[] = {
		{ "Category", "Agora|VideoFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_matrix = { "matrix", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVideoFrame, matrix), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_matrix_MetaData), Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_matrix_MetaData) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_alphaBuffer_Inner = { "alphaBuffer", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_alphaBuffer_MetaData[] = {
		{ "Category", "Agora|VideoFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_alphaBuffer = { "alphaBuffer", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVideoFrame, alphaBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_alphaBuffer_MetaData), Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_alphaBuffer_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_pixelBuffer_Inner = { "pixelBuffer", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_pixelBuffer_MetaData[] = {
		{ "Category", "Agora|VideoFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_pixelBuffer = { "pixelBuffer", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVideoFrame, pixelBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_pixelBuffer_MetaData), Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_pixelBuffer_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVideoFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_yStride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_uStride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_vStride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_yBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_yBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_uBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_uBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_vBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_vBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_renderTimeMs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_avsync_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_metadata_buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_metadata_buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_metadata_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_sharedContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_textureId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_matrix_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_matrix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_alphaBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_alphaBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_pixelBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoFrame_Statics::NewProp_pixelBuffer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVideoFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"VideoFrame",
		Z_Construct_UScriptStruct_FVideoFrame_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoFrame_Statics::PropPointers),
		sizeof(FVideoFrame),
		alignof(FVideoFrame),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoFrame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVideoFrame_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoFrame_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVideoFrame()
	{
		if (!Z_Registration_Info_UScriptStruct_VideoFrame.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VideoFrame.InnerSingleton, Z_Construct_UScriptStruct_FVideoFrame_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VideoFrame.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAUDIO_FRAME_TYPE;
	static UEnum* EAUDIO_FRAME_TYPE_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAUDIO_FRAME_TYPE.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAUDIO_FRAME_TYPE.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AgoraPlugin_EAUDIO_FRAME_TYPE, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EAUDIO_FRAME_TYPE"));
		}
		return Z_Registration_Info_UEnum_EAUDIO_FRAME_TYPE.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UEnum* StaticEnum<EAUDIO_FRAME_TYPE>()
	{
		return EAUDIO_FRAME_TYPE_StaticEnum();
	}
	struct Z_Construct_UEnum_AgoraPlugin_EAUDIO_FRAME_TYPE_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AgoraPlugin_EAUDIO_FRAME_TYPE_Statics::Enumerators[] = {
		{ "EAUDIO_FRAME_TYPE::FRAME_TYPE_PCM16", (int64)EAUDIO_FRAME_TYPE::FRAME_TYPE_PCM16 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AgoraPlugin_EAUDIO_FRAME_TYPE_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FRAME_TYPE_PCM16.Name", "EAUDIO_FRAME_TYPE::FRAME_TYPE_PCM16" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AgoraPlugin_EAUDIO_FRAME_TYPE_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		"EAUDIO_FRAME_TYPE",
		"EAUDIO_FRAME_TYPE",
		Z_Construct_UEnum_AgoraPlugin_EAUDIO_FRAME_TYPE_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EAUDIO_FRAME_TYPE_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EAUDIO_FRAME_TYPE_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AgoraPlugin_EAUDIO_FRAME_TYPE_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AgoraPlugin_EAUDIO_FRAME_TYPE()
	{
		if (!Z_Registration_Info_UEnum_EAUDIO_FRAME_TYPE.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAUDIO_FRAME_TYPE.InnerSingleton, Z_Construct_UEnum_AgoraPlugin_EAUDIO_FRAME_TYPE_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAUDIO_FRAME_TYPE.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioFrame;
class UScriptStruct* FAudioFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioFrame, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("AudioFrame"));
	}
	return Z_Registration_Info_UScriptStruct_AudioFrame.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FAudioFrame>()
{
	return FAudioFrame::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAudioFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_samplesPerChannel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_samplesPerChannel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytesPerSample_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bytesPerSample_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_bytesPerSample;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_channels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_channels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_samplesPerSec_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_samplesPerSec;
		static const UECodeGen_Private::FBytePropertyParams NewProp_buffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_buffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_renderTimeMs_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_renderTimeMs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_avsync_type_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_avsync_type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioFrame_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioFrame>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_type_MetaData[] = {
		{ "Category", "Agora|AudioFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioFrame, type), Z_Construct_UEnum_AgoraPlugin_EAUDIO_FRAME_TYPE, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_type_MetaData), Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_type_MetaData) }; // 2858956550
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_samplesPerChannel_MetaData[] = {
		{ "Category", "Agora|AudioFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_samplesPerChannel = { "samplesPerChannel", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioFrame, samplesPerChannel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_samplesPerChannel_MetaData), Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_samplesPerChannel_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_bytesPerSample_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_bytesPerSample_MetaData[] = {
		{ "Category", "Agora|AudioFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_bytesPerSample = { "bytesPerSample", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioFrame, bytesPerSample), Z_Construct_UEnum_AgoraPlugin_EBYTES_PER_SAMPLE, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_bytesPerSample_MetaData), Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_bytesPerSample_MetaData) }; // 350425444
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_channels_MetaData[] = {
		{ "Category", "Agora|AudioFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_channels = { "channels", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioFrame, channels), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_channels_MetaData), Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_channels_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_samplesPerSec_MetaData[] = {
		{ "Category", "Agora|AudioFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_samplesPerSec = { "samplesPerSec", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioFrame, samplesPerSec), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_samplesPerSec_MetaData), Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_samplesPerSec_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_buffer_Inner = { "buffer", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_buffer_MetaData[] = {
		{ "Category", "Agora|AudioFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_buffer = { "buffer", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioFrame, buffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_buffer_MetaData), Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_buffer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_renderTimeMs_MetaData[] = {
		{ "Category", "Agora|AudioFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_renderTimeMs = { "renderTimeMs", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioFrame, renderTimeMs), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_renderTimeMs_MetaData), Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_renderTimeMs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_avsync_type_MetaData[] = {
		{ "Category", "Agora|AudioFrame" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_avsync_type = { "avsync_type", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioFrame, avsync_type), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_avsync_type_MetaData), Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_avsync_type_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_samplesPerChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_bytesPerSample_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_bytesPerSample,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_channels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_samplesPerSec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_renderTimeMs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioFrame_Statics::NewProp_avsync_type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"AudioFrame",
		Z_Construct_UScriptStruct_FAudioFrame_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioFrame_Statics::PropPointers),
		sizeof(FAudioFrame),
		alignof(FAudioFrame),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioFrame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioFrame_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioFrame_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAudioFrame()
	{
		if (!Z_Registration_Info_UScriptStruct_AudioFrame.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioFrame.InnerSingleton, Z_Construct_UScriptStruct_FAudioFrame_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AudioFrame.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioSpectrumData;
class UScriptStruct* FAudioSpectrumData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioSpectrumData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioSpectrumData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioSpectrumData, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("AudioSpectrumData"));
	}
	return Z_Registration_Info_UScriptStruct_AudioSpectrumData.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FAudioSpectrumData>()
{
	return FAudioSpectrumData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAudioSpectrumData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_audioSpectrumData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_audioSpectrumData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_audioSpectrumData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dataLength_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_dataLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioSpectrumData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioSpectrumData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioSpectrumData>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioSpectrumData_Statics::NewProp_audioSpectrumData_Inner = { "audioSpectrumData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioSpectrumData_Statics::NewProp_audioSpectrumData_MetaData[] = {
		{ "Category", "Agora|AudioSpectrumData" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAudioSpectrumData_Statics::NewProp_audioSpectrumData = { "audioSpectrumData", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioSpectrumData, audioSpectrumData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSpectrumData_Statics::NewProp_audioSpectrumData_MetaData), Z_Construct_UScriptStruct_FAudioSpectrumData_Statics::NewProp_audioSpectrumData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioSpectrumData_Statics::NewProp_dataLength_MetaData[] = {
		{ "Category", "Agora|AudioSpectrumData" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioSpectrumData_Statics::NewProp_dataLength = { "dataLength", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioSpectrumData, dataLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSpectrumData_Statics::NewProp_dataLength_MetaData), Z_Construct_UScriptStruct_FAudioSpectrumData_Statics::NewProp_dataLength_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioSpectrumData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSpectrumData_Statics::NewProp_audioSpectrumData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSpectrumData_Statics::NewProp_audioSpectrumData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSpectrumData_Statics::NewProp_dataLength,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioSpectrumData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"AudioSpectrumData",
		Z_Construct_UScriptStruct_FAudioSpectrumData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSpectrumData_Statics::PropPointers),
		sizeof(FAudioSpectrumData),
		alignof(FAudioSpectrumData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSpectrumData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioSpectrumData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSpectrumData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAudioSpectrumData()
	{
		if (!Z_Registration_Info_UScriptStruct_AudioSpectrumData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioSpectrumData.InnerSingleton, Z_Construct_UScriptStruct_FAudioSpectrumData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AudioSpectrumData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UserAudioSpectrumInfo;
class UScriptStruct* FUserAudioSpectrumInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UserAudioSpectrumInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UserAudioSpectrumInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserAudioSpectrumInfo, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("UserAudioSpectrumInfo"));
	}
	return Z_Registration_Info_UScriptStruct_UserAudioSpectrumInfo.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FUserAudioSpectrumInfo>()
{
	return FUserAudioSpectrumInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUserAudioSpectrumInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uid_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_uid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spectrumData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_spectrumData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAudioSpectrumInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserAudioSpectrumInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserAudioSpectrumInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAudioSpectrumInfo_Statics::NewProp_uid_MetaData[] = {
		{ "Category", "Agora|UserAudioSpectrumInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FUserAudioSpectrumInfo_Statics::NewProp_uid = { "uid", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserAudioSpectrumInfo, uid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAudioSpectrumInfo_Statics::NewProp_uid_MetaData), Z_Construct_UScriptStruct_FUserAudioSpectrumInfo_Statics::NewProp_uid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAudioSpectrumInfo_Statics::NewProp_spectrumData_MetaData[] = {
		{ "Category", "Agora|UserAudioSpectrumInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserAudioSpectrumInfo_Statics::NewProp_spectrumData = { "spectrumData", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserAudioSpectrumInfo, spectrumData), Z_Construct_UScriptStruct_FAudioSpectrumData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAudioSpectrumInfo_Statics::NewProp_spectrumData_MetaData), Z_Construct_UScriptStruct_FUserAudioSpectrumInfo_Statics::NewProp_spectrumData_MetaData) }; // 2763961381
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserAudioSpectrumInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAudioSpectrumInfo_Statics::NewProp_uid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAudioSpectrumInfo_Statics::NewProp_spectrumData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserAudioSpectrumInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"UserAudioSpectrumInfo",
		Z_Construct_UScriptStruct_FUserAudioSpectrumInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAudioSpectrumInfo_Statics::PropPointers),
		sizeof(FUserAudioSpectrumInfo),
		alignof(FUserAudioSpectrumInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAudioSpectrumInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUserAudioSpectrumInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAudioSpectrumInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUserAudioSpectrumInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_UserAudioSpectrumInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UserAudioSpectrumInfo.InnerSingleton, Z_Construct_UScriptStruct_FUserAudioSpectrumInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UserAudioSpectrumInfo.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVIDEO_FRAME_TYPE;
	static UEnum* EVIDEO_FRAME_TYPE_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVIDEO_FRAME_TYPE.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVIDEO_FRAME_TYPE.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AgoraPlugin_EVIDEO_FRAME_TYPE, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EVIDEO_FRAME_TYPE"));
		}
		return Z_Registration_Info_UEnum_EVIDEO_FRAME_TYPE.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UEnum* StaticEnum<EVIDEO_FRAME_TYPE>()
	{
		return EVIDEO_FRAME_TYPE_StaticEnum();
	}
	struct Z_Construct_UEnum_AgoraPlugin_EVIDEO_FRAME_TYPE_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AgoraPlugin_EVIDEO_FRAME_TYPE_Statics::Enumerators[] = {
		{ "EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_BLANK_FRAME", (int64)EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_BLANK_FRAME },
		{ "EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_KEY_FRAME", (int64)EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_KEY_FRAME },
		{ "EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_DELTA_FRAME", (int64)EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_DELTA_FRAME },
		{ "EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_B_FRAME", (int64)EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_B_FRAME },
		{ "EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_DROPPABLE_FRAME", (int64)EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_DROPPABLE_FRAME },
		{ "EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_UNKNOW", (int64)EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_UNKNOW },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AgoraPlugin_EVIDEO_FRAME_TYPE_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
		{ "VIDEO_FRAME_TYPE_B_FRAME.Name", "EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_B_FRAME" },
		{ "VIDEO_FRAME_TYPE_BLANK_FRAME.Name", "EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_BLANK_FRAME" },
		{ "VIDEO_FRAME_TYPE_DELTA_FRAME.Name", "EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_DELTA_FRAME" },
		{ "VIDEO_FRAME_TYPE_DROPPABLE_FRAME.Name", "EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_DROPPABLE_FRAME" },
		{ "VIDEO_FRAME_TYPE_KEY_FRAME.Name", "EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_KEY_FRAME" },
		{ "VIDEO_FRAME_TYPE_UNKNOW.Name", "EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_UNKNOW" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AgoraPlugin_EVIDEO_FRAME_TYPE_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		"EVIDEO_FRAME_TYPE",
		"EVIDEO_FRAME_TYPE",
		Z_Construct_UEnum_AgoraPlugin_EVIDEO_FRAME_TYPE_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EVIDEO_FRAME_TYPE_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EVIDEO_FRAME_TYPE_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AgoraPlugin_EVIDEO_FRAME_TYPE_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AgoraPlugin_EVIDEO_FRAME_TYPE()
	{
		if (!Z_Registration_Info_UEnum_EVIDEO_FRAME_TYPE.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVIDEO_FRAME_TYPE.InnerSingleton, Z_Construct_UEnum_AgoraPlugin_EVIDEO_FRAME_TYPE_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVIDEO_FRAME_TYPE.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EncodedVideoFrameInfo;
class UScriptStruct* FEncodedVideoFrameInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EncodedVideoFrameInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EncodedVideoFrameInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEncodedVideoFrameInfo, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EncodedVideoFrameInfo"));
	}
	return Z_Registration_Info_UScriptStruct_EncodedVideoFrameInfo.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FEncodedVideoFrameInfo>()
{
	return FEncodedVideoFrameInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_codecType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_codecType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_codecType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_framesPerSecond_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_framesPerSecond;
		static const UECodeGen_Private::FBytePropertyParams NewProp_frameType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_frameType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_frameType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trackId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_trackId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_captureTimeMs_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_captureTimeMs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_decodeTimeMs_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_decodeTimeMs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uid_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_uid;
		static const UECodeGen_Private::FBytePropertyParams NewProp_streamType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_streamType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_streamType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEncodedVideoFrameInfo>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_codecType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_codecType_MetaData[] = {
		{ "Category", "Agora|EncodedVideoFrameInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_codecType = { "codecType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEncodedVideoFrameInfo, codecType), Z_Construct_UEnum_AgoraPlugin_EVIDEO_CODEC_TYPE, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_codecType_MetaData), Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_codecType_MetaData) }; // 2889746284
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_width_MetaData[] = {
		{ "Category", "Agora|EncodedVideoFrameInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEncodedVideoFrameInfo, width), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_width_MetaData), Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_width_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_height_MetaData[] = {
		{ "Category", "Agora|EncodedVideoFrameInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEncodedVideoFrameInfo, height), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_height_MetaData), Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_height_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_framesPerSecond_MetaData[] = {
		{ "Category", "Agora|EncodedVideoFrameInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_framesPerSecond = { "framesPerSecond", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEncodedVideoFrameInfo, framesPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_framesPerSecond_MetaData), Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_framesPerSecond_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_frameType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_frameType_MetaData[] = {
		{ "Category", "Agora|EncodedVideoFrameInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_frameType = { "frameType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEncodedVideoFrameInfo, frameType), Z_Construct_UEnum_AgoraPlugin_EVIDEO_FRAME_TYPE, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_frameType_MetaData), Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_frameType_MetaData) }; // 1977194757
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_rotation_MetaData[] = {
		{ "Category", "Agora|EncodedVideoFrameInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEncodedVideoFrameInfo, rotation), Z_Construct_UScriptStruct_FENUMWRAP_VIDEO_ORIENTATION, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_rotation_MetaData), Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_rotation_MetaData) }; // 3320000863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_trackId_MetaData[] = {
		{ "Category", "Agora|EncodedVideoFrameInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_trackId = { "trackId", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEncodedVideoFrameInfo, trackId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_trackId_MetaData), Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_trackId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_captureTimeMs_MetaData[] = {
		{ "Category", "Agora|EncodedVideoFrameInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_captureTimeMs = { "captureTimeMs", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEncodedVideoFrameInfo, captureTimeMs), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_captureTimeMs_MetaData), Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_captureTimeMs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_decodeTimeMs_MetaData[] = {
		{ "Category", "Agora|EncodedVideoFrameInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_decodeTimeMs = { "decodeTimeMs", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEncodedVideoFrameInfo, decodeTimeMs), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_decodeTimeMs_MetaData), Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_decodeTimeMs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_uid_MetaData[] = {
		{ "Category", "Agora|EncodedVideoFrameInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_uid = { "uid", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEncodedVideoFrameInfo, uid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_uid_MetaData), Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_uid_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_streamType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_streamType_MetaData[] = {
		{ "Category", "Agora|EncodedVideoFrameInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_streamType = { "streamType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEncodedVideoFrameInfo, streamType), Z_Construct_UEnum_AgoraPlugin_EVIDEO_STREAM_TYPE, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_streamType_MetaData), Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_streamType_MetaData) }; // 114113414
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_codecType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_codecType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_framesPerSecond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_frameType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_frameType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_trackId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_captureTimeMs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_decodeTimeMs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_uid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_streamType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewProp_streamType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"EncodedVideoFrameInfo",
		Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::PropPointers),
		sizeof(FEncodedVideoFrameInfo),
		alignof(FEncodedVideoFrameInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEncodedVideoFrameInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_EncodedVideoFrameInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EncodedVideoFrameInfo.InnerSingleton, Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EncodedVideoFrameInfo.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrameBeforeMixing__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnPlaybackAudioFrameBeforeMixing_Parms
		{
			FString channelId;
			int64 uid;
			FAudioFrame audioFrame;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_channelId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_channelId;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_uid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_audioFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_audioFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrameBeforeMixing__DelegateSignature_Statics::NewProp_channelId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrameBeforeMixing__DelegateSignature_Statics::NewProp_channelId = { "channelId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlaybackAudioFrameBeforeMixing_Parms, channelId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrameBeforeMixing__DelegateSignature_Statics::NewProp_channelId_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrameBeforeMixing__DelegateSignature_Statics::NewProp_channelId_MetaData) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrameBeforeMixing__DelegateSignature_Statics::NewProp_uid = { "uid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlaybackAudioFrameBeforeMixing_Parms, uid), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrameBeforeMixing__DelegateSignature_Statics::NewProp_audioFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrameBeforeMixing__DelegateSignature_Statics::NewProp_audioFrame = { "audioFrame", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlaybackAudioFrameBeforeMixing_Parms, audioFrame), Z_Construct_UScriptStruct_FAudioFrame, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrameBeforeMixing__DelegateSignature_Statics::NewProp_audioFrame_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrameBeforeMixing__DelegateSignature_Statics::NewProp_audioFrame_MetaData) }; // 3001111353
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrameBeforeMixing__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrameBeforeMixing__DelegateSignature_Statics::NewProp_channelId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrameBeforeMixing__DelegateSignature_Statics::NewProp_uid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrameBeforeMixing__DelegateSignature_Statics::NewProp_audioFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrameBeforeMixing__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrameBeforeMixing__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPlaybackAudioFrameBeforeMixing__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrameBeforeMixing__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrameBeforeMixing__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrameBeforeMixing__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlaybackAudioFrameBeforeMixing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrameBeforeMixing__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrameBeforeMixing__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrameBeforeMixing__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrameBeforeMixing__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlaybackAudioFrameBeforeMixing_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrameBeforeMixing__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrameBeforeMixing__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPlaybackAudioFrameBeforeMixing_DelegateWrapper(const FMulticastScriptDelegate& OnPlaybackAudioFrameBeforeMixing, const FString& channelId, int64 uid, FAudioFrame const& audioFrame)
{
	struct _Script_AgoraPlugin_eventOnPlaybackAudioFrameBeforeMixing_Parms
	{
		FString channelId;
		int64 uid;
		FAudioFrame audioFrame;
	};
	_Script_AgoraPlugin_eventOnPlaybackAudioFrameBeforeMixing_Parms Parms;
	Parms.channelId=channelId;
	Parms.uid=uid;
	Parms.audioFrame=audioFrame;
	OnPlaybackAudioFrameBeforeMixing.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnLocalAudioSpectrum__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnLocalAudioSpectrum_Parms
		{
			FAudioSpectrumData data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnLocalAudioSpectrum__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnLocalAudioSpectrum__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnLocalAudioSpectrum_Parms, data), Z_Construct_UScriptStruct_FAudioSpectrumData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnLocalAudioSpectrum__DelegateSignature_Statics::NewProp_data_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnLocalAudioSpectrum__DelegateSignature_Statics::NewProp_data_MetaData) }; // 2763961381
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnLocalAudioSpectrum__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnLocalAudioSpectrum__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnLocalAudioSpectrum__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnLocalAudioSpectrum__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnLocalAudioSpectrum__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnLocalAudioSpectrum__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnLocalAudioSpectrum__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnLocalAudioSpectrum__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnLocalAudioSpectrum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnLocalAudioSpectrum__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnLocalAudioSpectrum__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnLocalAudioSpectrum__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnLocalAudioSpectrum__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnLocalAudioSpectrum_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnLocalAudioSpectrum__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnLocalAudioSpectrum__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLocalAudioSpectrum_DelegateWrapper(const FMulticastScriptDelegate& OnLocalAudioSpectrum, FAudioSpectrumData const& data)
{
	struct _Script_AgoraPlugin_eventOnLocalAudioSpectrum_Parms
	{
		FAudioSpectrumData data;
	};
	_Script_AgoraPlugin_eventOnLocalAudioSpectrum_Parms Parms;
	Parms.data=data;
	OnLocalAudioSpectrum.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnRemoteAudioSpectrum__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnRemoteAudioSpectrum_Parms
		{
			TArray<FUserAudioSpectrumInfo> spectrums;
			int32 spectrumNumber;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_spectrums_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spectrums_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_spectrums;
		static const UECodeGen_Private::FIntPropertyParams NewProp_spectrumNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRemoteAudioSpectrum__DelegateSignature_Statics::NewProp_spectrums_Inner = { "spectrums", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUserAudioSpectrumInfo, METADATA_PARAMS(0, nullptr) }; // 2294541144
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnRemoteAudioSpectrum__DelegateSignature_Statics::NewProp_spectrums_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRemoteAudioSpectrum__DelegateSignature_Statics::NewProp_spectrums = { "spectrums", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnRemoteAudioSpectrum_Parms, spectrums), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRemoteAudioSpectrum__DelegateSignature_Statics::NewProp_spectrums_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnRemoteAudioSpectrum__DelegateSignature_Statics::NewProp_spectrums_MetaData) }; // 2294541144
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRemoteAudioSpectrum__DelegateSignature_Statics::NewProp_spectrumNumber = { "spectrumNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnRemoteAudioSpectrum_Parms, spectrumNumber), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnRemoteAudioSpectrum__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRemoteAudioSpectrum__DelegateSignature_Statics::NewProp_spectrums_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRemoteAudioSpectrum__DelegateSignature_Statics::NewProp_spectrums,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRemoteAudioSpectrum__DelegateSignature_Statics::NewProp_spectrumNumber,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnRemoteAudioSpectrum__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRemoteAudioSpectrum__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnRemoteAudioSpectrum__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnRemoteAudioSpectrum__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRemoteAudioSpectrum__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnRemoteAudioSpectrum__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnRemoteAudioSpectrum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRemoteAudioSpectrum__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnRemoteAudioSpectrum__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRemoteAudioSpectrum__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnRemoteAudioSpectrum__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnRemoteAudioSpectrum_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnRemoteAudioSpectrum__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnRemoteAudioSpectrum__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRemoteAudioSpectrum_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteAudioSpectrum, const TArray<FUserAudioSpectrumInfo>& spectrums, int32 spectrumNumber)
{
	struct _Script_AgoraPlugin_eventOnRemoteAudioSpectrum_Parms
	{
		TArray<FUserAudioSpectrumInfo> spectrums;
		int32 spectrumNumber;
	};
	_Script_AgoraPlugin_eventOnRemoteAudioSpectrum_Parms Parms;
	Parms.spectrums=spectrums;
	Parms.spectrumNumber=spectrumNumber;
	OnRemoteAudioSpectrum.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnCaptureVideoFrame__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnCaptureVideoFrame_Parms
		{
			EVIDEO_SOURCE_TYPE sourceType;
			FVideoFrame videoFrame;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_sourceType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_sourceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_videoFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_videoFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnCaptureVideoFrame__DelegateSignature_Statics::NewProp_sourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnCaptureVideoFrame__DelegateSignature_Statics::NewProp_sourceType = { "sourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnCaptureVideoFrame_Parms, sourceType), Z_Construct_UEnum_AgoraPlugin_EVIDEO_SOURCE_TYPE, METADATA_PARAMS(0, nullptr) }; // 3151479799
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnCaptureVideoFrame__DelegateSignature_Statics::NewProp_videoFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnCaptureVideoFrame__DelegateSignature_Statics::NewProp_videoFrame = { "videoFrame", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnCaptureVideoFrame_Parms, videoFrame), Z_Construct_UScriptStruct_FVideoFrame, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnCaptureVideoFrame__DelegateSignature_Statics::NewProp_videoFrame_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnCaptureVideoFrame__DelegateSignature_Statics::NewProp_videoFrame_MetaData) }; // 1985163173
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnCaptureVideoFrame__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnCaptureVideoFrame__DelegateSignature_Statics::NewProp_sourceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnCaptureVideoFrame__DelegateSignature_Statics::NewProp_sourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnCaptureVideoFrame__DelegateSignature_Statics::NewProp_videoFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnCaptureVideoFrame__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnCaptureVideoFrame__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnCaptureVideoFrame__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnCaptureVideoFrame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnCaptureVideoFrame__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnCaptureVideoFrame__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnCaptureVideoFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnCaptureVideoFrame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnCaptureVideoFrame__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnCaptureVideoFrame__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnCaptureVideoFrame__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnCaptureVideoFrame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnCaptureVideoFrame__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnCaptureVideoFrame__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCaptureVideoFrame_DelegateWrapper(const FMulticastScriptDelegate& OnCaptureVideoFrame, EVIDEO_SOURCE_TYPE sourceType, FVideoFrame const& videoFrame)
{
	struct _Script_AgoraPlugin_eventOnCaptureVideoFrame_Parms
	{
		EVIDEO_SOURCE_TYPE sourceType;
		FVideoFrame videoFrame;
	};
	_Script_AgoraPlugin_eventOnCaptureVideoFrame_Parms Parms;
	Parms.sourceType=sourceType;
	Parms.videoFrame=videoFrame;
	OnCaptureVideoFrame.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPreEncodeVideoFrame__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnPreEncodeVideoFrame_Parms
		{
			EVIDEO_SOURCE_TYPE sourceType;
			FVideoFrame videoFrame;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_sourceType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_sourceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_videoFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_videoFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPreEncodeVideoFrame__DelegateSignature_Statics::NewProp_sourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPreEncodeVideoFrame__DelegateSignature_Statics::NewProp_sourceType = { "sourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPreEncodeVideoFrame_Parms, sourceType), Z_Construct_UEnum_AgoraPlugin_EVIDEO_SOURCE_TYPE, METADATA_PARAMS(0, nullptr) }; // 3151479799
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPreEncodeVideoFrame__DelegateSignature_Statics::NewProp_videoFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPreEncodeVideoFrame__DelegateSignature_Statics::NewProp_videoFrame = { "videoFrame", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPreEncodeVideoFrame_Parms, videoFrame), Z_Construct_UScriptStruct_FVideoFrame, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPreEncodeVideoFrame__DelegateSignature_Statics::NewProp_videoFrame_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnPreEncodeVideoFrame__DelegateSignature_Statics::NewProp_videoFrame_MetaData) }; // 1985163173
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPreEncodeVideoFrame__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPreEncodeVideoFrame__DelegateSignature_Statics::NewProp_sourceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPreEncodeVideoFrame__DelegateSignature_Statics::NewProp_sourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPreEncodeVideoFrame__DelegateSignature_Statics::NewProp_videoFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPreEncodeVideoFrame__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPreEncodeVideoFrame__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPreEncodeVideoFrame__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPreEncodeVideoFrame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPreEncodeVideoFrame__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPreEncodeVideoFrame__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPreEncodeVideoFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPreEncodeVideoFrame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPreEncodeVideoFrame__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPreEncodeVideoFrame__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPreEncodeVideoFrame__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPreEncodeVideoFrame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPreEncodeVideoFrame__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPreEncodeVideoFrame__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPreEncodeVideoFrame_DelegateWrapper(const FMulticastScriptDelegate& OnPreEncodeVideoFrame, EVIDEO_SOURCE_TYPE sourceType, FVideoFrame const& videoFrame)
{
	struct _Script_AgoraPlugin_eventOnPreEncodeVideoFrame_Parms
	{
		EVIDEO_SOURCE_TYPE sourceType;
		FVideoFrame videoFrame;
	};
	_Script_AgoraPlugin_eventOnPreEncodeVideoFrame_Parms Parms;
	Parms.sourceType=sourceType;
	Parms.videoFrame=videoFrame;
	OnPreEncodeVideoFrame.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnMediaPlayerVideoFrame__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnMediaPlayerVideoFrame_Parms
		{
			FVideoFrame videoFrame;
			int32 mediaPlayerId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_videoFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_videoFrame;
		static const UECodeGen_Private::FIntPropertyParams NewProp_mediaPlayerId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnMediaPlayerVideoFrame__DelegateSignature_Statics::NewProp_videoFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMediaPlayerVideoFrame__DelegateSignature_Statics::NewProp_videoFrame = { "videoFrame", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnMediaPlayerVideoFrame_Parms, videoFrame), Z_Construct_UScriptStruct_FVideoFrame, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMediaPlayerVideoFrame__DelegateSignature_Statics::NewProp_videoFrame_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnMediaPlayerVideoFrame__DelegateSignature_Statics::NewProp_videoFrame_MetaData) }; // 1985163173
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMediaPlayerVideoFrame__DelegateSignature_Statics::NewProp_mediaPlayerId = { "mediaPlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnMediaPlayerVideoFrame_Parms, mediaPlayerId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnMediaPlayerVideoFrame__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnMediaPlayerVideoFrame__DelegateSignature_Statics::NewProp_videoFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnMediaPlayerVideoFrame__DelegateSignature_Statics::NewProp_mediaPlayerId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnMediaPlayerVideoFrame__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMediaPlayerVideoFrame__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnMediaPlayerVideoFrame__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnMediaPlayerVideoFrame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMediaPlayerVideoFrame__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnMediaPlayerVideoFrame__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnMediaPlayerVideoFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMediaPlayerVideoFrame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnMediaPlayerVideoFrame__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMediaPlayerVideoFrame__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnMediaPlayerVideoFrame__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnMediaPlayerVideoFrame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnMediaPlayerVideoFrame__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnMediaPlayerVideoFrame__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMediaPlayerVideoFrame_DelegateWrapper(const FMulticastScriptDelegate& OnMediaPlayerVideoFrame, FVideoFrame const& videoFrame, int32 mediaPlayerId)
{
	struct _Script_AgoraPlugin_eventOnMediaPlayerVideoFrame_Parms
	{
		FVideoFrame videoFrame;
		int32 mediaPlayerId;
	};
	_Script_AgoraPlugin_eventOnMediaPlayerVideoFrame_Parms Parms;
	Parms.videoFrame=videoFrame;
	Parms.mediaPlayerId=mediaPlayerId;
	OnMediaPlayerVideoFrame.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnRenderVideoFrame__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnRenderVideoFrame_Parms
		{
			FString channelId;
			int64 remoteUid;
			FVideoFrame videoFrame;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_channelId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_channelId;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_remoteUid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_videoFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_videoFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnRenderVideoFrame__DelegateSignature_Statics::NewProp_channelId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRenderVideoFrame__DelegateSignature_Statics::NewProp_channelId = { "channelId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnRenderVideoFrame_Parms, channelId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRenderVideoFrame__DelegateSignature_Statics::NewProp_channelId_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnRenderVideoFrame__DelegateSignature_Statics::NewProp_channelId_MetaData) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRenderVideoFrame__DelegateSignature_Statics::NewProp_remoteUid = { "remoteUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnRenderVideoFrame_Parms, remoteUid), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnRenderVideoFrame__DelegateSignature_Statics::NewProp_videoFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRenderVideoFrame__DelegateSignature_Statics::NewProp_videoFrame = { "videoFrame", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnRenderVideoFrame_Parms, videoFrame), Z_Construct_UScriptStruct_FVideoFrame, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRenderVideoFrame__DelegateSignature_Statics::NewProp_videoFrame_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnRenderVideoFrame__DelegateSignature_Statics::NewProp_videoFrame_MetaData) }; // 1985163173
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnRenderVideoFrame__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRenderVideoFrame__DelegateSignature_Statics::NewProp_channelId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRenderVideoFrame__DelegateSignature_Statics::NewProp_remoteUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRenderVideoFrame__DelegateSignature_Statics::NewProp_videoFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnRenderVideoFrame__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRenderVideoFrame__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnRenderVideoFrame__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnRenderVideoFrame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRenderVideoFrame__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnRenderVideoFrame__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnRenderVideoFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRenderVideoFrame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnRenderVideoFrame__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRenderVideoFrame__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnRenderVideoFrame__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnRenderVideoFrame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnRenderVideoFrame__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnRenderVideoFrame__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRenderVideoFrame_DelegateWrapper(const FMulticastScriptDelegate& OnRenderVideoFrame, const FString& channelId, int64 remoteUid, FVideoFrame const& videoFrame)
{
	struct _Script_AgoraPlugin_eventOnRenderVideoFrame_Parms
	{
		FString channelId;
		int64 remoteUid;
		FVideoFrame videoFrame;
	};
	_Script_AgoraPlugin_eventOnRenderVideoFrame_Parms Parms;
	Parms.channelId=channelId;
	Parms.remoteUid=remoteUid;
	Parms.videoFrame=videoFrame;
	OnRenderVideoFrame.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnTranscodedVideoFrame__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnTranscodedVideoFrame_Parms
		{
			FVideoFrame videoFrame;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_videoFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_videoFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnTranscodedVideoFrame__DelegateSignature_Statics::NewProp_videoFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnTranscodedVideoFrame__DelegateSignature_Statics::NewProp_videoFrame = { "videoFrame", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnTranscodedVideoFrame_Parms, videoFrame), Z_Construct_UScriptStruct_FVideoFrame, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnTranscodedVideoFrame__DelegateSignature_Statics::NewProp_videoFrame_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnTranscodedVideoFrame__DelegateSignature_Statics::NewProp_videoFrame_MetaData) }; // 1985163173
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnTranscodedVideoFrame__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnTranscodedVideoFrame__DelegateSignature_Statics::NewProp_videoFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnTranscodedVideoFrame__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnTranscodedVideoFrame__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnTranscodedVideoFrame__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnTranscodedVideoFrame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnTranscodedVideoFrame__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnTranscodedVideoFrame__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnTranscodedVideoFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnTranscodedVideoFrame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnTranscodedVideoFrame__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnTranscodedVideoFrame__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnTranscodedVideoFrame__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnTranscodedVideoFrame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnTranscodedVideoFrame__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnTranscodedVideoFrame__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnTranscodedVideoFrame_DelegateWrapper(const FMulticastScriptDelegate& OnTranscodedVideoFrame, FVideoFrame const& videoFrame)
{
	struct _Script_AgoraPlugin_eventOnTranscodedVideoFrame_Parms
	{
		FVideoFrame videoFrame;
	};
	_Script_AgoraPlugin_eventOnTranscodedVideoFrame_Parms Parms;
	Parms.videoFrame=videoFrame;
	OnTranscodedVideoFrame.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_GetVideoFrameProcessMode__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_GetVideoFrameProcessMode__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_GetVideoFrameProcessMode__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "GetVideoFrameProcessMode__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_GetVideoFrameProcessMode__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_GetVideoFrameProcessMode__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_GetVideoFrameProcessMode__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_GetVideoFrameProcessMode__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGetVideoFrameProcessMode_DelegateWrapper(const FMulticastScriptDelegate& GetVideoFrameProcessMode)
{
	GetVideoFrameProcessMode.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_GetVideoFormatPreference__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_GetVideoFormatPreference__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_GetVideoFormatPreference__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "GetVideoFormatPreference__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_GetVideoFormatPreference__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_GetVideoFormatPreference__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_GetVideoFormatPreference__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_GetVideoFormatPreference__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGetVideoFormatPreference_DelegateWrapper(const FMulticastScriptDelegate& GetVideoFormatPreference)
{
	GetVideoFormatPreference.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_GetRotationApplied__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_GetRotationApplied__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_GetRotationApplied__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "GetRotationApplied__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_GetRotationApplied__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_GetRotationApplied__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_GetRotationApplied__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_GetRotationApplied__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGetRotationApplied_DelegateWrapper(const FMulticastScriptDelegate& GetRotationApplied)
{
	GetRotationApplied.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_GetMirrorApplied__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_GetMirrorApplied__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_GetMirrorApplied__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "GetMirrorApplied__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_GetMirrorApplied__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_GetMirrorApplied__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_GetMirrorApplied__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_GetMirrorApplied__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGetMirrorApplied_DelegateWrapper(const FMulticastScriptDelegate& GetMirrorApplied)
{
	GetMirrorApplied.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_GetObservedFramePosition__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_GetObservedFramePosition__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_GetObservedFramePosition__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "GetObservedFramePosition__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_GetObservedFramePosition__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_GetObservedFramePosition__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_GetObservedFramePosition__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_GetObservedFramePosition__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGetObservedFramePosition_DelegateWrapper(const FMulticastScriptDelegate& GetObservedFramePosition)
{
	GetObservedFramePosition.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_IsExternal__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_IsExternal__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_IsExternal__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "IsExternal__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_IsExternal__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_IsExternal__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_IsExternal__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_IsExternal__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FIsExternal_DelegateWrapper(const FMulticastScriptDelegate& IsExternal)
{
	IsExternal.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioFrame__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnRecordAudioFrame_Parms
		{
			FString channelId;
			FAudioFrame audioFrame;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_channelId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_channelId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_audioFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_audioFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioFrame__DelegateSignature_Statics::NewProp_channelId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioFrame__DelegateSignature_Statics::NewProp_channelId = { "channelId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnRecordAudioFrame_Parms, channelId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioFrame__DelegateSignature_Statics::NewProp_channelId_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioFrame__DelegateSignature_Statics::NewProp_channelId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioFrame__DelegateSignature_Statics::NewProp_audioFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioFrame__DelegateSignature_Statics::NewProp_audioFrame = { "audioFrame", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnRecordAudioFrame_Parms, audioFrame), Z_Construct_UScriptStruct_FAudioFrame, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioFrame__DelegateSignature_Statics::NewProp_audioFrame_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioFrame__DelegateSignature_Statics::NewProp_audioFrame_MetaData) }; // 3001111353
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioFrame__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioFrame__DelegateSignature_Statics::NewProp_channelId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioFrame__DelegateSignature_Statics::NewProp_audioFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioFrame__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioFrame__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnRecordAudioFrame__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioFrame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioFrame__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioFrame__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnRecordAudioFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioFrame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioFrame__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioFrame__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioFrame__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnRecordAudioFrame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioFrame__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioFrame__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRecordAudioFrame_DelegateWrapper(const FMulticastScriptDelegate& OnRecordAudioFrame, const FString& channelId, FAudioFrame const& audioFrame)
{
	struct _Script_AgoraPlugin_eventOnRecordAudioFrame_Parms
	{
		FString channelId;
		FAudioFrame audioFrame;
	};
	_Script_AgoraPlugin_eventOnRecordAudioFrame_Parms Parms;
	Parms.channelId=channelId;
	Parms.audioFrame=audioFrame;
	OnRecordAudioFrame.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrame__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnPlaybackAudioFrame_Parms
		{
			FString channelId;
			FAudioFrame audioFrame;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_channelId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_channelId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_audioFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_audioFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrame__DelegateSignature_Statics::NewProp_channelId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrame__DelegateSignature_Statics::NewProp_channelId = { "channelId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlaybackAudioFrame_Parms, channelId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrame__DelegateSignature_Statics::NewProp_channelId_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrame__DelegateSignature_Statics::NewProp_channelId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrame__DelegateSignature_Statics::NewProp_audioFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrame__DelegateSignature_Statics::NewProp_audioFrame = { "audioFrame", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlaybackAudioFrame_Parms, audioFrame), Z_Construct_UScriptStruct_FAudioFrame, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrame__DelegateSignature_Statics::NewProp_audioFrame_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrame__DelegateSignature_Statics::NewProp_audioFrame_MetaData) }; // 3001111353
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrame__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrame__DelegateSignature_Statics::NewProp_channelId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrame__DelegateSignature_Statics::NewProp_audioFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrame__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrame__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPlaybackAudioFrame__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrame__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrame__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlaybackAudioFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrame__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrame__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrame__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlaybackAudioFrame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrame__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrame__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPlaybackAudioFrame_DelegateWrapper(const FMulticastScriptDelegate& OnPlaybackAudioFrame, const FString& channelId, FAudioFrame const& audioFrame)
{
	struct _Script_AgoraPlugin_eventOnPlaybackAudioFrame_Parms
	{
		FString channelId;
		FAudioFrame audioFrame;
	};
	_Script_AgoraPlugin_eventOnPlaybackAudioFrame_Parms Parms;
	Parms.channelId=channelId;
	Parms.audioFrame=audioFrame;
	OnPlaybackAudioFrame.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioFrame__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnMixedAudioFrame_Parms
		{
			FString channelId;
			FAudioFrame audioFrame;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_channelId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_channelId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_audioFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_audioFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioFrame__DelegateSignature_Statics::NewProp_channelId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioFrame__DelegateSignature_Statics::NewProp_channelId = { "channelId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnMixedAudioFrame_Parms, channelId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioFrame__DelegateSignature_Statics::NewProp_channelId_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioFrame__DelegateSignature_Statics::NewProp_channelId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioFrame__DelegateSignature_Statics::NewProp_audioFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioFrame__DelegateSignature_Statics::NewProp_audioFrame = { "audioFrame", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnMixedAudioFrame_Parms, audioFrame), Z_Construct_UScriptStruct_FAudioFrame, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioFrame__DelegateSignature_Statics::NewProp_audioFrame_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioFrame__DelegateSignature_Statics::NewProp_audioFrame_MetaData) }; // 3001111353
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioFrame__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioFrame__DelegateSignature_Statics::NewProp_channelId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioFrame__DelegateSignature_Statics::NewProp_audioFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioFrame__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioFrame__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnMixedAudioFrame__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioFrame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioFrame__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioFrame__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnMixedAudioFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioFrame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioFrame__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioFrame__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioFrame__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnMixedAudioFrame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioFrame__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioFrame__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMixedAudioFrame_DelegateWrapper(const FMulticastScriptDelegate& OnMixedAudioFrame, const FString& channelId, FAudioFrame const& audioFrame)
{
	struct _Script_AgoraPlugin_eventOnMixedAudioFrame_Parms
	{
		FString channelId;
		FAudioFrame audioFrame;
	};
	_Script_AgoraPlugin_eventOnMixedAudioFrame_Parms Parms;
	Parms.channelId=channelId;
	Parms.audioFrame=audioFrame;
	OnMixedAudioFrame.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_GetObservedAudioFramePosition__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_GetObservedAudioFramePosition__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_GetObservedAudioFramePosition__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "GetObservedAudioFramePosition__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_GetObservedAudioFramePosition__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_GetObservedAudioFramePosition__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_GetObservedAudioFramePosition__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_GetObservedAudioFramePosition__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGetObservedAudioFramePosition_DelegateWrapper(const FMulticastScriptDelegate& GetObservedAudioFramePosition)
{
	GetObservedAudioFramePosition.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_GetPlaybackAudioParams__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_GetPlaybackAudioParams__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_GetPlaybackAudioParams__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "GetPlaybackAudioParams__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_GetPlaybackAudioParams__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_GetPlaybackAudioParams__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_GetPlaybackAudioParams__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_GetPlaybackAudioParams__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGetPlaybackAudioParams_DelegateWrapper(const FMulticastScriptDelegate& GetPlaybackAudioParams)
{
	GetPlaybackAudioParams.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_GetRecordAudioParams__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_GetRecordAudioParams__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_GetRecordAudioParams__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "GetRecordAudioParams__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_GetRecordAudioParams__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_GetRecordAudioParams__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_GetRecordAudioParams__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_GetRecordAudioParams__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGetRecordAudioParams_DelegateWrapper(const FMulticastScriptDelegate& GetRecordAudioParams)
{
	GetRecordAudioParams.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_GetMixedAudioParams__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_GetMixedAudioParams__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_GetMixedAudioParams__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "GetMixedAudioParams__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_GetMixedAudioParams__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_GetMixedAudioParams__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_GetMixedAudioParams__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_GetMixedAudioParams__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGetMixedAudioParams_DelegateWrapper(const FMulticastScriptDelegate& GetMixedAudioParams)
{
	GetMixedAudioParams.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnFrame__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnFrame_Parms
		{
			FAudioPcmFrame pcmFrame;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pcmFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_pcmFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnFrame__DelegateSignature_Statics::NewProp_pcmFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnFrame__DelegateSignature_Statics::NewProp_pcmFrame = { "pcmFrame", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnFrame_Parms, pcmFrame), Z_Construct_UScriptStruct_FAudioPcmFrame, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnFrame__DelegateSignature_Statics::NewProp_pcmFrame_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnFrame__DelegateSignature_Statics::NewProp_pcmFrame_MetaData) }; // 2425578927
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnFrame__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnFrame__DelegateSignature_Statics::NewProp_pcmFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnFrame__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnFrame__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnFrame__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnFrame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnFrame__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnFrame__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnFrame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnFrame__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnFrame__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnFrame__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnFrame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnFrame__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnFrame__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnFrame_DelegateWrapper(const FMulticastScriptDelegate& OnFrame, FAudioPcmFrame const& pcmFrame)
{
	struct _Script_AgoraPlugin_eventOnFrame_Parms
	{
		FAudioPcmFrame pcmFrame;
	};
	_Script_AgoraPlugin_eventOnFrame_Parms Parms;
	Parms.pcmFrame=pcmFrame;
	OnFrame.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UIAudioFrameObserver::StaticRegisterNativesUIAudioFrameObserver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIAudioFrameObserver);
	UClass* Z_Construct_UClass_UIAudioFrameObserver_NoRegister()
	{
		return UIAudioFrameObserver::StaticClass();
	}
	struct Z_Construct_UClass_UIAudioFrameObserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlaybackAudioFrameBeforeMixing_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlaybackAudioFrameBeforeMixing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRecordAudioFrame_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRecordAudioFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlaybackAudioFrame_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlaybackAudioFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMixedAudioFrame_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMixedAudioFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GetObservedAudioFramePosition_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GetObservedAudioFramePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GetPlaybackAudioParams_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GetPlaybackAudioParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GetRecordAudioParams_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GetRecordAudioParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GetMixedAudioParams_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GetMixedAudioParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAudioFrameObserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioFrameObserver_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAudioFrameObserver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AgoraBluePrintPlugin/IFrameObserver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_OnPlaybackAudioFrameBeforeMixing_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_OnPlaybackAudioFrameBeforeMixing = { "OnPlaybackAudioFrameBeforeMixing", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIAudioFrameObserver, OnPlaybackAudioFrameBeforeMixing), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrameBeforeMixing__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_OnPlaybackAudioFrameBeforeMixing_MetaData), Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_OnPlaybackAudioFrameBeforeMixing_MetaData) }; // 8791886
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_OnRecordAudioFrame_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_OnRecordAudioFrame = { "OnRecordAudioFrame", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIAudioFrameObserver, OnRecordAudioFrame), Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioFrame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_OnRecordAudioFrame_MetaData), Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_OnRecordAudioFrame_MetaData) }; // 2352777359
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_OnPlaybackAudioFrame_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_OnPlaybackAudioFrame = { "OnPlaybackAudioFrame", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIAudioFrameObserver, OnPlaybackAudioFrame), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioFrame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_OnPlaybackAudioFrame_MetaData), Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_OnPlaybackAudioFrame_MetaData) }; // 4023790219
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_OnMixedAudioFrame_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_OnMixedAudioFrame = { "OnMixedAudioFrame", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIAudioFrameObserver, OnMixedAudioFrame), Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioFrame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_OnMixedAudioFrame_MetaData), Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_OnMixedAudioFrame_MetaData) }; // 2541525478
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_GetObservedAudioFramePosition_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_GetObservedAudioFramePosition = { "GetObservedAudioFramePosition", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIAudioFrameObserver, GetObservedAudioFramePosition), Z_Construct_UDelegateFunction_AgoraPlugin_GetObservedAudioFramePosition__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_GetObservedAudioFramePosition_MetaData), Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_GetObservedAudioFramePosition_MetaData) }; // 1973374847
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_GetPlaybackAudioParams_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_GetPlaybackAudioParams = { "GetPlaybackAudioParams", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIAudioFrameObserver, GetPlaybackAudioParams), Z_Construct_UDelegateFunction_AgoraPlugin_GetPlaybackAudioParams__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_GetPlaybackAudioParams_MetaData), Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_GetPlaybackAudioParams_MetaData) }; // 2128336332
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_GetRecordAudioParams_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_GetRecordAudioParams = { "GetRecordAudioParams", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIAudioFrameObserver, GetRecordAudioParams), Z_Construct_UDelegateFunction_AgoraPlugin_GetRecordAudioParams__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_GetRecordAudioParams_MetaData), Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_GetRecordAudioParams_MetaData) }; // 3518131160
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_GetMixedAudioParams_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_GetMixedAudioParams = { "GetMixedAudioParams", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIAudioFrameObserver, GetMixedAudioParams), Z_Construct_UDelegateFunction_AgoraPlugin_GetMixedAudioParams__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_GetMixedAudioParams_MetaData), Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_GetMixedAudioParams_MetaData) }; // 708003573
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIAudioFrameObserver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_OnPlaybackAudioFrameBeforeMixing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_OnRecordAudioFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_OnPlaybackAudioFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_OnMixedAudioFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_GetObservedAudioFramePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_GetPlaybackAudioParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_GetRecordAudioParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAudioFrameObserver_Statics::NewProp_GetMixedAudioParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAudioFrameObserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIAudioFrameObserver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIAudioFrameObserver_Statics::ClassParams = {
		&UIAudioFrameObserver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIAudioFrameObserver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioFrameObserver_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioFrameObserver_Statics::Class_MetaDataParams), Z_Construct_UClass_UIAudioFrameObserver_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioFrameObserver_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UIAudioFrameObserver()
	{
		if (!Z_Registration_Info_UClass_UIAudioFrameObserver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIAudioFrameObserver.OuterSingleton, Z_Construct_UClass_UIAudioFrameObserver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIAudioFrameObserver.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UClass* StaticClass<UIAudioFrameObserver>()
	{
		return UIAudioFrameObserver::StaticClass();
	}
	UIAudioFrameObserver::UIAudioFrameObserver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAudioFrameObserver);
	UIAudioFrameObserver::~UIAudioFrameObserver() {}
	void UIAudioPcmFrameSink::StaticRegisterNativesUIAudioPcmFrameSink()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIAudioPcmFrameSink);
	UClass* Z_Construct_UClass_UIAudioPcmFrameSink_NoRegister()
	{
		return UIAudioPcmFrameSink::StaticClass();
	}
	struct Z_Construct_UClass_UIAudioPcmFrameSink_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFrame_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAudioPcmFrameSink_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioPcmFrameSink_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAudioPcmFrameSink_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AgoraBluePrintPlugin/IFrameObserver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAudioPcmFrameSink_Statics::NewProp_OnFrame_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIAudioPcmFrameSink_Statics::NewProp_OnFrame = { "OnFrame", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIAudioPcmFrameSink, OnFrame), Z_Construct_UDelegateFunction_AgoraPlugin_OnFrame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioPcmFrameSink_Statics::NewProp_OnFrame_MetaData), Z_Construct_UClass_UIAudioPcmFrameSink_Statics::NewProp_OnFrame_MetaData) }; // 986925618
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIAudioPcmFrameSink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAudioPcmFrameSink_Statics::NewProp_OnFrame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAudioPcmFrameSink_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIAudioPcmFrameSink>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIAudioPcmFrameSink_Statics::ClassParams = {
		&UIAudioPcmFrameSink::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIAudioPcmFrameSink_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioPcmFrameSink_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioPcmFrameSink_Statics::Class_MetaDataParams), Z_Construct_UClass_UIAudioPcmFrameSink_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioPcmFrameSink_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UIAudioPcmFrameSink()
	{
		if (!Z_Registration_Info_UClass_UIAudioPcmFrameSink.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIAudioPcmFrameSink.OuterSingleton, Z_Construct_UClass_UIAudioPcmFrameSink_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIAudioPcmFrameSink.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UClass* StaticClass<UIAudioPcmFrameSink>()
	{
		return UIAudioPcmFrameSink::StaticClass();
	}
	UIAudioPcmFrameSink::UIAudioPcmFrameSink(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAudioPcmFrameSink);
	UIAudioPcmFrameSink::~UIAudioPcmFrameSink() {}
	void UIAudioSpectrumObserver::StaticRegisterNativesUIAudioSpectrumObserver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIAudioSpectrumObserver);
	UClass* Z_Construct_UClass_UIAudioSpectrumObserver_NoRegister()
	{
		return UIAudioSpectrumObserver::StaticClass();
	}
	struct Z_Construct_UClass_UIAudioSpectrumObserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLocalAudioSpectrum_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLocalAudioSpectrum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRemoteAudioSpectrum_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemoteAudioSpectrum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAudioSpectrumObserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioSpectrumObserver_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAudioSpectrumObserver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AgoraBluePrintPlugin/IFrameObserver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAudioSpectrumObserver_Statics::NewProp_OnLocalAudioSpectrum_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIAudioSpectrumObserver_Statics::NewProp_OnLocalAudioSpectrum = { "OnLocalAudioSpectrum", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIAudioSpectrumObserver, OnLocalAudioSpectrum), Z_Construct_UDelegateFunction_AgoraPlugin_OnLocalAudioSpectrum__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioSpectrumObserver_Statics::NewProp_OnLocalAudioSpectrum_MetaData), Z_Construct_UClass_UIAudioSpectrumObserver_Statics::NewProp_OnLocalAudioSpectrum_MetaData) }; // 4155491497
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAudioSpectrumObserver_Statics::NewProp_OnRemoteAudioSpectrum_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIAudioSpectrumObserver_Statics::NewProp_OnRemoteAudioSpectrum = { "OnRemoteAudioSpectrum", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIAudioSpectrumObserver, OnRemoteAudioSpectrum), Z_Construct_UDelegateFunction_AgoraPlugin_OnRemoteAudioSpectrum__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioSpectrumObserver_Statics::NewProp_OnRemoteAudioSpectrum_MetaData), Z_Construct_UClass_UIAudioSpectrumObserver_Statics::NewProp_OnRemoteAudioSpectrum_MetaData) }; // 2493134173
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIAudioSpectrumObserver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAudioSpectrumObserver_Statics::NewProp_OnLocalAudioSpectrum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAudioSpectrumObserver_Statics::NewProp_OnRemoteAudioSpectrum,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAudioSpectrumObserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIAudioSpectrumObserver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIAudioSpectrumObserver_Statics::ClassParams = {
		&UIAudioSpectrumObserver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIAudioSpectrumObserver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioSpectrumObserver_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioSpectrumObserver_Statics::Class_MetaDataParams), Z_Construct_UClass_UIAudioSpectrumObserver_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioSpectrumObserver_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UIAudioSpectrumObserver()
	{
		if (!Z_Registration_Info_UClass_UIAudioSpectrumObserver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIAudioSpectrumObserver.OuterSingleton, Z_Construct_UClass_UIAudioSpectrumObserver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIAudioSpectrumObserver.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UClass* StaticClass<UIAudioSpectrumObserver>()
	{
		return UIAudioSpectrumObserver::StaticClass();
	}
	UIAudioSpectrumObserver::UIAudioSpectrumObserver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAudioSpectrumObserver);
	UIAudioSpectrumObserver::~UIAudioSpectrumObserver() {}
	void UIVideoFrameObserver::StaticRegisterNativesUIVideoFrameObserver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIVideoFrameObserver);
	UClass* Z_Construct_UClass_UIVideoFrameObserver_NoRegister()
	{
		return UIVideoFrameObserver::StaticClass();
	}
	struct Z_Construct_UClass_UIVideoFrameObserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCaptureVideoFrame_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCaptureVideoFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPreEncodeVideoFrame_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreEncodeVideoFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMediaPlayerVideoFrame_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMediaPlayerVideoFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRenderVideoFrame_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRenderVideoFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTranscodedVideoFrame_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTranscodedVideoFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GetVideoFrameProcessMode_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GetVideoFrameProcessMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GetVideoFormatPreference_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GetVideoFormatPreference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GetRotationApplied_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GetRotationApplied;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GetMirrorApplied_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GetMirrorApplied;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GetObservedFramePosition_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GetObservedFramePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsExternal_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_IsExternal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIVideoFrameObserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIVideoFrameObserver_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIVideoFrameObserver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AgoraBluePrintPlugin/IFrameObserver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_OnCaptureVideoFrame_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_OnCaptureVideoFrame = { "OnCaptureVideoFrame", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIVideoFrameObserver, OnCaptureVideoFrame), Z_Construct_UDelegateFunction_AgoraPlugin_OnCaptureVideoFrame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_OnCaptureVideoFrame_MetaData), Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_OnCaptureVideoFrame_MetaData) }; // 3377982055
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_OnPreEncodeVideoFrame_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_OnPreEncodeVideoFrame = { "OnPreEncodeVideoFrame", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIVideoFrameObserver, OnPreEncodeVideoFrame), Z_Construct_UDelegateFunction_AgoraPlugin_OnPreEncodeVideoFrame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_OnPreEncodeVideoFrame_MetaData), Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_OnPreEncodeVideoFrame_MetaData) }; // 193632219
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_OnMediaPlayerVideoFrame_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_OnMediaPlayerVideoFrame = { "OnMediaPlayerVideoFrame", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIVideoFrameObserver, OnMediaPlayerVideoFrame), Z_Construct_UDelegateFunction_AgoraPlugin_OnMediaPlayerVideoFrame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_OnMediaPlayerVideoFrame_MetaData), Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_OnMediaPlayerVideoFrame_MetaData) }; // 202333885
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_OnRenderVideoFrame_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_OnRenderVideoFrame = { "OnRenderVideoFrame", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIVideoFrameObserver, OnRenderVideoFrame), Z_Construct_UDelegateFunction_AgoraPlugin_OnRenderVideoFrame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_OnRenderVideoFrame_MetaData), Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_OnRenderVideoFrame_MetaData) }; // 692384995
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_OnTranscodedVideoFrame_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_OnTranscodedVideoFrame = { "OnTranscodedVideoFrame", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIVideoFrameObserver, OnTranscodedVideoFrame), Z_Construct_UDelegateFunction_AgoraPlugin_OnTranscodedVideoFrame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_OnTranscodedVideoFrame_MetaData), Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_OnTranscodedVideoFrame_MetaData) }; // 1477374520
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_GetVideoFrameProcessMode_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_GetVideoFrameProcessMode = { "GetVideoFrameProcessMode", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIVideoFrameObserver, GetVideoFrameProcessMode), Z_Construct_UDelegateFunction_AgoraPlugin_GetVideoFrameProcessMode__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_GetVideoFrameProcessMode_MetaData), Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_GetVideoFrameProcessMode_MetaData) }; // 3233391255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_GetVideoFormatPreference_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_GetVideoFormatPreference = { "GetVideoFormatPreference", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIVideoFrameObserver, GetVideoFormatPreference), Z_Construct_UDelegateFunction_AgoraPlugin_GetVideoFormatPreference__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_GetVideoFormatPreference_MetaData), Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_GetVideoFormatPreference_MetaData) }; // 1979198664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_GetRotationApplied_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_GetRotationApplied = { "GetRotationApplied", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIVideoFrameObserver, GetRotationApplied), Z_Construct_UDelegateFunction_AgoraPlugin_GetRotationApplied__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_GetRotationApplied_MetaData), Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_GetRotationApplied_MetaData) }; // 4019518761
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_GetMirrorApplied_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_GetMirrorApplied = { "GetMirrorApplied", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIVideoFrameObserver, GetMirrorApplied), Z_Construct_UDelegateFunction_AgoraPlugin_GetMirrorApplied__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_GetMirrorApplied_MetaData), Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_GetMirrorApplied_MetaData) }; // 3303973860
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_GetObservedFramePosition_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_GetObservedFramePosition = { "GetObservedFramePosition", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIVideoFrameObserver, GetObservedFramePosition), Z_Construct_UDelegateFunction_AgoraPlugin_GetObservedFramePosition__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_GetObservedFramePosition_MetaData), Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_GetObservedFramePosition_MetaData) }; // 147149921
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_IsExternal_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_IsExternal = { "IsExternal", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIVideoFrameObserver, IsExternal), Z_Construct_UDelegateFunction_AgoraPlugin_IsExternal__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_IsExternal_MetaData), Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_IsExternal_MetaData) }; // 2448613156
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIVideoFrameObserver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_OnCaptureVideoFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_OnPreEncodeVideoFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_OnMediaPlayerVideoFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_OnRenderVideoFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_OnTranscodedVideoFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_GetVideoFrameProcessMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_GetVideoFormatPreference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_GetRotationApplied,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_GetMirrorApplied,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_GetObservedFramePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIVideoFrameObserver_Statics::NewProp_IsExternal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIVideoFrameObserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIVideoFrameObserver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIVideoFrameObserver_Statics::ClassParams = {
		&UIVideoFrameObserver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIVideoFrameObserver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIVideoFrameObserver_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIVideoFrameObserver_Statics::Class_MetaDataParams), Z_Construct_UClass_UIVideoFrameObserver_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIVideoFrameObserver_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UIVideoFrameObserver()
	{
		if (!Z_Registration_Info_UClass_UIVideoFrameObserver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIVideoFrameObserver.OuterSingleton, Z_Construct_UClass_UIVideoFrameObserver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIVideoFrameObserver.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UClass* StaticClass<UIVideoFrameObserver>()
	{
		return UIVideoFrameObserver::StaticClass();
	}
	UIVideoFrameObserver::UIVideoFrameObserver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIVideoFrameObserver);
	UIVideoFrameObserver::~UIVideoFrameObserver() {}
	struct Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_Statics::EnumInfo[] = {
		{ EBYTES_PER_SAMPLE_StaticEnum, TEXT("EBYTES_PER_SAMPLE"), &Z_Registration_Info_UEnum_EBYTES_PER_SAMPLE, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 350425444U) },
		{ EVIDEO_PIXEL_FORMAT_StaticEnum, TEXT("EVIDEO_PIXEL_FORMAT"), &Z_Registration_Info_UEnum_EVIDEO_PIXEL_FORMAT, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1622204650U) },
		{ EAUDIO_FRAME_TYPE_StaticEnum, TEXT("EAUDIO_FRAME_TYPE"), &Z_Registration_Info_UEnum_EAUDIO_FRAME_TYPE, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2858956550U) },
		{ EVIDEO_FRAME_TYPE_StaticEnum, TEXT("EVIDEO_FRAME_TYPE"), &Z_Registration_Info_UEnum_EVIDEO_FRAME_TYPE, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1977194757U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_Statics::ScriptStructInfo[] = {
		{ FAudioPcmFrame::StaticStruct, Z_Construct_UScriptStruct_FAudioPcmFrame_Statics::NewStructOps, TEXT("AudioPcmFrame"), &Z_Registration_Info_UScriptStruct_AudioPcmFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioPcmFrame), 2425578927U) },
		{ FVideoFrame::StaticStruct, Z_Construct_UScriptStruct_FVideoFrame_Statics::NewStructOps, TEXT("VideoFrame"), &Z_Registration_Info_UScriptStruct_VideoFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVideoFrame), 1985163173U) },
		{ FAudioFrame::StaticStruct, Z_Construct_UScriptStruct_FAudioFrame_Statics::NewStructOps, TEXT("AudioFrame"), &Z_Registration_Info_UScriptStruct_AudioFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioFrame), 3001111353U) },
		{ FAudioSpectrumData::StaticStruct, Z_Construct_UScriptStruct_FAudioSpectrumData_Statics::NewStructOps, TEXT("AudioSpectrumData"), &Z_Registration_Info_UScriptStruct_AudioSpectrumData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioSpectrumData), 2763961381U) },
		{ FUserAudioSpectrumInfo::StaticStruct, Z_Construct_UScriptStruct_FUserAudioSpectrumInfo_Statics::NewStructOps, TEXT("UserAudioSpectrumInfo"), &Z_Registration_Info_UScriptStruct_UserAudioSpectrumInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserAudioSpectrumInfo), 2294541144U) },
		{ FEncodedVideoFrameInfo::StaticStruct, Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics::NewStructOps, TEXT("EncodedVideoFrameInfo"), &Z_Registration_Info_UScriptStruct_EncodedVideoFrameInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEncodedVideoFrameInfo), 994141003U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIAudioFrameObserver, UIAudioFrameObserver::StaticClass, TEXT("UIAudioFrameObserver"), &Z_Registration_Info_UClass_UIAudioFrameObserver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIAudioFrameObserver), 471577645U) },
		{ Z_Construct_UClass_UIAudioPcmFrameSink, UIAudioPcmFrameSink::StaticClass, TEXT("UIAudioPcmFrameSink"), &Z_Registration_Info_UClass_UIAudioPcmFrameSink, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIAudioPcmFrameSink), 3397327562U) },
		{ Z_Construct_UClass_UIAudioSpectrumObserver, UIAudioSpectrumObserver::StaticClass, TEXT("UIAudioSpectrumObserver"), &Z_Registration_Info_UClass_UIAudioSpectrumObserver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIAudioSpectrumObserver), 3269084977U) },
		{ Z_Construct_UClass_UIVideoFrameObserver, UIVideoFrameObserver::StaticClass, TEXT("UIVideoFrameObserver"), &Z_Registration_Info_UClass_UIVideoFrameObserver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIVideoFrameObserver), 756811138U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_1277398859(TEXT("/Script/AgoraPlugin"),
		Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
