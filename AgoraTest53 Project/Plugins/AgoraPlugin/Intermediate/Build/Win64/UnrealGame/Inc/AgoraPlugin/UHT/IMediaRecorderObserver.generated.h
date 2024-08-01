// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AgoraBluePrintPlugin/IMediaRecorderObserver.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ERecorderErrorCode : uint8;
struct FENUMWRAP_RecorderState;
struct FRecorderInfo;
#ifdef AGORAPLUGIN_IMediaRecorderObserver_generated_h
#error "IMediaRecorderObserver.generated.h already included, missing '#pragma once' in IMediaRecorderObserver.h"
#endif
#define AGORAPLUGIN_IMediaRecorderObserver_generated_h

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_12_DELEGATE \
AGORAPLUGIN_API void FOnRecorderStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnRecorderStateChanged, const FString& channelId, int64 uid, FENUMWRAP_RecorderState state, ERecorderErrorCode error);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_13_DELEGATE \
AGORAPLUGIN_API void FOnRecorderInfoUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnRecorderInfoUpdated, const FString& channelId, int64 uid, FRecorderInfo const& info);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_SPARSE_DATA
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIMediaRecorderObserver(); \
	friend struct Z_Construct_UClass_UIMediaRecorderObserver_Statics; \
public: \
	DECLARE_CLASS(UIMediaRecorderObserver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIMediaRecorderObserver)


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIMediaRecorderObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIMediaRecorderObserver(UIMediaRecorderObserver&&); \
	NO_API UIMediaRecorderObserver(const UIMediaRecorderObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIMediaRecorderObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIMediaRecorderObserver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIMediaRecorderObserver) \
	NO_API virtual ~UIMediaRecorderObserver();


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_17_PROLOG
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_SPARSE_DATA \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIMediaRecorderObserver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
