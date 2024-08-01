// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AgoraBluePrintPlugin/AgoraMediaPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIAudioPcmFrameSink;
class UIAudioSpectrumObserver;
class UIMediaPlayerCustomDataProvider;
class UIMediaPlayerSourceObserver;
class UIVideoFrameObserver;
enum class EAUDIO_DUAL_MONO_MODE : uint8;
enum class EMEDIA_PLAYER_STATE : uint8;
enum class ERAW_AUDIO_FRAME_OP_MODE_TYPE : uint8;
enum class ERENDER_MODE_TYPE : uint8;
struct FAgoraMediaSource;
struct FPlayerStreamInfo;
struct FSpatialAudioParams;
#ifdef AGORAPLUGIN_AgoraMediaPlayer_generated_h
#error "AgoraMediaPlayer.generated.h already included, missing '#pragma once' in AgoraMediaPlayer.h"
#endif
#define AGORAPLUGIN_AgoraMediaPlayer_generated_h

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAgoraMediaSource_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FAgoraMediaSource>();

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FPlayerStreamInfo>();

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_99_SPARSE_DATA
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_99_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_99_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSoundPositionParams); \
	DECLARE_FUNCTION(execSetSpatialAudioParams); \
	DECLARE_FUNCTION(execUnloadSrc); \
	DECLARE_FUNCTION(execPlayPreloadedSrc); \
	DECLARE_FUNCTION(execPreloadSrc); \
	DECLARE_FUNCTION(execSwitchSrc); \
	DECLARE_FUNCTION(execSwitchAgoraCDNSrc); \
	DECLARE_FUNCTION(execRenewAgoraCDNSrcToken); \
	DECLARE_FUNCTION(execEnableAutoSwitchAgoraCDN); \
	DECLARE_FUNCTION(execGetCurrentAgoraCDNIndex); \
	DECLARE_FUNCTION(execSwitchAgoraCDNLineByIndex); \
	DECLARE_FUNCTION(execGetAgoraCDNLineCount); \
	DECLARE_FUNCTION(execOpenWithAgoraCDNSrc); \
	DECLARE_FUNCTION(execGetPlaySrc); \
	DECLARE_FUNCTION(execGetPlayerSdkVersion); \
	DECLARE_FUNCTION(execSetAudioDualMonoMode); \
	DECLARE_FUNCTION(execUnregisterMediaPlayerAudioSpectrumObserver); \
	DECLARE_FUNCTION(execRegisterMediaPlayerAudioSpectrumObserver); \
	DECLARE_FUNCTION(execUnregisterVideoFrameObserver); \
	DECLARE_FUNCTION(execRegisterVideoFrameObserver); \
	DECLARE_FUNCTION(execUnregisterAudioFrameObserver); \
	DECLARE_FUNCTION(execRegisterAudioFrameObserver); \
	DECLARE_FUNCTION(execUnregisterPlayerSourceObserver); \
	DECLARE_FUNCTION(execRegisterPlayerSourceObserver); \
	DECLARE_FUNCTION(execSetRenderMode); \
	DECLARE_FUNCTION(execSetView); \
	DECLARE_FUNCTION(execGetPublishSignalVolume); \
	DECLARE_FUNCTION(execAdjustPublishSignalVolume); \
	DECLARE_FUNCTION(execGetPlayoutVolume); \
	DECLARE_FUNCTION(execAdjustPlayoutVolume); \
	DECLARE_FUNCTION(execGetMute); \
	DECLARE_FUNCTION(execMute); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execSetExternalSubtitle); \
	DECLARE_FUNCTION(execSelectInternalSubtitle); \
	DECLARE_FUNCTION(execTakeScreenshot); \
	DECLARE_FUNCTION(execSetPlayerOptionInString); \
	DECLARE_FUNCTION(execSetPlayerOptionInInt); \
	DECLARE_FUNCTION(execSelectAudioTrack); \
	DECLARE_FUNCTION(execSetPlaybackSpeed); \
	DECLARE_FUNCTION(execSetLoopCount); \
	DECLARE_FUNCTION(execGetStreamInfo); \
	DECLARE_FUNCTION(execGetStreamCount); \
	DECLARE_FUNCTION(execGetPlayPosition); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execSetAudioPitch); \
	DECLARE_FUNCTION(execSeek); \
	DECLARE_FUNCTION(execResume); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execOpenWithMediaSource); \
	DECLARE_FUNCTION(execOpenWithCustomSource); \
	DECLARE_FUNCTION(execOpen); \
	DECLARE_FUNCTION(execGetMediaPlayerId);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_99_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIMediaPlayer(); \
	friend struct Z_Construct_UClass_UIMediaPlayer_Statics; \
public: \
	DECLARE_CLASS(UIMediaPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIMediaPlayer)


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_99_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIMediaPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIMediaPlayer(UIMediaPlayer&&); \
	NO_API UIMediaPlayer(const UIMediaPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIMediaPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIMediaPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIMediaPlayer) \
	NO_API virtual ~UIMediaPlayer();


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_96_PROLOG
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_99_SPARSE_DATA \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_99_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_99_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_99_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_99_INCLASS_NO_PURE_DECLS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_99_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIMediaPlayer>();

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_222_SPARSE_DATA
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_222_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_222_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_222_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCacheFileCount); \
	DECLARE_FUNCTION(execGetMaxCacheFileSize); \
	DECLARE_FUNCTION(execGetMaxCacheFileCount); \
	DECLARE_FUNCTION(execGetCacheDir); \
	DECLARE_FUNCTION(execEnableAutoRemoveCache); \
	DECLARE_FUNCTION(execSetMaxCacheFileSize); \
	DECLARE_FUNCTION(execSetMaxCacheFileCount); \
	DECLARE_FUNCTION(execSetCacheDir); \
	DECLARE_FUNCTION(execRemoveCacheByUri); \
	DECLARE_FUNCTION(execRemoveOldCache); \
	DECLARE_FUNCTION(execRemoveAllCaches);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_222_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_222_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIMediaPlayerCacheManager(); \
	friend struct Z_Construct_UClass_UIMediaPlayerCacheManager_Statics; \
public: \
	DECLARE_CLASS(UIMediaPlayerCacheManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIMediaPlayerCacheManager)


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_222_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIMediaPlayerCacheManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIMediaPlayerCacheManager(UIMediaPlayerCacheManager&&); \
	NO_API UIMediaPlayerCacheManager(const UIMediaPlayerCacheManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIMediaPlayerCacheManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIMediaPlayerCacheManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIMediaPlayerCacheManager) \
	NO_API virtual ~UIMediaPlayerCacheManager();


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_219_PROLOG
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_222_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_222_SPARSE_DATA \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_222_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_222_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_222_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_222_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_222_INCLASS_NO_PURE_DECLS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h_222_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIMediaPlayerCacheManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaPlayer_h


#define FOREACH_ENUM_EAUDIO_DUAL_MONO_MODE(op) \
	op(EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_STEREO) \
	op(EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_L) \
	op(EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_R) \
	op(EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_MIX) 

enum class EAUDIO_DUAL_MONO_MODE : uint8;
template<> struct TIsUEnumClass<EAUDIO_DUAL_MONO_MODE> { enum { Value = true }; };
template<> AGORAPLUGIN_API UEnum* StaticEnum<EAUDIO_DUAL_MONO_MODE>();

#define FOREACH_ENUM_EMEDIA_STREAM_TYPE(op) \
	op(EMEDIA_STREAM_TYPE::STREAM_TYPE_UNKNOWN) \
	op(EMEDIA_STREAM_TYPE::STREAM_TYPE_VIDEO) \
	op(EMEDIA_STREAM_TYPE::STREAM_TYPE_AUDIO) \
	op(EMEDIA_STREAM_TYPE::STREAM_TYPE_SUBTITLE) 

enum class EMEDIA_STREAM_TYPE : uint8;
template<> struct TIsUEnumClass<EMEDIA_STREAM_TYPE> { enum { Value = true }; };
template<> AGORAPLUGIN_API UEnum* StaticEnum<EMEDIA_STREAM_TYPE>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
