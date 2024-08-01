// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAudioEncodedFrameObserver() {}
// Cross Module References
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIAudioEncodedFrameObserver();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIAudioEncodedFrameObserver_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIPacketObserver();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIPacketObserver_NoRegister();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EAUDIO_CODEC_TYPE();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FEncodedAudioFrameInfo();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPacket();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AgoraPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Packet;
class UScriptStruct* FPacket::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Packet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Packet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPacket, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("Packet"));
	}
	return Z_Registration_Info_UScriptStruct_Packet.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FPacket>()
{
	return FPacket::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPacket_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FInt64PropertyParams NewProp_buffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_buffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_size_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPacket_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPacket_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPacket>();
	}
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPacket_Statics::NewProp_buffer_Inner = { "buffer", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPacket_Statics::NewProp_buffer_MetaData[] = {
		{ "Category", "Agora|Packet" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPacket_Statics::NewProp_buffer = { "buffer", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPacket, buffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPacket_Statics::NewProp_buffer_MetaData), Z_Construct_UScriptStruct_FPacket_Statics::NewProp_buffer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPacket_Statics::NewProp_size_MetaData[] = {
		{ "Category", "Agora|Packet" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPacket_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPacket, size), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPacket_Statics::NewProp_size_MetaData), Z_Construct_UScriptStruct_FPacket_Statics::NewProp_size_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPacket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacket_Statics::NewProp_buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacket_Statics::NewProp_buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPacket_Statics::NewProp_size,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPacket_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"Packet",
		Z_Construct_UScriptStruct_FPacket_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPacket_Statics::PropPointers),
		sizeof(FPacket),
		alignof(FPacket),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPacket_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPacket_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPacket_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPacket()
	{
		if (!Z_Registration_Info_UScriptStruct_Packet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Packet.InnerSingleton, Z_Construct_UScriptStruct_FPacket_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Packet.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAUDIO_CODEC_TYPE;
	static UEnum* EAUDIO_CODEC_TYPE_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAUDIO_CODEC_TYPE.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAUDIO_CODEC_TYPE.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AgoraPlugin_EAUDIO_CODEC_TYPE, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EAUDIO_CODEC_TYPE"));
		}
		return Z_Registration_Info_UEnum_EAUDIO_CODEC_TYPE.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UEnum* StaticEnum<EAUDIO_CODEC_TYPE>()
	{
		return EAUDIO_CODEC_TYPE_StaticEnum();
	}
	struct Z_Construct_UEnum_AgoraPlugin_EAUDIO_CODEC_TYPE_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AgoraPlugin_EAUDIO_CODEC_TYPE_Statics::Enumerators[] = {
		{ "EAUDIO_CODEC_TYPE::AUDIO_CODEC_NULL", (int64)EAUDIO_CODEC_TYPE::AUDIO_CODEC_NULL },
		{ "EAUDIO_CODEC_TYPE::AUDIO_CODEC_OPUS", (int64)EAUDIO_CODEC_TYPE::AUDIO_CODEC_OPUS },
		{ "EAUDIO_CODEC_TYPE::AUDIO_CODEC_PCMA", (int64)EAUDIO_CODEC_TYPE::AUDIO_CODEC_PCMA },
		{ "EAUDIO_CODEC_TYPE::AUDIO_CODEC_PCMU", (int64)EAUDIO_CODEC_TYPE::AUDIO_CODEC_PCMU },
		{ "EAUDIO_CODEC_TYPE::AUDIO_CODEC_G722", (int64)EAUDIO_CODEC_TYPE::AUDIO_CODEC_G722 },
		{ "EAUDIO_CODEC_TYPE::AUDIO_CODEC_AACLC", (int64)EAUDIO_CODEC_TYPE::AUDIO_CODEC_AACLC },
		{ "EAUDIO_CODEC_TYPE::AUDIO_CODEC_HEAAC", (int64)EAUDIO_CODEC_TYPE::AUDIO_CODEC_HEAAC },
		{ "EAUDIO_CODEC_TYPE::AUDIO_CODEC_JC1", (int64)EAUDIO_CODEC_TYPE::AUDIO_CODEC_JC1 },
		{ "EAUDIO_CODEC_TYPE::AUDIO_CODEC_HEAAC2", (int64)EAUDIO_CODEC_TYPE::AUDIO_CODEC_HEAAC2 },
		{ "EAUDIO_CODEC_TYPE::AUDIO_CODEC_LPCNET", (int64)EAUDIO_CODEC_TYPE::AUDIO_CODEC_LPCNET },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AgoraPlugin_EAUDIO_CODEC_TYPE_Statics::Enum_MetaDataParams[] = {
		{ "AUDIO_CODEC_AACLC.Name", "EAUDIO_CODEC_TYPE::AUDIO_CODEC_AACLC" },
		{ "AUDIO_CODEC_G722.Name", "EAUDIO_CODEC_TYPE::AUDIO_CODEC_G722" },
		{ "AUDIO_CODEC_HEAAC.Name", "EAUDIO_CODEC_TYPE::AUDIO_CODEC_HEAAC" },
		{ "AUDIO_CODEC_HEAAC2.Name", "EAUDIO_CODEC_TYPE::AUDIO_CODEC_HEAAC2" },
		{ "AUDIO_CODEC_JC1.Name", "EAUDIO_CODEC_TYPE::AUDIO_CODEC_JC1" },
		{ "AUDIO_CODEC_LPCNET.Name", "EAUDIO_CODEC_TYPE::AUDIO_CODEC_LPCNET" },
		{ "AUDIO_CODEC_NULL.Name", "EAUDIO_CODEC_TYPE::AUDIO_CODEC_NULL" },
		{ "AUDIO_CODEC_OPUS.Name", "EAUDIO_CODEC_TYPE::AUDIO_CODEC_OPUS" },
		{ "AUDIO_CODEC_PCMA.Name", "EAUDIO_CODEC_TYPE::AUDIO_CODEC_PCMA" },
		{ "AUDIO_CODEC_PCMU.Name", "EAUDIO_CODEC_TYPE::AUDIO_CODEC_PCMU" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AgoraPlugin_EAUDIO_CODEC_TYPE_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		"EAUDIO_CODEC_TYPE",
		"EAUDIO_CODEC_TYPE",
		Z_Construct_UEnum_AgoraPlugin_EAUDIO_CODEC_TYPE_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EAUDIO_CODEC_TYPE_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EAUDIO_CODEC_TYPE_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AgoraPlugin_EAUDIO_CODEC_TYPE_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AgoraPlugin_EAUDIO_CODEC_TYPE()
	{
		if (!Z_Registration_Info_UEnum_EAUDIO_CODEC_TYPE.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAUDIO_CODEC_TYPE.InnerSingleton, Z_Construct_UEnum_AgoraPlugin_EAUDIO_CODEC_TYPE_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAUDIO_CODEC_TYPE.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EncodedAudioFrameAdvancedSettings;
class UScriptStruct* FEncodedAudioFrameAdvancedSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EncodedAudioFrameAdvancedSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EncodedAudioFrameAdvancedSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EncodedAudioFrameAdvancedSettings"));
	}
	return Z_Registration_Info_UScriptStruct_EncodedAudioFrameAdvancedSettings.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FEncodedAudioFrameAdvancedSettings>()
{
	return FEncodedAudioFrameAdvancedSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speech_MetaData[];
#endif
		static void NewProp_speech_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_speech;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sendEvenIfEmpty_MetaData[];
#endif
		static void NewProp_sendEvenIfEmpty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_sendEvenIfEmpty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEncodedAudioFrameAdvancedSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewProp_speech_MetaData[] = {
		{ "Category", "Agora|EncodedAudioFrameAdvancedSettings" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewProp_speech_SetBit(void* Obj)
	{
		((FEncodedAudioFrameAdvancedSettings*)Obj)->speech = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewProp_speech = { "speech", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEncodedAudioFrameAdvancedSettings), &Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewProp_speech_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewProp_speech_MetaData), Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewProp_speech_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewProp_sendEvenIfEmpty_MetaData[] = {
		{ "Category", "Agora|EncodedAudioFrameAdvancedSettings" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewProp_sendEvenIfEmpty_SetBit(void* Obj)
	{
		((FEncodedAudioFrameAdvancedSettings*)Obj)->sendEvenIfEmpty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewProp_sendEvenIfEmpty = { "sendEvenIfEmpty", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEncodedAudioFrameAdvancedSettings), &Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewProp_sendEvenIfEmpty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewProp_sendEvenIfEmpty_MetaData), Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewProp_sendEvenIfEmpty_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewProp_speech,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewProp_sendEvenIfEmpty,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"EncodedAudioFrameAdvancedSettings",
		Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::PropPointers),
		sizeof(FEncodedAudioFrameAdvancedSettings),
		alignof(FEncodedAudioFrameAdvancedSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_EncodedAudioFrameAdvancedSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EncodedAudioFrameAdvancedSettings.InnerSingleton, Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EncodedAudioFrameAdvancedSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EncodedAudioFrameInfo;
class UScriptStruct* FEncodedAudioFrameInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EncodedAudioFrameInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EncodedAudioFrameInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEncodedAudioFrameInfo, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EncodedAudioFrameInfo"));
	}
	return Z_Registration_Info_UScriptStruct_EncodedAudioFrameInfo.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FEncodedAudioFrameInfo>()
{
	return FEncodedAudioFrameInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_codec_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_codec_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_codec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sampleRateHz_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_sampleRateHz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_samplesPerChannel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_samplesPerChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_numberOfChannels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_numberOfChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_advancedSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_advancedSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_captureTimeMs_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_captureTimeMs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEncodedAudioFrameInfo>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_codec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_codec_MetaData[] = {
		{ "Category", "Agora|EncodedAudioFrameInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_codec = { "codec", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEncodedAudioFrameInfo, codec), Z_Construct_UEnum_AgoraPlugin_EAUDIO_CODEC_TYPE, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_codec_MetaData), Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_codec_MetaData) }; // 2791943159
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_sampleRateHz_MetaData[] = {
		{ "Category", "Agora|EncodedAudioFrameInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_sampleRateHz = { "sampleRateHz", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEncodedAudioFrameInfo, sampleRateHz), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_sampleRateHz_MetaData), Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_sampleRateHz_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_samplesPerChannel_MetaData[] = {
		{ "Category", "Agora|EncodedAudioFrameInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_samplesPerChannel = { "samplesPerChannel", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEncodedAudioFrameInfo, samplesPerChannel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_samplesPerChannel_MetaData), Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_samplesPerChannel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_numberOfChannels_MetaData[] = {
		{ "Category", "Agora|EncodedAudioFrameInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_numberOfChannels = { "numberOfChannels", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEncodedAudioFrameInfo, numberOfChannels), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_numberOfChannels_MetaData), Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_numberOfChannels_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_advancedSettings_MetaData[] = {
		{ "Category", "Agora|EncodedAudioFrameInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_advancedSettings = { "advancedSettings", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEncodedAudioFrameInfo, advancedSettings), Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_advancedSettings_MetaData), Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_advancedSettings_MetaData) }; // 3729893837
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_captureTimeMs_MetaData[] = {
		{ "Category", "Agora|EncodedAudioFrameInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_captureTimeMs = { "captureTimeMs", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEncodedAudioFrameInfo, captureTimeMs), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_captureTimeMs_MetaData), Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_captureTimeMs_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_codec_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_codec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_sampleRateHz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_samplesPerChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_numberOfChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_advancedSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewProp_captureTimeMs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
		nullptr,
		&NewStructOps,
		"EncodedAudioFrameInfo",
		Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::PropPointers),
		sizeof(FEncodedAudioFrameInfo),
		alignof(FEncodedAudioFrameInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEncodedAudioFrameInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_EncodedAudioFrameInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EncodedAudioFrameInfo.InnerSingleton, Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EncodedAudioFrameInfo.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnSendAudioPacket_Parms
		{
			FPacket packet;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_packet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_packet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::NewProp_packet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::NewProp_packet = { "packet", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnSendAudioPacket_Parms, packet), Z_Construct_UScriptStruct_FPacket, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::NewProp_packet_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::NewProp_packet_MetaData) }; // 2945016856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::NewProp_packet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnSendAudioPacket__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnSendAudioPacket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnSendAudioPacket_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSendAudioPacket_DelegateWrapper(const FMulticastScriptDelegate& OnSendAudioPacket, FPacket const& packet)
{
	struct _Script_AgoraPlugin_eventOnSendAudioPacket_Parms
	{
		FPacket packet;
	};
	_Script_AgoraPlugin_eventOnSendAudioPacket_Parms Parms;
	Parms.packet=packet;
	OnSendAudioPacket.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnSendVideoPacket_Parms
		{
			FPacket packet;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_packet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_packet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::NewProp_packet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::NewProp_packet = { "packet", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnSendVideoPacket_Parms, packet), Z_Construct_UScriptStruct_FPacket, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::NewProp_packet_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::NewProp_packet_MetaData) }; // 2945016856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::NewProp_packet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnSendVideoPacket__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnSendVideoPacket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnSendVideoPacket_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSendVideoPacket_DelegateWrapper(const FMulticastScriptDelegate& OnSendVideoPacket, FPacket const& packet)
{
	struct _Script_AgoraPlugin_eventOnSendVideoPacket_Parms
	{
		FPacket packet;
	};
	_Script_AgoraPlugin_eventOnSendVideoPacket_Parms Parms;
	Parms.packet=packet;
	OnSendVideoPacket.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnReceiveAudioPacket_Parms
		{
			FPacket packet;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_packet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_packet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::NewProp_packet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::NewProp_packet = { "packet", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnReceiveAudioPacket_Parms, packet), Z_Construct_UScriptStruct_FPacket, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::NewProp_packet_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::NewProp_packet_MetaData) }; // 2945016856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::NewProp_packet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnReceiveAudioPacket__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnReceiveAudioPacket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnReceiveAudioPacket_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnReceiveAudioPacket_DelegateWrapper(const FMulticastScriptDelegate& OnReceiveAudioPacket, FPacket const& packet)
{
	struct _Script_AgoraPlugin_eventOnReceiveAudioPacket_Parms
	{
		FPacket packet;
	};
	_Script_AgoraPlugin_eventOnReceiveAudioPacket_Parms Parms;
	Parms.packet=packet;
	OnReceiveAudioPacket.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnReceiveVideoPacket_Parms
		{
			FPacket packet;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_packet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_packet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::NewProp_packet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::NewProp_packet = { "packet", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnReceiveVideoPacket_Parms, packet), Z_Construct_UScriptStruct_FPacket, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::NewProp_packet_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::NewProp_packet_MetaData) }; // 2945016856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::NewProp_packet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnReceiveVideoPacket__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnReceiveVideoPacket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnReceiveVideoPacket_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnReceiveVideoPacket_DelegateWrapper(const FMulticastScriptDelegate& OnReceiveVideoPacket, FPacket const& packet)
{
	struct _Script_AgoraPlugin_eventOnReceiveVideoPacket_Parms
	{
		FPacket packet;
	};
	_Script_AgoraPlugin_eventOnReceiveVideoPacket_Parms Parms;
	Parms.packet=packet;
	OnReceiveVideoPacket.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnRecordAudioEncodedFrame_Parms
		{
			TArray<int64> frameBuffer;
			int32 length;
			FEncodedAudioFrameInfo audioEncodedFrameInfo;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_frameBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_frameBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_frameBuffer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_length;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_audioEncodedFrameInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_audioEncodedFrameInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_Inner = { "frameBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer = { "frameBuffer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnRecordAudioEncodedFrame_Parms, frameBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnRecordAudioEncodedFrame_Parms, length), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo = { "audioEncodedFrameInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnRecordAudioEncodedFrame_Parms, audioEncodedFrameInfo), Z_Construct_UScriptStruct_FEncodedAudioFrameInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo_MetaData) }; // 3831813461
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::NewProp_length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnRecordAudioEncodedFrame__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnRecordAudioEncodedFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnRecordAudioEncodedFrame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRecordAudioEncodedFrame_DelegateWrapper(const FMulticastScriptDelegate& OnRecordAudioEncodedFrame, const TArray<int64>& frameBuffer, int32 length, FEncodedAudioFrameInfo const& audioEncodedFrameInfo)
{
	struct _Script_AgoraPlugin_eventOnRecordAudioEncodedFrame_Parms
	{
		TArray<int64> frameBuffer;
		int32 length;
		FEncodedAudioFrameInfo audioEncodedFrameInfo;
	};
	_Script_AgoraPlugin_eventOnRecordAudioEncodedFrame_Parms Parms;
	Parms.frameBuffer=frameBuffer;
	Parms.length=length;
	Parms.audioEncodedFrameInfo=audioEncodedFrameInfo;
	OnRecordAudioEncodedFrame.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnPlaybackAudioEncodedFrame_Parms
		{
			TArray<int64> frameBuffer;
			int32 length;
			FEncodedAudioFrameInfo audioEncodedFrameInfo;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_frameBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_frameBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_frameBuffer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_length;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_audioEncodedFrameInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_audioEncodedFrameInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_Inner = { "frameBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer = { "frameBuffer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlaybackAudioEncodedFrame_Parms, frameBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlaybackAudioEncodedFrame_Parms, length), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo = { "audioEncodedFrameInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlaybackAudioEncodedFrame_Parms, audioEncodedFrameInfo), Z_Construct_UScriptStruct_FEncodedAudioFrameInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo_MetaData) }; // 3831813461
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::NewProp_length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPlaybackAudioEncodedFrame__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlaybackAudioEncodedFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlaybackAudioEncodedFrame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPlaybackAudioEncodedFrame_DelegateWrapper(const FMulticastScriptDelegate& OnPlaybackAudioEncodedFrame, const TArray<int64>& frameBuffer, int32 length, FEncodedAudioFrameInfo const& audioEncodedFrameInfo)
{
	struct _Script_AgoraPlugin_eventOnPlaybackAudioEncodedFrame_Parms
	{
		TArray<int64> frameBuffer;
		int32 length;
		FEncodedAudioFrameInfo audioEncodedFrameInfo;
	};
	_Script_AgoraPlugin_eventOnPlaybackAudioEncodedFrame_Parms Parms;
	Parms.frameBuffer=frameBuffer;
	Parms.length=length;
	Parms.audioEncodedFrameInfo=audioEncodedFrameInfo;
	OnPlaybackAudioEncodedFrame.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnMixedAudioEncodedFrame_Parms
		{
			TArray<int64> frameBuffer;
			int32 length;
			FEncodedAudioFrameInfo audioEncodedFrameInfo;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_frameBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_frameBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_frameBuffer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_length;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_audioEncodedFrameInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_audioEncodedFrameInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_Inner = { "frameBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer = { "frameBuffer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnMixedAudioEncodedFrame_Parms, frameBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnMixedAudioEncodedFrame_Parms, length), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo = { "audioEncodedFrameInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnMixedAudioEncodedFrame_Parms, audioEncodedFrameInfo), Z_Construct_UScriptStruct_FEncodedAudioFrameInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo_MetaData) }; // 3831813461
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::NewProp_frameBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::NewProp_length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::NewProp_audioEncodedFrameInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnMixedAudioEncodedFrame__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnMixedAudioEncodedFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnMixedAudioEncodedFrame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMixedAudioEncodedFrame_DelegateWrapper(const FMulticastScriptDelegate& OnMixedAudioEncodedFrame, const TArray<int64>& frameBuffer, int32 length, FEncodedAudioFrameInfo const& audioEncodedFrameInfo)
{
	struct _Script_AgoraPlugin_eventOnMixedAudioEncodedFrame_Parms
	{
		TArray<int64> frameBuffer;
		int32 length;
		FEncodedAudioFrameInfo audioEncodedFrameInfo;
	};
	_Script_AgoraPlugin_eventOnMixedAudioEncodedFrame_Parms Parms;
	Parms.frameBuffer=frameBuffer;
	Parms.length=length;
	Parms.audioEncodedFrameInfo=audioEncodedFrameInfo;
	OnMixedAudioEncodedFrame.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UIPacketObserver::StaticRegisterNativesUIPacketObserver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIPacketObserver);
	UClass* Z_Construct_UClass_UIPacketObserver_NoRegister()
	{
		return UIPacketObserver::StaticClass();
	}
	struct Z_Construct_UClass_UIPacketObserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSendAudioPacket_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSendAudioPacket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSendVideoPacket_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSendVideoPacket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReceiveAudioPacket_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReceiveAudioPacket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReceiveVideoPacket_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReceiveVideoPacket;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIPacketObserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIPacketObserver_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIPacketObserver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnSendAudioPacket_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnSendAudioPacket = { "OnSendAudioPacket", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIPacketObserver, OnSendAudioPacket), Z_Construct_UDelegateFunction_AgoraPlugin_OnSendAudioPacket__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnSendAudioPacket_MetaData), Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnSendAudioPacket_MetaData) }; // 3121480738
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnSendVideoPacket_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnSendVideoPacket = { "OnSendVideoPacket", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIPacketObserver, OnSendVideoPacket), Z_Construct_UDelegateFunction_AgoraPlugin_OnSendVideoPacket__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnSendVideoPacket_MetaData), Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnSendVideoPacket_MetaData) }; // 1080060132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnReceiveAudioPacket_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnReceiveAudioPacket = { "OnReceiveAudioPacket", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIPacketObserver, OnReceiveAudioPacket), Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveAudioPacket__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnReceiveAudioPacket_MetaData), Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnReceiveAudioPacket_MetaData) }; // 3269048879
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnReceiveVideoPacket_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnReceiveVideoPacket = { "OnReceiveVideoPacket", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIPacketObserver, OnReceiveVideoPacket), Z_Construct_UDelegateFunction_AgoraPlugin_OnReceiveVideoPacket__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnReceiveVideoPacket_MetaData), Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnReceiveVideoPacket_MetaData) }; // 1587436462
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIPacketObserver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnSendAudioPacket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnSendVideoPacket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnReceiveAudioPacket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIPacketObserver_Statics::NewProp_OnReceiveVideoPacket,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIPacketObserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIPacketObserver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIPacketObserver_Statics::ClassParams = {
		&UIPacketObserver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIPacketObserver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIPacketObserver_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIPacketObserver_Statics::Class_MetaDataParams), Z_Construct_UClass_UIPacketObserver_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIPacketObserver_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UIPacketObserver()
	{
		if (!Z_Registration_Info_UClass_UIPacketObserver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIPacketObserver.OuterSingleton, Z_Construct_UClass_UIPacketObserver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIPacketObserver.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UClass* StaticClass<UIPacketObserver>()
	{
		return UIPacketObserver::StaticClass();
	}
	UIPacketObserver::UIPacketObserver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIPacketObserver);
	UIPacketObserver::~UIPacketObserver() {}
	void UIAudioEncodedFrameObserver::StaticRegisterNativesUIAudioEncodedFrameObserver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIAudioEncodedFrameObserver);
	UClass* Z_Construct_UClass_UIAudioEncodedFrameObserver_NoRegister()
	{
		return UIAudioEncodedFrameObserver::StaticClass();
	}
	struct Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRecordAudioEncoded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRecordAudioEncoded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlaybackAudioEncoded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlaybackAudioEncoded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMixedAudioEncoded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMixedAudioEncoded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnRecordAudioEncoded_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnRecordAudioEncoded = { "OnRecordAudioEncoded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIAudioEncodedFrameObserver, OnRecordAudioEncoded), Z_Construct_UDelegateFunction_AgoraPlugin_OnRecordAudioEncodedFrame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnRecordAudioEncoded_MetaData), Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnRecordAudioEncoded_MetaData) }; // 3083478785
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnPlaybackAudioEncoded_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnPlaybackAudioEncoded = { "OnPlaybackAudioEncoded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIAudioEncodedFrameObserver, OnPlaybackAudioEncoded), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlaybackAudioEncodedFrame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnPlaybackAudioEncoded_MetaData), Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnPlaybackAudioEncoded_MetaData) }; // 1164070878
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnMixedAudioEncoded_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnMixedAudioEncoded = { "OnMixedAudioEncoded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIAudioEncodedFrameObserver, OnMixedAudioEncoded), Z_Construct_UDelegateFunction_AgoraPlugin_OnMixedAudioEncodedFrame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnMixedAudioEncoded_MetaData), Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnMixedAudioEncoded_MetaData) }; // 1066371271
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnRecordAudioEncoded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnPlaybackAudioEncoded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::NewProp_OnMixedAudioEncoded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIAudioEncodedFrameObserver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::ClassParams = {
		&UIAudioEncodedFrameObserver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::Class_MetaDataParams), Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UIAudioEncodedFrameObserver()
	{
		if (!Z_Registration_Info_UClass_UIAudioEncodedFrameObserver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIAudioEncodedFrameObserver.OuterSingleton, Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIAudioEncodedFrameObserver.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UClass* StaticClass<UIAudioEncodedFrameObserver>()
	{
		return UIAudioEncodedFrameObserver::StaticClass();
	}
	UIAudioEncodedFrameObserver::UIAudioEncodedFrameObserver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAudioEncodedFrameObserver);
	UIAudioEncodedFrameObserver::~UIAudioEncodedFrameObserver() {}
	struct Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_Statics::EnumInfo[] = {
		{ EAUDIO_CODEC_TYPE_StaticEnum, TEXT("EAUDIO_CODEC_TYPE"), &Z_Registration_Info_UEnum_EAUDIO_CODEC_TYPE, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2791943159U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_Statics::ScriptStructInfo[] = {
		{ FPacket::StaticStruct, Z_Construct_UScriptStruct_FPacket_Statics::NewStructOps, TEXT("Packet"), &Z_Registration_Info_UScriptStruct_Packet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPacket), 2945016856U) },
		{ FEncodedAudioFrameAdvancedSettings::StaticStruct, Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics::NewStructOps, TEXT("EncodedAudioFrameAdvancedSettings"), &Z_Registration_Info_UScriptStruct_EncodedAudioFrameAdvancedSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEncodedAudioFrameAdvancedSettings), 3729893837U) },
		{ FEncodedAudioFrameInfo::StaticStruct, Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics::NewStructOps, TEXT("EncodedAudioFrameInfo"), &Z_Registration_Info_UScriptStruct_EncodedAudioFrameInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEncodedAudioFrameInfo), 3831813461U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIPacketObserver, UIPacketObserver::StaticClass, TEXT("UIPacketObserver"), &Z_Registration_Info_UClass_UIPacketObserver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIPacketObserver), 3711709779U) },
		{ Z_Construct_UClass_UIAudioEncodedFrameObserver, UIAudioEncodedFrameObserver::StaticClass, TEXT("UIAudioEncodedFrameObserver"), &Z_Registration_Info_UClass_UIAudioEncodedFrameObserver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIAudioEncodedFrameObserver), 3395207355U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_3009216628(TEXT("/Script/AgoraPlugin"),
		Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
