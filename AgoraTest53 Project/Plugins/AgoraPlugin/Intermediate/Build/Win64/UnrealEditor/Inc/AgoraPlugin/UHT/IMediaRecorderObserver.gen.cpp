// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/IMediaRecorderObserver.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/URtcEngineProxyCompatibility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMediaRecorderObserver() {}
// Cross Module References
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaRecorderObserver();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIMediaRecorderObserver_NoRegister();
	AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_ERecorderErrorCode();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature();
	AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FENUMWRAP_RecorderState();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRecorderInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AgoraPlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnRecorderStateChanged_Parms
		{
			FString channelId;
			int64 uid;
			FENUMWRAP_RecorderState state;
			ERecorderErrorCode error;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_channelId;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_uid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_state;
		static const UECodeGen_Private::FBytePropertyParams NewProp_error_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::NewProp_channelId = { "channelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnRecorderStateChanged_Parms, channelId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::NewProp_uid = { "uid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnRecorderStateChanged_Parms, uid), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnRecorderStateChanged_Parms, state), Z_Construct_UScriptStruct_FENUMWRAP_RecorderState, METADATA_PARAMS(0, nullptr) }; // 3099375175
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::NewProp_error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::NewProp_error = { "error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnRecorderStateChanged_Parms, error), Z_Construct_UEnum_AgoraPlugin_ERecorderErrorCode, METADATA_PARAMS(0, nullptr) }; // 2655728026
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::NewProp_channelId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::NewProp_uid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::NewProp_state,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::NewProp_error_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::NewProp_error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IMediaRecorderObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnRecorderStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnRecorderStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnRecorderStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRecorderStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnRecorderStateChanged, const FString& channelId, int64 uid, FENUMWRAP_RecorderState state, ERecorderErrorCode error)
{
	struct _Script_AgoraPlugin_eventOnRecorderStateChanged_Parms
	{
		FString channelId;
		int64 uid;
		FENUMWRAP_RecorderState state;
		ERecorderErrorCode error;
	};
	_Script_AgoraPlugin_eventOnRecorderStateChanged_Parms Parms;
	Parms.channelId=channelId;
	Parms.uid=uid;
	Parms.state=state;
	Parms.error=error;
	OnRecorderStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics
	{
		struct _Script_AgoraPlugin_eventOnRecorderInfoUpdated_Parms
		{
			FString channelId;
			int64 uid;
			FRecorderInfo info;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_channelId;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_uid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_info_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_info;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::NewProp_channelId = { "channelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnRecorderInfoUpdated_Parms, channelId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::NewProp_uid = { "uid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnRecorderInfoUpdated_Parms, uid), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::NewProp_info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::NewProp_info = { "info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnRecorderInfoUpdated_Parms, info), Z_Construct_UScriptStruct_FRecorderInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::NewProp_info_MetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::NewProp_info_MetaData) }; // 380595134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::NewProp_channelId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::NewProp_uid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::NewProp_info,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IMediaRecorderObserver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnRecorderInfoUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnRecorderInfoUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnRecorderInfoUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRecorderInfoUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnRecorderInfoUpdated, const FString& channelId, int64 uid, FRecorderInfo const& info)
{
	struct _Script_AgoraPlugin_eventOnRecorderInfoUpdated_Parms
	{
		FString channelId;
		int64 uid;
		FRecorderInfo info;
	};
	_Script_AgoraPlugin_eventOnRecorderInfoUpdated_Parms Parms;
	Parms.channelId=channelId;
	Parms.uid=uid;
	Parms.info=info;
	OnRecorderInfoUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UIMediaRecorderObserver::StaticRegisterNativesUIMediaRecorderObserver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIMediaRecorderObserver);
	UClass* Z_Construct_UClass_UIMediaRecorderObserver_NoRegister()
	{
		return UIMediaRecorderObserver::StaticClass();
	}
	struct Z_Construct_UClass_UIMediaRecorderObserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRecorderStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRecorderStateChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRecorderInfoUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRecorderInfoUpdated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIMediaRecorderObserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaRecorderObserver_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaRecorderObserver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AgoraBluePrintPlugin/IMediaRecorderObserver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IMediaRecorderObserver.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaRecorderObserver_Statics::NewProp_OnRecorderStateChanged_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IMediaRecorderObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaRecorderObserver_Statics::NewProp_OnRecorderStateChanged = { "OnRecorderStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIMediaRecorderObserver, OnRecorderStateChanged), Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaRecorderObserver_Statics::NewProp_OnRecorderStateChanged_MetaData), Z_Construct_UClass_UIMediaRecorderObserver_Statics::NewProp_OnRecorderStateChanged_MetaData) }; // 523852295
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediaRecorderObserver_Statics::NewProp_OnRecorderInfoUpdated_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IMediaRecorderObserver.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIMediaRecorderObserver_Statics::NewProp_OnRecorderInfoUpdated = { "OnRecorderInfoUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIMediaRecorderObserver, OnRecorderInfoUpdated), Z_Construct_UDelegateFunction_AgoraPlugin_OnRecorderInfoUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaRecorderObserver_Statics::NewProp_OnRecorderInfoUpdated_MetaData), Z_Construct_UClass_UIMediaRecorderObserver_Statics::NewProp_OnRecorderInfoUpdated_MetaData) }; // 1378627606
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIMediaRecorderObserver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaRecorderObserver_Statics::NewProp_OnRecorderStateChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIMediaRecorderObserver_Statics::NewProp_OnRecorderInfoUpdated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIMediaRecorderObserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIMediaRecorderObserver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIMediaRecorderObserver_Statics::ClassParams = {
		&UIMediaRecorderObserver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIMediaRecorderObserver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaRecorderObserver_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaRecorderObserver_Statics::Class_MetaDataParams), Z_Construct_UClass_UIMediaRecorderObserver_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIMediaRecorderObserver_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UIMediaRecorderObserver()
	{
		if (!Z_Registration_Info_UClass_UIMediaRecorderObserver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIMediaRecorderObserver.OuterSingleton, Z_Construct_UClass_UIMediaRecorderObserver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIMediaRecorderObserver.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UClass* StaticClass<UIMediaRecorderObserver>()
	{
		return UIMediaRecorderObserver::StaticClass();
	}
	UIMediaRecorderObserver::UIMediaRecorderObserver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIMediaRecorderObserver);
	UIMediaRecorderObserver::~UIMediaRecorderObserver() {}
	struct Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIMediaRecorderObserver, UIMediaRecorderObserver::StaticClass, TEXT("UIMediaRecorderObserver"), &Z_Registration_Info_UClass_UIMediaRecorderObserver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIMediaRecorderObserver), 3247940954U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_4175873429(TEXT("/Script/AgoraPlugin"),
		Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IMediaRecorderObserver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
