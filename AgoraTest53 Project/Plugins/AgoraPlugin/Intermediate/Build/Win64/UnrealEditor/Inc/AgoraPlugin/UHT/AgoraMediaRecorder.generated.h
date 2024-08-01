// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AgoraBluePrintPlugin/AgoraMediaRecorder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIMediaRecorderObserver;
struct FMediaRecorderConfiguration;
#ifdef AGORAPLUGIN_AgoraMediaRecorder_generated_h
#error "AgoraMediaRecorder.generated.h already included, missing '#pragma once' in AgoraMediaRecorder.h"
#endif
#define AGORAPLUGIN_AgoraMediaRecorder_generated_h

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMediaRecorderConfiguration_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FMediaRecorderConfiguration>();

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_SPARSE_DATA
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopRecording); \
	DECLARE_FUNCTION(execStartRecording); \
	DECLARE_FUNCTION(execSetMediaRecorderObserver);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIMediaRecorder(); \
	friend struct Z_Construct_UClass_UIMediaRecorder_Statics; \
public: \
	DECLARE_CLASS(UIMediaRecorder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIMediaRecorder)


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIMediaRecorder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIMediaRecorder(UIMediaRecorder&&); \
	NO_API UIMediaRecorder(const UIMediaRecorder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIMediaRecorder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIMediaRecorder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIMediaRecorder) \
	NO_API virtual ~UIMediaRecorder();


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_48_PROLOG
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_SPARSE_DATA \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_INCLASS_NO_PURE_DECLS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIMediaRecorder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraMediaRecorder_h


#define FOREACH_ENUM_EMEDIARECORDERCONTAINERFORMAT(op) \
	op(EMediaRecorderContainerFormat::FORMAT_NULL) \
	op(EMediaRecorderContainerFormat::FORMAT_MP4) 

enum class EMediaRecorderContainerFormat : uint8;
template<> struct TIsUEnumClass<EMediaRecorderContainerFormat> { enum { Value = true }; };
template<> AGORAPLUGIN_API UEnum* StaticEnum<EMediaRecorderContainerFormat>();

#define FOREACH_ENUM_EMEDIARECORDERSTREAMTYPE(op) \
	op(EMediaRecorderStreamType::STREAM_TYPE_NULL) \
	op(EMediaRecorderStreamType::STREAM_TYPE_AUDIO) \
	op(EMediaRecorderStreamType::STREAM_TYPE_VIDEO) \
	op(EMediaRecorderStreamType::STREAM_TYPE_BOTH) 

enum class EMediaRecorderStreamType : uint8;
template<> struct TIsUEnumClass<EMediaRecorderStreamType> { enum { Value = true }; };
template<> AGORAPLUGIN_API UEnum* StaticEnum<EMediaRecorderStreamType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
