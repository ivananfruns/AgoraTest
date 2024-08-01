// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AgoraBluePrintPlugin/AgoraRtcEngine.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIAudioEncodedFrameObserver;
class UIAudioSpectrumObserver;
class UIDirectCdnStreamingEventHandler;
class UIMediaPlayer;
class UIMediaRecorder;
class UIMetadataObserver;
class UIPacketObserver;
class UIRtcEngineEventHandler;
class UIRtcEngineEventHandlerEx;
class UIScreenCaptureSourceList;
class UObject;
enum class EAUDIO_AINS_MODE : uint8;
enum class EAUDIO_EQUALIZATION_BAND_FREQUENCY : uint8;
enum class EAUDIO_MIXING_DUAL_MONO_MODE : uint8;
enum class EAUDIO_PROFILE_TYPE : uint8;
enum class EAUDIO_REVERB_TYPE : uint8;
enum class EAUDIO_SCENARIO_TYPE : uint8;
enum class EAUDIO_SESSION_OPERATION_RESTRICTION : uint8;
enum class ECHANNEL_PROFILE_TYPE : uint8;
enum class ECLIENT_ROLE_TYPE : uint8;
enum class ECLOUD_PROXY_TYPE : uint8;
enum class ECONNECTION_STATE_TYPE : uint8;
enum class EINTERFACE_ID_TYPE : uint8;
enum class ELOG_LEVEL : uint8;
enum class EMEDIA_SOURCE_TYPE : uint8;
enum class EPRIORITY_TYPE : uint8;
enum class ERAW_AUDIO_FRAME_OP_MODE_TYPE : uint8;
enum class ERENDER_MODE_TYPE : uint8;
enum class ESCREEN_SCENARIO_TYPE : uint8;
enum class ESTREAM_FALLBACK_OPTIONS : uint8;
enum class EVIDEO_APPLICATION_SCENARIO_TYPE : uint8;
enum class EVIDEO_CONTENT_HINT : uint8;
enum class EVIDEO_MIRROR_MODE_TYPE : uint8;
enum class EVIDEO_SOURCE_TYPE : uint8;
enum class EVIDEO_STREAM_TYPE : uint8;
struct FAdvancedAudioOptions;
struct FAgoraRhythmPlayerConfig;
struct FAudioEncodedFrameObserverConfig;
struct FAudioRecordingConfiguration;
struct FBeautyOptions;
struct FCameraCapturerConfiguration;
struct FChannelMediaOptions;
struct FChannelMediaRelayConfiguration;
struct FClientRoleOptions;
struct FCodecCapInfo;
struct FColorEnhanceOptions;
struct FContentInspectConfig;
struct FDataStreamConfig;
struct FDeviceInfo;
struct FDirectCdnStreamingMediaOptions;
struct FEchoTestConfiguration;
struct FEncryptionConfig;
struct FENUMWRAP_AUDIO_EFFECT_PRESET;
struct FENUMWRAP_HEADPHONE_EQUALIZER_PRESET;
struct FENUMWRAP_METADATA_TYPE;
struct FENUMWRAP_SIMULCAST_STREAM_MODE;
struct FENUMWRAP_VIDEO_ORIENTATION;
struct FENUMWRAP_VOICE_BEAUTIFIER_PRESET;
struct FENUMWRAP_VOICE_CONVERSION_PRESET;
struct FImageTrackOptions;
struct FLastmileProbeConfig;
struct FLeaveChannelOptions;
struct FLiveTranscoding;
struct FLocalAccessPointConfiguration;
struct FLocalTranscoderConfiguration;
struct FLowlightEnhanceOptions;
struct FRecorderStreamInfo;
struct FRectangle;
struct FRtcConnection;
struct FRtcEngineContext;
struct FRtcEngineContextEx;
struct FScreenCaptureConfiguration;
struct FScreenCaptureParameters2;
struct FScreenCaptureParameters;
struct FScreenCaptureSourceInfo;
struct FSegmentationProperty;
struct FSenderOptions;
struct FSimulcastStreamConfig;
struct FSIZE;
struct FSpatialAudioParams;
struct FUserInfo;
struct FVideoCanvas;
struct FVideoDenoiserOptions;
struct FVideoEncoderConfiguration;
struct FVideoSubscriptionOptions;
struct FVirtualBackgroundSource;
struct FWatermarkOptions;
#ifdef AGORAPLUGIN_AgoraRtcEngine_generated_h
#error "AgoraRtcEngine.generated.h already included, missing '#pragma once' in AgoraRtcEngine.h"
#endif
#define AGORAPLUGIN_AgoraRtcEngine_generated_h

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_26_SPARSE_DATA
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_26_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execGetSourceInfo); \
	DECLARE_FUNCTION(execGetCount);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_26_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIScreenCaptureSourceList(); \
	friend struct Z_Construct_UClass_UIScreenCaptureSourceList_Statics; \
public: \
	DECLARE_CLASS(UIScreenCaptureSourceList, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UIScreenCaptureSourceList)


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIScreenCaptureSourceList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIScreenCaptureSourceList(UIScreenCaptureSourceList&&); \
	NO_API UIScreenCaptureSourceList(const UIScreenCaptureSourceList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIScreenCaptureSourceList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIScreenCaptureSourceList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIScreenCaptureSourceList) \
	NO_API virtual ~UIScreenCaptureSourceList();


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_23_PROLOG
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_26_SPARSE_DATA \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_26_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_26_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UIScreenCaptureSourceList>();

#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_53_SPARSE_DATA
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_53_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_53_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNetworkType); \
	DECLARE_FUNCTION(execRegisterExtension); \
	DECLARE_FUNCTION(execGetCurrentMonotonicTimeInMs); \
	DECLARE_FUNCTION(execSetEarMonitoringAudioFrameParameters); \
	DECLARE_FUNCTION(execSetHeadphoneEQParameters); \
	DECLARE_FUNCTION(execSetHeadphoneEQPreset); \
	DECLARE_FUNCTION(execGetNtpWallTimeInMs); \
	DECLARE_FUNCTION(execEnableInstantMediaRendering); \
	DECLARE_FUNCTION(execStartMediaRenderingTracingEx); \
	DECLARE_FUNCTION(execStartMediaRenderingTracing); \
	DECLARE_FUNCTION(execSetParameters); \
	DECLARE_FUNCTION(execResumeAllChannelMediaRelayEx); \
	DECLARE_FUNCTION(execPauseAllChannelMediaRelayEx); \
	DECLARE_FUNCTION(execStopChannelMediaRelayEx); \
	DECLARE_FUNCTION(execUpdateChannelMediaRelayEx); \
	DECLARE_FUNCTION(execStartChannelMediaRelayEx); \
	DECLARE_FUNCTION(execStopRtmpStreamEx); \
	DECLARE_FUNCTION(execUpdateRtmpTranscodingEx); \
	DECLARE_FUNCTION(execStartRtmpStreamWithTranscodingEx); \
	DECLARE_FUNCTION(execStartRtmpStreamWithoutTranscodingEx); \
	DECLARE_FUNCTION(execAdjustUserPlaybackSignalVolumeEx); \
	DECLARE_FUNCTION(execSetSubscribeVideoAllowlistEx); \
	DECLARE_FUNCTION(execSetSubscribeVideoAllowlist); \
	DECLARE_FUNCTION(execSetSubscribeVideoBlocklistEx); \
	DECLARE_FUNCTION(execSetSubscribeVideoBlocklist); \
	DECLARE_FUNCTION(execSetSubscribeAudioAllowlistEx); \
	DECLARE_FUNCTION(execSetSubscribeAudioAllowlist); \
	DECLARE_FUNCTION(execSetSubscribeAudioBlocklistEx); \
	DECLARE_FUNCTION(execSetSubscribeAudioBlocklist); \
	DECLARE_FUNCTION(execMuteAllRemoteVideoStreamsEx); \
	DECLARE_FUNCTION(execMuteAllRemoteAudioStreamsEx); \
	DECLARE_FUNCTION(execMuteLocalVideoStreamEx); \
	DECLARE_FUNCTION(execMuteLocalAudioStreamEx); \
	DECLARE_FUNCTION(execTakeSnapshotEx); \
	DECLARE_FUNCTION(execEnableWirelessAccelerate); \
	DECLARE_FUNCTION(execSetDualStreamModeEx); \
	DECLARE_FUNCTION(execEnableDualStreamModeEx); \
	DECLARE_FUNCTION(execGetUserInfoByUidEx); \
	DECLARE_FUNCTION(execGetUserInfoByUserAccountEx); \
	DECLARE_FUNCTION(execEnableAudioVolumeIndicationEx); \
	DECLARE_FUNCTION(execSendCustomReportMessageEx); \
	DECLARE_FUNCTION(execClearVideoWatermarkEx); \
	DECLARE_FUNCTION(execAddVideoWatermarkEx); \
	DECLARE_FUNCTION(execSendStreamMessageEx); \
	DECLARE_FUNCTION(execCreateDataStreamEx); \
	DECLARE_FUNCTION(execEnableEncryptionEx); \
	DECLARE_FUNCTION(execGetConnectionStateEx); \
	DECLARE_FUNCTION(execEnableLoopbackRecordingEx); \
	DECLARE_FUNCTION(execSetRemoteRenderModeEx); \
	DECLARE_FUNCTION(execSetRemoteUserSpatialAudioParamsEx); \
	DECLARE_FUNCTION(execSetRemoteVoicePositionEx); \
	DECLARE_FUNCTION(execSetRemoteVideoSubscriptionOptionsEx); \
	DECLARE_FUNCTION(execSetRemoteVideoStreamTypeEx); \
	DECLARE_FUNCTION(execMuteRemoteVideoStreamEx); \
	DECLARE_FUNCTION(execMuteRemoteAudioStreamEx); \
	DECLARE_FUNCTION(execSetupRemoteVideoEx); \
	DECLARE_FUNCTION(execSetVideoEncoderConfigurationEx); \
	DECLARE_FUNCTION(execUpdateChannelMediaOptionsEx); \
	DECLARE_FUNCTION(execLeaveChannelEx); \
	DECLARE_FUNCTION(execJoinChannelEx); \
	DECLARE_FUNCTION(execEnableVideoImageSource); \
	DECLARE_FUNCTION(execSetAVSyncSource); \
	DECLARE_FUNCTION(execSetAdvancedAudioOptions); \
	DECLARE_FUNCTION(execSetLocalAccessPoint); \
	DECLARE_FUNCTION(execSetCloudProxy); \
	DECLARE_FUNCTION(execAdjustCustomAudioPlayoutVolume); \
	DECLARE_FUNCTION(execAdjustCustomAudioPublishVolume); \
	DECLARE_FUNCTION(execEnableContentInspect); \
	DECLARE_FUNCTION(execTakeSnapshot); \
	DECLARE_FUNCTION(execConfigRhythmPlayer); \
	DECLARE_FUNCTION(execStopRhythmPlayer); \
	DECLARE_FUNCTION(execStartRhythmPlayer); \
	DECLARE_FUNCTION(execUpdateDirectCdnStreamingMediaOptions); \
	DECLARE_FUNCTION(execStopDirectCdnStreaming); \
	DECLARE_FUNCTION(execStartDirectCdnStreaming); \
	DECLARE_FUNCTION(execSetDirectCdnStreamingVideoConfiguration); \
	DECLARE_FUNCTION(execSetDirectCdnStreamingAudioConfiguration); \
	DECLARE_FUNCTION(execResumeAllChannelMediaRelay); \
	DECLARE_FUNCTION(execPauseAllChannelMediaRelay); \
	DECLARE_FUNCTION(execStopChannelMediaRelay); \
	DECLARE_FUNCTION(execUpdateChannelMediaRelay); \
	DECLARE_FUNCTION(execStartChannelMediaRelay); \
	DECLARE_FUNCTION(execStartOrUpdateChannelMediaRelayEx); \
	DECLARE_FUNCTION(execStartOrUpdateChannelMediaRelay); \
	DECLARE_FUNCTION(execGetUserInfoByUid); \
	DECLARE_FUNCTION(execGetUserInfoByUserAccount); \
	DECLARE_FUNCTION(execJoinChannelWithUserAccountEx); \
	DECLARE_FUNCTION(execJoinChannelWithUserAccount); \
	DECLARE_FUNCTION(execRegisterLocalUserAccount); \
	DECLARE_FUNCTION(execSetAINSMode); \
	DECLARE_FUNCTION(execStartAudioFrameDump); \
	DECLARE_FUNCTION(execUnregisterMediaMetadataObserver); \
	DECLARE_FUNCTION(execRegisterMediaMetadataObserver); \
	DECLARE_FUNCTION(execSendCustomReportMessage); \
	DECLARE_FUNCTION(execEnableWebSdkInteroperability); \
	DECLARE_FUNCTION(execResumeAudio); \
	DECLARE_FUNCTION(execPauseAudio); \
	DECLARE_FUNCTION(execClearVideoWatermarks); \
	DECLARE_FUNCTION(execAddVideoWatermark); \
	DECLARE_FUNCTION(execSendStreamMessage); \
	DECLARE_FUNCTION(execCreateDataStream); \
	DECLARE_FUNCTION(execEnableEncryption); \
	DECLARE_FUNCTION(execSetEncryptionSecret); \
	DECLARE_FUNCTION(execSetEncryptionMode); \
	DECLARE_FUNCTION(execRegisterPacketObserver); \
	DECLARE_FUNCTION(execSetRemoteUserPriority); \
	DECLARE_FUNCTION(execUnregisterEventHandlerEx); \
	DECLARE_FUNCTION(execUnregisterEventHandler); \
	DECLARE_FUNCTION(execRegisterEventHandlerEx); \
	DECLARE_FUNCTION(execRegisterEventHandler); \
	DECLARE_FUNCTION(execGetConnectionState); \
	DECLARE_FUNCTION(execSetScreenCaptureOrientation); \
	DECLARE_FUNCTION(execSetCameraDeviceOrientation); \
	DECLARE_FUNCTION(execStopLocalVideoTranscoder); \
	DECLARE_FUNCTION(execUpdateLocalTranscoderConfiguration); \
	DECLARE_FUNCTION(execStartLocalVideoTranscoder); \
	DECLARE_FUNCTION(execStopScreenCaptureBySourceType); \
	DECLARE_FUNCTION(execStartScreenCaptureBySourceType); \
	DECLARE_FUNCTION(execStopCameraCapture); \
	DECLARE_FUNCTION(execStartCameraCapture); \
	DECLARE_FUNCTION(execStopRtmpStream); \
	DECLARE_FUNCTION(execUpdateRtmpTranscoding); \
	DECLARE_FUNCTION(execStartRtmpStreamWithTranscoding); \
	DECLARE_FUNCTION(execStartRtmpStreamWithoutTranscoding); \
	DECLARE_FUNCTION(execComplain); \
	DECLARE_FUNCTION(execRate); \
	DECLARE_FUNCTION(execGetCallId); \
	DECLARE_FUNCTION(execStopScreenCapture); \
	DECLARE_FUNCTION(execUpdateScreenCapture); \
	DECLARE_FUNCTION(execSetScreenCaptureScenario); \
	DECLARE_FUNCTION(execQueryScreenCaptureCapability); \
	DECLARE_FUNCTION(execStartScreenCapture); \
	DECLARE_FUNCTION(execUpdateScreenCaptureParameters); \
	DECLARE_FUNCTION(execUpdateScreenCaptureRegion); \
	DECLARE_FUNCTION(execSetScreenCaptureContentHint); \
	DECLARE_FUNCTION(execStartScreenCaptureByWindowId); \
	DECLARE_FUNCTION(execGetAudioDeviceInfo); \
	DECLARE_FUNCTION(execStartScreenCaptureByScreenRect); \
	DECLARE_FUNCTION(execStartScreenCaptureByDisplayId); \
	DECLARE_FUNCTION(execSetAudioSessionOperationRestriction); \
	DECLARE_FUNCTION(execGetScreenCaptureSources); \
	DECLARE_FUNCTION(execIsSpeakerphoneEnabled); \
	DECLARE_FUNCTION(execSetEnableSpeakerphone); \
	DECLARE_FUNCTION(execSetDefaultAudioRouteToSpeakerphone); \
	DECLARE_FUNCTION(execSetCameraAutoExposureFaceModeEnabled); \
	DECLARE_FUNCTION(execIsCameraAutoExposureFaceModeSupported); \
	DECLARE_FUNCTION(execSetCameraExposurePosition); \
	DECLARE_FUNCTION(execIsCameraExposurePositionSupported); \
	DECLARE_FUNCTION(execSetCameraAutoFocusFaceModeEnabled); \
	DECLARE_FUNCTION(execSetCameraTorchOn); \
	DECLARE_FUNCTION(execSetCameraFocusPositionInPreview); \
	DECLARE_FUNCTION(execGetCameraMaxZoomFactor); \
	DECLARE_FUNCTION(execEnableFaceDetection); \
	DECLARE_FUNCTION(execSetCameraZoomFactor); \
	DECLARE_FUNCTION(execIsCameraAutoFocusFaceModeSupported); \
	DECLARE_FUNCTION(execIsCameraFocusSupported); \
	DECLARE_FUNCTION(execIsCameraTorchSupported); \
	DECLARE_FUNCTION(execIsCameraFaceDetectSupported); \
	DECLARE_FUNCTION(execIsCameraZoomSupported); \
	DECLARE_FUNCTION(execSwitchCamera); \
	DECLARE_FUNCTION(execDestroyCustomEncodedVideoTrack); \
	DECLARE_FUNCTION(execDestroyCustomVideoTrack); \
	DECLARE_FUNCTION(execCreateCustomEncodedVideoTrack); \
	DECLARE_FUNCTION(execCreateCustomVideoTrack); \
	DECLARE_FUNCTION(execSetCameraCapturerConfiguration); \
	DECLARE_FUNCTION(execGetExtensionProperty); \
	DECLARE_FUNCTION(execSetExtensionProperty); \
	DECLARE_FUNCTION(execEnableExtension); \
	DECLARE_FUNCTION(execSetExtensionProviderProperty); \
	DECLARE_FUNCTION(execLoadExtensionProvider); \
	DECLARE_FUNCTION(execSetInEarMonitoringVolume); \
	DECLARE_FUNCTION(execEnableInEarMonitoring); \
	DECLARE_FUNCTION(execGetLoopbackRecordingVolume); \
	DECLARE_FUNCTION(execAdjustLoopbackSignalVolume); \
	DECLARE_FUNCTION(execEnableLoopbackRecording); \
	DECLARE_FUNCTION(execSetHighPriorityUserList); \
	DECLARE_FUNCTION(execSetRemoteSubscribeFallbackOption); \
	DECLARE_FUNCTION(execSetLocalPublishFallbackOption); \
	DECLARE_FUNCTION(execAdjustUserPlaybackSignalVolume); \
	DECLARE_FUNCTION(execAdjustPlaybackSignalVolume); \
	DECLARE_FUNCTION(execMuteRecordingSignal); \
	DECLARE_FUNCTION(execAdjustRecordingSignalVolume); \
	DECLARE_FUNCTION(execUnregisterAudioSpectrumObserver); \
	DECLARE_FUNCTION(execRegisterAudioSpectrumObserver); \
	DECLARE_FUNCTION(execDisableAudioSpectrumMonitor); \
	DECLARE_FUNCTION(execEnableAudioSpectrumMonitor); \
	DECLARE_FUNCTION(execSetPlaybackAudioFrameBeforeMixingParameters); \
	DECLARE_FUNCTION(execSetMixedAudioFrameParameters); \
	DECLARE_FUNCTION(execSetPlaybackAudioFrameParameters); \
	DECLARE_FUNCTION(execSetRecordingAudioFrameParameters); \
	DECLARE_FUNCTION(execEnableCustomAudioLocalPlayback); \
	DECLARE_FUNCTION(execSetDualStreamMode); \
	DECLARE_FUNCTION(execEnableDualStreamMode); \
	DECLARE_FUNCTION(execSetLocalVideoMirrorMode); \
	DECLARE_FUNCTION(execSetRemoteRenderMode); \
	DECLARE_FUNCTION(execSetLocalRenderMode); \
	DECLARE_FUNCTION(execUploadLogFile); \
	DECLARE_FUNCTION(execSetLogFileSize); \
	DECLARE_FUNCTION(execSetLogLevel); \
	DECLARE_FUNCTION(execSetLogFilter); \
	DECLARE_FUNCTION(execSetLogFile); \
	DECLARE_FUNCTION(execSetLocalVoiceReverb); \
	DECLARE_FUNCTION(execSetLocalVoiceEqualization); \
	DECLARE_FUNCTION(execSetLocalVoiceFormant); \
	DECLARE_FUNCTION(execSetLocalVoicePitch); \
	DECLARE_FUNCTION(execSetVoiceConversionParameters); \
	DECLARE_FUNCTION(execSetVoiceBeautifierParameters); \
	DECLARE_FUNCTION(execSetAudioEffectParameters); \
	DECLARE_FUNCTION(execSetVoiceConversionPreset); \
	DECLARE_FUNCTION(execSetAudioEffectPreset); \
	DECLARE_FUNCTION(execSetVoiceBeautifierPreset); \
	DECLARE_FUNCTION(execSetRemoteUserSpatialAudioParams); \
	DECLARE_FUNCTION(execEnableSpatialAudio); \
	DECLARE_FUNCTION(execSetRemoteVoicePosition); \
	DECLARE_FUNCTION(execEnableSoundPositionIndication); \
	DECLARE_FUNCTION(execGetEffectCurrentPosition); \
	DECLARE_FUNCTION(execSetEffectPosition); \
	DECLARE_FUNCTION(execGetEffectDuration); \
	DECLARE_FUNCTION(execUnloadAllEffects); \
	DECLARE_FUNCTION(execUnloadEffect); \
	DECLARE_FUNCTION(execStopAllEffects); \
	DECLARE_FUNCTION(execStopEffect); \
	DECLARE_FUNCTION(execResumeAllEffects); \
	DECLARE_FUNCTION(execResumeEffect); \
	DECLARE_FUNCTION(execPauseAllEffects); \
	DECLARE_FUNCTION(execPauseEffect); \
	DECLARE_FUNCTION(execSetVolumeOfEffect); \
	DECLARE_FUNCTION(execGetVolumeOfEffect); \
	DECLARE_FUNCTION(execPlayAllEffects); \
	DECLARE_FUNCTION(execPlayEffect); \
	DECLARE_FUNCTION(execPreloadEffect); \
	DECLARE_FUNCTION(execSetEffectsVolume); \
	DECLARE_FUNCTION(execGetEffectsVolume); \
	DECLARE_FUNCTION(execSetAudioMixingPitch); \
	DECLARE_FUNCTION(execSetAudioMixingDualMonoMode); \
	DECLARE_FUNCTION(execSetAudioMixingPosition); \
	DECLARE_FUNCTION(execGetAudioMixingCurrentPosition); \
	DECLARE_FUNCTION(execGetAudioMixingDuration); \
	DECLARE_FUNCTION(execGetAudioMixingPlayoutVolume); \
	DECLARE_FUNCTION(execAdjustAudioMixingPlayoutVolume); \
	DECLARE_FUNCTION(execGetAudioMixingPublishVolume); \
	DECLARE_FUNCTION(execAdjustAudioMixingPublishVolume); \
	DECLARE_FUNCTION(execAdjustAudioMixingVolume); \
	DECLARE_FUNCTION(execGetAudioTrackCount); \
	DECLARE_FUNCTION(execSelectAudioTrack); \
	DECLARE_FUNCTION(execResumeAudioMixing); \
	DECLARE_FUNCTION(execPauseAudioMixing); \
	DECLARE_FUNCTION(execStopAudioMixing); \
	DECLARE_FUNCTION(execStartAudioMixing); \
	DECLARE_FUNCTION(execDestroyMediaRecorder); \
	DECLARE_FUNCTION(execCreateMediaRecorder); \
	DECLARE_FUNCTION(execDestroyMediaPlayer); \
	DECLARE_FUNCTION(execCreateMediaPlayer); \
	DECLARE_FUNCTION(execStopAudioRecording); \
	DECLARE_FUNCTION(execRegisterAudioEncodedFrameObserver); \
	DECLARE_FUNCTION(execStartAudioRecording); \
	DECLARE_FUNCTION(execEnableAudioVolumeIndication); \
	DECLARE_FUNCTION(execSetRemoteDefaultVideoStreamType); \
	DECLARE_FUNCTION(execSetRemoteVideoSubscriptionOptions); \
	DECLARE_FUNCTION(execSetRemoteVideoStreamType); \
	DECLARE_FUNCTION(execMuteRemoteVideoStream); \
	DECLARE_FUNCTION(execSetDefaultMuteAllRemoteVideoStreams); \
	DECLARE_FUNCTION(execMuteAllRemoteVideoStreams); \
	DECLARE_FUNCTION(execEnableLocalVideo); \
	DECLARE_FUNCTION(execMuteLocalVideoStream); \
	DECLARE_FUNCTION(execMuteRemoteAudioStream); \
	DECLARE_FUNCTION(execSetDefaultMuteAllRemoteAudioStreams); \
	DECLARE_FUNCTION(execMuteAllRemoteAudioStreams); \
	DECLARE_FUNCTION(execMuteLocalAudioStream); \
	DECLARE_FUNCTION(execEnableLocalAudio); \
	DECLARE_FUNCTION(execSetAudioScenario); \
	DECLARE_FUNCTION(execSetAudioProfile); \
	DECLARE_FUNCTION(execDisableAudio); \
	DECLARE_FUNCTION(execEnableAudio); \
	DECLARE_FUNCTION(execSetVideoScenario); \
	DECLARE_FUNCTION(execSetupLocalVideo); \
	DECLARE_FUNCTION(execSetupRemoteVideo); \
	DECLARE_FUNCTION(execEnableVirtualBackground); \
	DECLARE_FUNCTION(execSetColorEnhanceOptions); \
	DECLARE_FUNCTION(execSetVideoDenoiserOptions); \
	DECLARE_FUNCTION(execSetLowlightEnhanceOptions); \
	DECLARE_FUNCTION(execSetBeautyEffectOptions); \
	DECLARE_FUNCTION(execSetVideoEncoderConfiguration); \
	DECLARE_FUNCTION(execStopLastmileProbeTest); \
	DECLARE_FUNCTION(execStartLastmileProbeTest); \
	DECLARE_FUNCTION(execsetOutputAudioDevice); \
	DECLARE_FUNCTION(execsetInputAudioDevice); \
	DECLARE_FUNCTION(execSetWebcamDevice); \
	DECLARE_FUNCTION(execGetWebcamDevices); \
	DECLARE_FUNCTION(execgetAudioInputDevices); \
	DECLARE_FUNCTION(execgetAudioOutputDevices); \
	DECLARE_FUNCTION(execStopPreview); \
	DECLARE_FUNCTION(execStartPreview); \
	DECLARE_FUNCTION(execDisableVideo); \
	DECLARE_FUNCTION(execEnableVideo); \
	DECLARE_FUNCTION(execEnableMultiCamera); \
	DECLARE_FUNCTION(execStopEchoTest); \
	DECLARE_FUNCTION(execStartEchoTest); \
	DECLARE_FUNCTION(execSetClientRole); \
	DECLARE_FUNCTION(execSetChannelProfile); \
	DECLARE_FUNCTION(execRenewToken); \
	DECLARE_FUNCTION(execLeaveChannel); \
	DECLARE_FUNCTION(execUpdateChannelMediaOptions); \
	DECLARE_FUNCTION(execJoinChannel); \
	DECLARE_FUNCTION(execQueryCodecCapability); \
	DECLARE_FUNCTION(execGetErrorDescription); \
	DECLARE_FUNCTION(execGetVersion); \
	DECLARE_FUNCTION(execInitializeEx); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execQueryInterface);


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_53_ACCESSORS
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAgoraRtcEngine(); \
	friend struct Z_Construct_UClass_UAgoraRtcEngine_Statics; \
public: \
	DECLARE_CLASS(UAgoraRtcEngine, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAgoraRtcEngine)


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAgoraRtcEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAgoraRtcEngine(UAgoraRtcEngine&&); \
	NO_API UAgoraRtcEngine(const UAgoraRtcEngine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAgoraRtcEngine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAgoraRtcEngine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAgoraRtcEngine) \
	NO_API virtual ~UAgoraRtcEngine();


#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_50_PROLOG
#define FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_53_SPARSE_DATA \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_53_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_53_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_53_ACCESSORS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_53_INCLASS_NO_PURE_DECLS \
	FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UAgoraRtcEngine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraRtcEngine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
