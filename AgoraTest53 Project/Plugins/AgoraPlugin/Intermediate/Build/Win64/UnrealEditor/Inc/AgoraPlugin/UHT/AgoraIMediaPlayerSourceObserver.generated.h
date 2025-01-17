// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AgoraBluePrintPlugin/AgoraIMediaPlayerSourceObserver.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMEDIA_PLAYER_STATE : uint8;
enum class EPLAYER_PRELOAD_EVENT : uint8;
struct FENUMWRAP_MEDIA_PLAYER_ERROR;
struct FPlayerUpdatedInfo;
struct FSrcInfo;
#ifdef AGORAPLUGIN_AgoraIMediaPlayerSourceObserver_generated_h
#error "AgoraIMediaPlayerSourceObserver.generated.h already included, missing '#pragma once' in AgoraIMediaPlayerSourceObserver.h"
#endif
#define AGORAPLUGIN_AgoraIMediaPlayerSourceObserver_generated_h

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_ERROR_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FENUMWRAP_MEDIA_PLAYER_ERROR>();

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_128_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSrcInfo_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FSrcInfo>();

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCacheStatistics_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FCacheStatistics>();

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_151_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FPlayerUpdatedInfo>();

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_170_DELEGATE \
AGORAPLUGIN_API void FOnPlayerSourceStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerSourceStateChanged, EMEDIA_PLAYER_STATE state, FENUMWRAP_MEDIA_PLAYER_ERROR ec);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_171_DELEGATE \
AGORAPLUGIN_API void FOnPositionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPositionChanged, int64 position_ms);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_172_DELEGATE \
AGORAPLUGIN_API void FOnPlayerEvent_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerEvent, EMEDIA_PLAYER_EVENT eventCode, int64 elapsedTime, const FString& message);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_173_DELEGATE \
AGORAPLUGIN_API void FOnMetaDataSource_DelegateWrapper(const FMulticastScriptDelegate& OnMetaDataSource, int64 data, int32 length);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_174_DELEGATE \
AGORAPLUGIN_API void FOnPlayBufferUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnPlayBufferUpdated, int64 playCachedBuffer);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_175_DELEGATE \
AGORAPLUGIN_API void FOnPreloadEvent_DelegateWrapper(const FMulticastScriptDelegate& OnPreloadEvent, const FString& src, EPLAYER_PRELOAD_EVENT event);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_176_DELEGATE \
AGORAPLUGIN_API void FOnCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnCompleted);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_177_DELEGATE \
AGORAPLUGIN_API void FOnAgoraCDNTokenWillExpire_DelegateWrapper(const FMulticastScriptDelegate& OnAgoraCDNTokenWillExpire);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_178_DELEGATE \
AGORAPLUGIN_API void FOnPlayerSrcInfoChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerSrcInfoChanged, FSrcInfo const& from, FSrcInfo const& to);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_179_DELEGATE \
AGORAPLUGIN_API void FOnPlayerInfoUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerInfoUpdated, FPlayerUpdatedInfo const& info);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_180_DELEGATE \
AGORAPLUGIN_API void FOnAudioVolumeIndicationSource_DelegateWrapper(const FMulticastScriptDelegate& OnAudioVolumeIndicationSource, int32 volume);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_181_DELEGATE \
AGORAPLUGIN_API void FOnReadData_DelegateWrapper(const FMulticastScriptDelegate& OnReadData, const TArray<int64>& buffer, int32 bufferSize);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_182_DELEGATE \
AGORAPLUGIN_API void FOnSeek_DelegateWrapper(const FMulticastScriptDelegate& OnSeek, int64 offset, int32 whence);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_193_SPARSE_DATA
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_193_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_193_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_193_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_193_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_193_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIMediaPlayerSourceObserver(); \
	friend struct Z_Construct_UClass_UIMediaPlayerSourceObserver_Statics; \
public: \
	DECLARE_CLASS(UIMediaPlayerSourceObserver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIMediaPlayerSourceObserver)


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_193_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIMediaPlayerSourceObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIMediaPlayerSourceObserver(UIMediaPlayerSourceObserver&&); \
	NO_API UIMediaPlayerSourceObserver(const UIMediaPlayerSourceObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIMediaPlayerSourceObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIMediaPlayerSourceObserver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIMediaPlayerSourceObserver) \
	NO_API virtual ~UIMediaPlayerSourceObserver();


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_190_PROLOG
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_193_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_193_SPARSE_DATA \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_193_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_193_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_193_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_193_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_193_INCLASS_NO_PURE_DECLS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_193_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIMediaPlayerSourceObserver>();

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_248_SPARSE_DATA
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_248_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_248_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_248_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_248_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_248_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIMediaPlayerCustomDataProvider(); \
	friend struct Z_Construct_UClass_UIMediaPlayerCustomDataProvider_Statics; \
public: \
	DECLARE_CLASS(UIMediaPlayerCustomDataProvider, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIMediaPlayerCustomDataProvider)


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_248_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIMediaPlayerCustomDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIMediaPlayerCustomDataProvider(UIMediaPlayerCustomDataProvider&&); \
	NO_API UIMediaPlayerCustomDataProvider(const UIMediaPlayerCustomDataProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIMediaPlayerCustomDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIMediaPlayerCustomDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIMediaPlayerCustomDataProvider) \
	NO_API virtual ~UIMediaPlayerCustomDataProvider();


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_245_PROLOG
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_248_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_248_SPARSE_DATA \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_248_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_248_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_248_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_248_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_248_INCLASS_NO_PURE_DECLS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h_248_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIMediaPlayerCustomDataProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraIMediaPlayerSourceObserver_h


#define FOREACH_ENUM_EENUMCUSTOM_MEDIA_PLAYER_ERROR(op) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_NONE) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_ARGUMENTS) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INTERNAL) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_NO_RESOURCE) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_MEDIA_SOURCE) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_UNKNOWN_STREAM_TYPE) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_OBJ_NOT_INITIALIZED) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_CODEC_NOT_SUPPORTED) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_VIDEO_RENDER_FAILED) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_STATE) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_URL_NOT_FOUND) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INVALID_CONNECTION_STATE) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_SRC_BUFFER_UNDERFLOW) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_INTERRUPTED) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_NOT_SUPPORTED) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_TOKEN_EXPIRED) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_IP_EXPIRED) \
	op(EENUMCUSTOM_MEDIA_PLAYER_ERROR::PLAYER_ERROR_UNKNOWN) 

enum class EENUMCUSTOM_MEDIA_PLAYER_ERROR : uint8;
template<> struct TIsUEnumClass<EENUMCUSTOM_MEDIA_PLAYER_ERROR> { enum { Value = true }; };
template<> AGORAPLUGIN_API UEnum* StaticEnum<EENUMCUSTOM_MEDIA_PLAYER_ERROR>();

#define FOREACH_ENUM_EMEDIA_PLAYER_EVENT(op) \
	op(PLAYER_EVENT_SEEK_BEGIN) \
	op(PLAYER_EVENT_SEEK_COMPLETE) \
	op(PLAYER_EVENT_SEEK_ERROR) \
	op(PLAYER_EVENT_AUDIO_TRACK_CHANGED) \
	op(PLAYER_EVENT_BUFFER_LOW) \
	op(PLAYER_EVENT_BUFFER_RECOVER) \
	op(PLAYER_EVENT_FREEZE_START) \
	op(PLAYER_EVENT_FREEZE_STOP) \
	op(PLAYER_EVENT_SWITCH_BEGIN) \
	op(PLAYER_EVENT_SWITCH_COMPLETE) \
	op(PLAYER_EVENT_SWITCH_ERROR) \
	op(PLAYER_EVENT_FIRST_DISPLAYED) \
	op(PLAYER_EVENT_REACH_CACHE_FILE_MAX_COUNT) \
	op(PLAYER_EVENT_REACH_CACHE_FILE_MAX_SIZE) \
	op(PLAYER_EVENT_TRY_OPEN_START) \
	op(PLAYER_EVENT_TRY_OPEN_SUCCEED) \
	op(PLAYER_EVENT_TRY_OPEN_FAILED) 
#define FOREACH_ENUM_EPLAYER_PRELOAD_EVENT(op) \
	op(EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_BEGIN) \
	op(EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_COMPLETE) \
	op(EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_ERROR) 

enum class EPLAYER_PRELOAD_EVENT : uint8;
template<> struct TIsUEnumClass<EPLAYER_PRELOAD_EVENT> { enum { Value = true }; };
template<> AGORAPLUGIN_API UEnum* StaticEnum<EPLAYER_PRELOAD_EVENT>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
