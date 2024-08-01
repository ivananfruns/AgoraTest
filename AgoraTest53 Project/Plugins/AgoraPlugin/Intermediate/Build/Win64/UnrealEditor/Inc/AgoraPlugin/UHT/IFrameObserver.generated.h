// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AgoraBluePrintPlugin/IFrameObserver.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EVIDEO_SOURCE_TYPE : uint8;
struct FAudioFrame;
struct FAudioPcmFrame;
struct FAudioSpectrumData;
struct FUserAudioSpectrumInfo;
struct FVideoFrame;
#ifdef AGORAPLUGIN_IFrameObserver_generated_h
#error "IFrameObserver.generated.h already included, missing '#pragma once' in IFrameObserver.h"
#endif
#define AGORAPLUGIN_IFrameObserver_generated_h

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioPcmFrame_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FAudioPcmFrame>();

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVideoFrame_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FVideoFrame>();

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioFrame_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FAudioFrame>();

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioSpectrumData_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FAudioSpectrumData>();

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_148_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUserAudioSpectrumInfo_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FUserAudioSpectrumInfo>();

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_174_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEncodedVideoFrameInfo_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FEncodedVideoFrameInfo>();

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_200_DELEGATE \
AGORAPLUGIN_API void FOnPlaybackAudioFrameBeforeMixing_DelegateWrapper(const FMulticastScriptDelegate& OnPlaybackAudioFrameBeforeMixing, const FString& channelId, int64 uid, FAudioFrame const& audioFrame);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_201_DELEGATE \
AGORAPLUGIN_API void FOnLocalAudioSpectrum_DelegateWrapper(const FMulticastScriptDelegate& OnLocalAudioSpectrum, FAudioSpectrumData const& data);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_202_DELEGATE \
AGORAPLUGIN_API void FOnRemoteAudioSpectrum_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteAudioSpectrum, const TArray<FUserAudioSpectrumInfo>& spectrums, int32 spectrumNumber);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_203_DELEGATE \
AGORAPLUGIN_API void FOnCaptureVideoFrame_DelegateWrapper(const FMulticastScriptDelegate& OnCaptureVideoFrame, EVIDEO_SOURCE_TYPE sourceType, FVideoFrame const& videoFrame);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_204_DELEGATE \
AGORAPLUGIN_API void FOnPreEncodeVideoFrame_DelegateWrapper(const FMulticastScriptDelegate& OnPreEncodeVideoFrame, EVIDEO_SOURCE_TYPE sourceType, FVideoFrame const& videoFrame);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_205_DELEGATE \
AGORAPLUGIN_API void FOnMediaPlayerVideoFrame_DelegateWrapper(const FMulticastScriptDelegate& OnMediaPlayerVideoFrame, FVideoFrame const& videoFrame, int32 mediaPlayerId);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_206_DELEGATE \
AGORAPLUGIN_API void FOnRenderVideoFrame_DelegateWrapper(const FMulticastScriptDelegate& OnRenderVideoFrame, const FString& channelId, int64 remoteUid, FVideoFrame const& videoFrame);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_207_DELEGATE \
AGORAPLUGIN_API void FOnTranscodedVideoFrame_DelegateWrapper(const FMulticastScriptDelegate& OnTranscodedVideoFrame, FVideoFrame const& videoFrame);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_208_DELEGATE \
AGORAPLUGIN_API void FGetVideoFrameProcessMode_DelegateWrapper(const FMulticastScriptDelegate& GetVideoFrameProcessMode);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_209_DELEGATE \
AGORAPLUGIN_API void FGetVideoFormatPreference_DelegateWrapper(const FMulticastScriptDelegate& GetVideoFormatPreference);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_210_DELEGATE \
AGORAPLUGIN_API void FGetRotationApplied_DelegateWrapper(const FMulticastScriptDelegate& GetRotationApplied);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_211_DELEGATE \
AGORAPLUGIN_API void FGetMirrorApplied_DelegateWrapper(const FMulticastScriptDelegate& GetMirrorApplied);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_212_DELEGATE \
AGORAPLUGIN_API void FGetObservedFramePosition_DelegateWrapper(const FMulticastScriptDelegate& GetObservedFramePosition);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_213_DELEGATE \
AGORAPLUGIN_API void FIsExternal_DelegateWrapper(const FMulticastScriptDelegate& IsExternal);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_214_DELEGATE \
AGORAPLUGIN_API void FOnRecordAudioFrame_DelegateWrapper(const FMulticastScriptDelegate& OnRecordAudioFrame, const FString& channelId, FAudioFrame const& audioFrame);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_215_DELEGATE \
AGORAPLUGIN_API void FOnPlaybackAudioFrame_DelegateWrapper(const FMulticastScriptDelegate& OnPlaybackAudioFrame, const FString& channelId, FAudioFrame const& audioFrame);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_216_DELEGATE \
AGORAPLUGIN_API void FOnMixedAudioFrame_DelegateWrapper(const FMulticastScriptDelegate& OnMixedAudioFrame, const FString& channelId, FAudioFrame const& audioFrame);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_217_DELEGATE \
AGORAPLUGIN_API void FGetObservedAudioFramePosition_DelegateWrapper(const FMulticastScriptDelegate& GetObservedAudioFramePosition);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_218_DELEGATE \
AGORAPLUGIN_API void FGetPlaybackAudioParams_DelegateWrapper(const FMulticastScriptDelegate& GetPlaybackAudioParams);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_219_DELEGATE \
AGORAPLUGIN_API void FGetRecordAudioParams_DelegateWrapper(const FMulticastScriptDelegate& GetRecordAudioParams);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_220_DELEGATE \
AGORAPLUGIN_API void FGetMixedAudioParams_DelegateWrapper(const FMulticastScriptDelegate& GetMixedAudioParams);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_221_DELEGATE \
AGORAPLUGIN_API void FOnFrame_DelegateWrapper(const FMulticastScriptDelegate& OnFrame, FAudioPcmFrame const& pcmFrame);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_SPARSE_DATA
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIAudioFrameObserver(); \
	friend struct Z_Construct_UClass_UIAudioFrameObserver_Statics; \
public: \
	DECLARE_CLASS(UIAudioFrameObserver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIAudioFrameObserver)


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIAudioFrameObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIAudioFrameObserver(UIAudioFrameObserver&&); \
	NO_API UIAudioFrameObserver(const UIAudioFrameObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIAudioFrameObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIAudioFrameObserver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIAudioFrameObserver) \
	NO_API virtual ~UIAudioFrameObserver();


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_226_PROLOG
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_SPARSE_DATA \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_INCLASS_NO_PURE_DECLS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_229_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIAudioFrameObserver>();

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_SPARSE_DATA
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIAudioPcmFrameSink(); \
	friend struct Z_Construct_UClass_UIAudioPcmFrameSink_Statics; \
public: \
	DECLARE_CLASS(UIAudioPcmFrameSink, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIAudioPcmFrameSink)


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIAudioPcmFrameSink(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIAudioPcmFrameSink(UIAudioPcmFrameSink&&); \
	NO_API UIAudioPcmFrameSink(const UIAudioPcmFrameSink&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIAudioPcmFrameSink); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIAudioPcmFrameSink); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIAudioPcmFrameSink) \
	NO_API virtual ~UIAudioPcmFrameSink();


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_272_PROLOG
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_SPARSE_DATA \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_INCLASS_NO_PURE_DECLS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_275_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIAudioPcmFrameSink>();

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_SPARSE_DATA
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIAudioSpectrumObserver(); \
	friend struct Z_Construct_UClass_UIAudioSpectrumObserver_Statics; \
public: \
	DECLARE_CLASS(UIAudioSpectrumObserver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIAudioSpectrumObserver)


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIAudioSpectrumObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIAudioSpectrumObserver(UIAudioSpectrumObserver&&); \
	NO_API UIAudioSpectrumObserver(const UIAudioSpectrumObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIAudioSpectrumObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIAudioSpectrumObserver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIAudioSpectrumObserver) \
	NO_API virtual ~UIAudioSpectrumObserver();


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_288_PROLOG
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_SPARSE_DATA \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_INCLASS_NO_PURE_DECLS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_291_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIAudioSpectrumObserver>();

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_SPARSE_DATA
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIVideoFrameObserver(); \
	friend struct Z_Construct_UClass_UIVideoFrameObserver_Statics; \
public: \
	DECLARE_CLASS(UIVideoFrameObserver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIVideoFrameObserver)


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIVideoFrameObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIVideoFrameObserver(UIVideoFrameObserver&&); \
	NO_API UIVideoFrameObserver(const UIVideoFrameObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIVideoFrameObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIVideoFrameObserver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIVideoFrameObserver) \
	NO_API virtual ~UIVideoFrameObserver();


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_307_PROLOG
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_SPARSE_DATA \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_INCLASS_NO_PURE_DECLS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h_310_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIVideoFrameObserver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IFrameObserver_h


#define FOREACH_ENUM_EBYTES_PER_SAMPLE(op) \
	op(EBYTES_PER_SAMPLE::TWO_BYTES_PER_NULL) \
	op(EBYTES_PER_SAMPLE::TWO_BYTES_PER_SAMPLE) 

enum class EBYTES_PER_SAMPLE : uint8;
template<> struct TIsUEnumClass<EBYTES_PER_SAMPLE> { enum { Value = true }; };
template<> AGORAPLUGIN_API UEnum* StaticEnum<EBYTES_PER_SAMPLE>();

#define FOREACH_ENUM_EVIDEO_PIXEL_FORMAT(op) \
	op(EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_DEFAULT) \
	op(EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_I420) \
	op(EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_BGRA) \
	op(EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_NV21) \
	op(EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_RGBA) \
	op(EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_NV12) \
	op(EVIDEO_PIXEL_FORMAT::VIDEO_TEXTURE_2D) \
	op(EVIDEO_PIXEL_FORMAT::VIDEO_TEXTURE_OES) \
	op(EVIDEO_PIXEL_FORMAT::VIDEO_CVPIXEL_NV12) \
	op(EVIDEO_PIXEL_FORMAT::VIDEO_CVPIXEL_I420) \
	op(EVIDEO_PIXEL_FORMAT::VIDEO_CVPIXEL_BGRA) \
	op(EVIDEO_PIXEL_FORMAT::VIDEO_PIXEL_I422) 

enum class EVIDEO_PIXEL_FORMAT : uint8;
template<> struct TIsUEnumClass<EVIDEO_PIXEL_FORMAT> { enum { Value = true }; };
template<> AGORAPLUGIN_API UEnum* StaticEnum<EVIDEO_PIXEL_FORMAT>();

#define FOREACH_ENUM_EAUDIO_FRAME_TYPE(op) \
	op(EAUDIO_FRAME_TYPE::FRAME_TYPE_PCM16) 

enum class EAUDIO_FRAME_TYPE : uint8;
template<> struct TIsUEnumClass<EAUDIO_FRAME_TYPE> { enum { Value = true }; };
template<> AGORAPLUGIN_API UEnum* StaticEnum<EAUDIO_FRAME_TYPE>();

#define FOREACH_ENUM_EVIDEO_FRAME_TYPE(op) \
	op(EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_BLANK_FRAME) \
	op(EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_KEY_FRAME) \
	op(EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_DELTA_FRAME) \
	op(EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_B_FRAME) \
	op(EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_DROPPABLE_FRAME) \
	op(EVIDEO_FRAME_TYPE::VIDEO_FRAME_TYPE_UNKNOW) 

enum class EVIDEO_FRAME_TYPE : uint8;
template<> struct TIsUEnumClass<EVIDEO_FRAME_TYPE> { enum { Value = true }; };
template<> AGORAPLUGIN_API UEnum* StaticEnum<EVIDEO_FRAME_TYPE>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS