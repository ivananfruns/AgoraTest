// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AgoraBluePrintPlugin/IAudioEncodedFrameObserver.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEncodedAudioFrameInfo;
struct FPacket;
#ifdef AGORAPLUGIN_IAudioEncodedFrameObserver_generated_h
#error "IAudioEncodedFrameObserver.generated.h already included, missing '#pragma once' in IAudioEncodedFrameObserver.h"
#endif
#define AGORAPLUGIN_IAudioEncodedFrameObserver_generated_h

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPacket_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FPacket>();

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEncodedAudioFrameAdvancedSettings_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FEncodedAudioFrameAdvancedSettings>();

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEncodedAudioFrameInfo_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FEncodedAudioFrameInfo>();

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_77_DELEGATE \
AGORAPLUGIN_API void FOnSendAudioPacket_DelegateWrapper(const FMulticastScriptDelegate& OnSendAudioPacket, FPacket const& packet);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_78_DELEGATE \
AGORAPLUGIN_API void FOnSendVideoPacket_DelegateWrapper(const FMulticastScriptDelegate& OnSendVideoPacket, FPacket const& packet);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_79_DELEGATE \
AGORAPLUGIN_API void FOnReceiveAudioPacket_DelegateWrapper(const FMulticastScriptDelegate& OnReceiveAudioPacket, FPacket const& packet);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_80_DELEGATE \
AGORAPLUGIN_API void FOnReceiveVideoPacket_DelegateWrapper(const FMulticastScriptDelegate& OnReceiveVideoPacket, FPacket const& packet);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_81_DELEGATE \
AGORAPLUGIN_API void FOnRecordAudioEncodedFrame_DelegateWrapper(const FMulticastScriptDelegate& OnRecordAudioEncodedFrame, const TArray<int64>& frameBuffer, int32 length, FEncodedAudioFrameInfo const& audioEncodedFrameInfo);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_82_DELEGATE \
AGORAPLUGIN_API void FOnPlaybackAudioEncodedFrame_DelegateWrapper(const FMulticastScriptDelegate& OnPlaybackAudioEncodedFrame, const TArray<int64>& frameBuffer, int32 length, FEncodedAudioFrameInfo const& audioEncodedFrameInfo);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_83_DELEGATE \
AGORAPLUGIN_API void FOnMixedAudioEncodedFrame_DelegateWrapper(const FMulticastScriptDelegate& OnMixedAudioEncodedFrame, const TArray<int64>& frameBuffer, int32 length, FEncodedAudioFrameInfo const& audioEncodedFrameInfo);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_91_SPARSE_DATA
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_91_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_91_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_91_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_91_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIPacketObserver(); \
	friend struct Z_Construct_UClass_UIPacketObserver_Statics; \
public: \
	DECLARE_CLASS(UIPacketObserver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIPacketObserver)


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_91_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIPacketObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIPacketObserver(UIPacketObserver&&); \
	NO_API UIPacketObserver(const UIPacketObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIPacketObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIPacketObserver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIPacketObserver) \
	NO_API virtual ~UIPacketObserver();


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_88_PROLOG
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_91_SPARSE_DATA \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_91_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_91_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_91_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_91_INCLASS_NO_PURE_DECLS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_91_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIPacketObserver>();

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_120_SPARSE_DATA
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_120_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_120_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_120_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_120_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_120_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIAudioEncodedFrameObserver(); \
	friend struct Z_Construct_UClass_UIAudioEncodedFrameObserver_Statics; \
public: \
	DECLARE_CLASS(UIAudioEncodedFrameObserver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIAudioEncodedFrameObserver)


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_120_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIAudioEncodedFrameObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIAudioEncodedFrameObserver(UIAudioEncodedFrameObserver&&); \
	NO_API UIAudioEncodedFrameObserver(const UIAudioEncodedFrameObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIAudioEncodedFrameObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIAudioEncodedFrameObserver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIAudioEncodedFrameObserver) \
	NO_API virtual ~UIAudioEncodedFrameObserver();


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_117_PROLOG
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_120_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_120_SPARSE_DATA \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_120_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_120_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_120_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_120_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_120_INCLASS_NO_PURE_DECLS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h_120_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIAudioEncodedFrameObserver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IAudioEncodedFrameObserver_h


#define FOREACH_ENUM_EAUDIO_CODEC_TYPE(op) \
	op(EAUDIO_CODEC_TYPE::AUDIO_CODEC_NULL) \
	op(EAUDIO_CODEC_TYPE::AUDIO_CODEC_OPUS) \
	op(EAUDIO_CODEC_TYPE::AUDIO_CODEC_PCMA) \
	op(EAUDIO_CODEC_TYPE::AUDIO_CODEC_PCMU) \
	op(EAUDIO_CODEC_TYPE::AUDIO_CODEC_G722) \
	op(EAUDIO_CODEC_TYPE::AUDIO_CODEC_AACLC) \
	op(EAUDIO_CODEC_TYPE::AUDIO_CODEC_HEAAC) \
	op(EAUDIO_CODEC_TYPE::AUDIO_CODEC_JC1) \
	op(EAUDIO_CODEC_TYPE::AUDIO_CODEC_HEAAC2) \
	op(EAUDIO_CODEC_TYPE::AUDIO_CODEC_LPCNET) 

enum class EAUDIO_CODEC_TYPE : uint8;
template<> struct TIsUEnumClass<EAUDIO_CODEC_TYPE> { enum { Value = true }; };
template<> AGORAPLUGIN_API UEnum* StaticEnum<EAUDIO_CODEC_TYPE>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS