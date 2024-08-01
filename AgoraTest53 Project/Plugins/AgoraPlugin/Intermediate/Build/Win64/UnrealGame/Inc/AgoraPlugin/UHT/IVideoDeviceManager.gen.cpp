// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/IVideoDeviceManager.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/URtcEngineProxyCompatibility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIVideoDeviceManager() {}
// Cross Module References
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIVideoDeviceCollection();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIVideoDeviceCollection_NoRegister();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIVideoDeviceManager();
	AGORAPLUGIN_API UClass* Z_Construct_UClass_UIVideoDeviceManager_NoRegister();
	AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVideoFormat();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AgoraPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UIVideoDeviceCollection::execRelease)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Release();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIVideoDeviceCollection::execGetDevice)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceNameUTF8);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceIdUTF8);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDevice(Z_Param_index,Z_Param_Out_deviceNameUTF8,Z_Param_Out_deviceIdUTF8);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIVideoDeviceCollection::execSetDevice)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceIdUTF8);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetDevice(Z_Param_Out_deviceIdUTF8);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIVideoDeviceCollection::execGetCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCount();
		P_NATIVE_END;
	}
	void UIVideoDeviceCollection::StaticRegisterNativesUIVideoDeviceCollection()
	{
		UClass* Class = UIVideoDeviceCollection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCount", &UIVideoDeviceCollection::execGetCount },
			{ "GetDevice", &UIVideoDeviceCollection::execGetDevice },
			{ "Release", &UIVideoDeviceCollection::execRelease },
			{ "SetDevice", &UIVideoDeviceCollection::execSetDevice },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIVideoDeviceCollection_GetCount_Statics
	{
		struct IVideoDeviceCollection_eventGetCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIVideoDeviceCollection_GetCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IVideoDeviceCollection_eventGetCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIVideoDeviceCollection_GetCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceCollection_GetCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIVideoDeviceCollection_GetCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IVideoDeviceManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIVideoDeviceCollection_GetCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIVideoDeviceCollection, nullptr, "GetCount", nullptr, nullptr, Z_Construct_UFunction_UIVideoDeviceCollection_GetCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceCollection_GetCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIVideoDeviceCollection_GetCount_Statics::IVideoDeviceCollection_eventGetCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceCollection_GetCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIVideoDeviceCollection_GetCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceCollection_GetCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIVideoDeviceCollection_GetCount_Statics::IVideoDeviceCollection_eventGetCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIVideoDeviceCollection_GetCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIVideoDeviceCollection_GetCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics
	{
		struct IVideoDeviceCollection_eventGetDevice_Parms
		{
			int32 index;
			FString deviceNameUTF8;
			FString deviceIdUTF8;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceNameUTF8;
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceIdUTF8;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IVideoDeviceCollection_eventGetDevice_Parms, index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::NewProp_deviceNameUTF8 = { "deviceNameUTF8", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IVideoDeviceCollection_eventGetDevice_Parms, deviceNameUTF8), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::NewProp_deviceIdUTF8 = { "deviceIdUTF8", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IVideoDeviceCollection_eventGetDevice_Parms, deviceIdUTF8), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IVideoDeviceCollection_eventGetDevice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::NewProp_deviceNameUTF8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::NewProp_deviceIdUTF8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IVideoDeviceManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIVideoDeviceCollection, nullptr, "GetDevice", nullptr, nullptr, Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::IVideoDeviceCollection_eventGetDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::IVideoDeviceCollection_eventGetDevice_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIVideoDeviceCollection_Release_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIVideoDeviceCollection_Release_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IVideoDeviceManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIVideoDeviceCollection_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIVideoDeviceCollection, nullptr, "Release", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceCollection_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIVideoDeviceCollection_Release_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UIVideoDeviceCollection_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIVideoDeviceCollection_Release_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics
	{
		struct IVideoDeviceCollection_eventSetDevice_Parms
		{
			FString deviceIdUTF8;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceIdUTF8;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics::NewProp_deviceIdUTF8 = { "deviceIdUTF8", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IVideoDeviceCollection_eventSetDevice_Parms, deviceIdUTF8), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IVideoDeviceCollection_eventSetDevice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics::NewProp_deviceIdUTF8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IVideoDeviceManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIVideoDeviceCollection, nullptr, "SetDevice", nullptr, nullptr, Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics::IVideoDeviceCollection_eventSetDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics::IVideoDeviceCollection_eventSetDevice_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIVideoDeviceCollection);
	UClass* Z_Construct_UClass_UIVideoDeviceCollection_NoRegister()
	{
		return UIVideoDeviceCollection::StaticClass();
	}
	struct Z_Construct_UClass_UIVideoDeviceCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIVideoDeviceCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIVideoDeviceCollection_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UIVideoDeviceCollection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIVideoDeviceCollection_GetCount, "GetCount" }, // 1900770036
		{ &Z_Construct_UFunction_UIVideoDeviceCollection_GetDevice, "GetDevice" }, // 1950876093
		{ &Z_Construct_UFunction_UIVideoDeviceCollection_Release, "Release" }, // 3136967524
		{ &Z_Construct_UFunction_UIVideoDeviceCollection_SetDevice, "SetDevice" }, // 3748021233
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIVideoDeviceCollection_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIVideoDeviceCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AgoraBluePrintPlugin/IVideoDeviceManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IVideoDeviceManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIVideoDeviceCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIVideoDeviceCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIVideoDeviceCollection_Statics::ClassParams = {
		&UIVideoDeviceCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIVideoDeviceCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UIVideoDeviceCollection_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UIVideoDeviceCollection()
	{
		if (!Z_Registration_Info_UClass_UIVideoDeviceCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIVideoDeviceCollection.OuterSingleton, Z_Construct_UClass_UIVideoDeviceCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIVideoDeviceCollection.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UClass* StaticClass<UIVideoDeviceCollection>()
	{
		return UIVideoDeviceCollection::StaticClass();
	}
	UIVideoDeviceCollection::UIVideoDeviceCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIVideoDeviceCollection);
	UIVideoDeviceCollection::~UIVideoDeviceCollection() {}
	DEFINE_FUNCTION(UIVideoDeviceManager::execRelease)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Release();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIVideoDeviceManager::execStopDeviceTest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->StopDeviceTest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIVideoDeviceManager::execStartDeviceTest)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_hwnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->StartDeviceTest(Z_Param_hwnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIVideoDeviceManager::execGetCapability)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceIdUTF8);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceCapabilityNumber);
		P_GET_STRUCT_REF(FVideoFormat,Z_Param_Out_capability);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCapability(Z_Param_deviceIdUTF8,Z_Param_deviceCapabilityNumber,Z_Param_Out_capability);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIVideoDeviceManager::execNumberOfCapabilities)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceIdUTF8);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->NumberOfCapabilities(Z_Param_deviceIdUTF8);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIVideoDeviceManager::execGetDevice)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceIdUTF8);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDevice(Z_Param_Out_deviceIdUTF8);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIVideoDeviceManager::execSetDevice)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceIdUTF8);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetDevice(Z_Param_deviceIdUTF8);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIVideoDeviceManager::execEnumerateVideoDevices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UIVideoDeviceCollection**)Z_Param__Result=P_THIS->EnumerateVideoDevices();
		P_NATIVE_END;
	}
	void UIVideoDeviceManager::StaticRegisterNativesUIVideoDeviceManager()
	{
		UClass* Class = UIVideoDeviceManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnumerateVideoDevices", &UIVideoDeviceManager::execEnumerateVideoDevices },
			{ "GetCapability", &UIVideoDeviceManager::execGetCapability },
			{ "GetDevice", &UIVideoDeviceManager::execGetDevice },
			{ "NumberOfCapabilities", &UIVideoDeviceManager::execNumberOfCapabilities },
			{ "Release", &UIVideoDeviceManager::execRelease },
			{ "SetDevice", &UIVideoDeviceManager::execSetDevice },
			{ "StartDeviceTest", &UIVideoDeviceManager::execStartDeviceTest },
			{ "StopDeviceTest", &UIVideoDeviceManager::execStopDeviceTest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices_Statics
	{
		struct IVideoDeviceManager_eventEnumerateVideoDevices_Parms
		{
			UIVideoDeviceCollection* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IVideoDeviceManager_eventEnumerateVideoDevices_Parms, ReturnValue), Z_Construct_UClass_UIVideoDeviceCollection_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IVideoDeviceManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIVideoDeviceManager, nullptr, "EnumerateVideoDevices", nullptr, nullptr, Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices_Statics::IVideoDeviceManager_eventEnumerateVideoDevices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices_Statics::IVideoDeviceManager_eventEnumerateVideoDevices_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics
	{
		struct IVideoDeviceManager_eventGetCapability_Parms
		{
			FString deviceIdUTF8;
			int32 deviceCapabilityNumber;
			FVideoFormat capability;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceIdUTF8;
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceCapabilityNumber;
		static const UECodeGen_Private::FStructPropertyParams NewProp_capability;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::NewProp_deviceIdUTF8 = { "deviceIdUTF8", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IVideoDeviceManager_eventGetCapability_Parms, deviceIdUTF8), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::NewProp_deviceCapabilityNumber = { "deviceCapabilityNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IVideoDeviceManager_eventGetCapability_Parms, deviceCapabilityNumber), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::NewProp_capability = { "capability", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IVideoDeviceManager_eventGetCapability_Parms, capability), Z_Construct_UScriptStruct_FVideoFormat, METADATA_PARAMS(0, nullptr) }; // 847311938
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IVideoDeviceManager_eventGetCapability_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::NewProp_deviceIdUTF8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::NewProp_deviceCapabilityNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::NewProp_capability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IVideoDeviceManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIVideoDeviceManager, nullptr, "GetCapability", nullptr, nullptr, Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::IVideoDeviceManager_eventGetCapability_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::IVideoDeviceManager_eventGetCapability_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIVideoDeviceManager_GetCapability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIVideoDeviceManager_GetCapability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics
	{
		struct IVideoDeviceManager_eventGetDevice_Parms
		{
			FString deviceIdUTF8;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceIdUTF8;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics::NewProp_deviceIdUTF8 = { "deviceIdUTF8", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IVideoDeviceManager_eventGetDevice_Parms, deviceIdUTF8), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IVideoDeviceManager_eventGetDevice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics::NewProp_deviceIdUTF8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IVideoDeviceManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIVideoDeviceManager, nullptr, "GetDevice", nullptr, nullptr, Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics::IVideoDeviceManager_eventGetDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics::IVideoDeviceManager_eventGetDevice_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIVideoDeviceManager_GetDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIVideoDeviceManager_GetDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics
	{
		struct IVideoDeviceManager_eventNumberOfCapabilities_Parms
		{
			FString deviceIdUTF8;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceIdUTF8;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics::NewProp_deviceIdUTF8 = { "deviceIdUTF8", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IVideoDeviceManager_eventNumberOfCapabilities_Parms, deviceIdUTF8), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IVideoDeviceManager_eventNumberOfCapabilities_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics::NewProp_deviceIdUTF8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IVideoDeviceManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIVideoDeviceManager, nullptr, "NumberOfCapabilities", nullptr, nullptr, Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics::IVideoDeviceManager_eventNumberOfCapabilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics::IVideoDeviceManager_eventNumberOfCapabilities_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIVideoDeviceManager_Release_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIVideoDeviceManager_Release_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IVideoDeviceManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIVideoDeviceManager_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIVideoDeviceManager, nullptr, "Release", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIVideoDeviceManager_Release_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UIVideoDeviceManager_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIVideoDeviceManager_Release_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics
	{
		struct IVideoDeviceManager_eventSetDevice_Parms
		{
			FString deviceIdUTF8;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceIdUTF8;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics::NewProp_deviceIdUTF8 = { "deviceIdUTF8", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IVideoDeviceManager_eventSetDevice_Parms, deviceIdUTF8), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IVideoDeviceManager_eventSetDevice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics::NewProp_deviceIdUTF8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IVideoDeviceManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIVideoDeviceManager, nullptr, "SetDevice", nullptr, nullptr, Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics::IVideoDeviceManager_eventSetDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics::IVideoDeviceManager_eventSetDevice_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIVideoDeviceManager_SetDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIVideoDeviceManager_SetDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics
	{
		struct IVideoDeviceManager_eventStartDeviceTest_Parms
		{
			int64 hwnd;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_hwnd;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics::NewProp_hwnd = { "hwnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IVideoDeviceManager_eventStartDeviceTest_Parms, hwnd), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IVideoDeviceManager_eventStartDeviceTest_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics::NewProp_hwnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IVideoDeviceManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIVideoDeviceManager, nullptr, "StartDeviceTest", nullptr, nullptr, Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics::IVideoDeviceManager_eventStartDeviceTest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics::IVideoDeviceManager_eventStartDeviceTest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest_Statics
	{
		struct IVideoDeviceManager_eventStopDeviceTest_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IVideoDeviceManager_eventStopDeviceTest_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IVideoDeviceManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIVideoDeviceManager, nullptr, "StopDeviceTest", nullptr, nullptr, Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest_Statics::IVideoDeviceManager_eventStopDeviceTest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest_Statics::IVideoDeviceManager_eventStopDeviceTest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIVideoDeviceManager);
	UClass* Z_Construct_UClass_UIVideoDeviceManager_NoRegister()
	{
		return UIVideoDeviceManager::StaticClass();
	}
	struct Z_Construct_UClass_UIVideoDeviceManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIVideoDeviceManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIVideoDeviceManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UIVideoDeviceManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIVideoDeviceManager_EnumerateVideoDevices, "EnumerateVideoDevices" }, // 906333649
		{ &Z_Construct_UFunction_UIVideoDeviceManager_GetCapability, "GetCapability" }, // 3079701508
		{ &Z_Construct_UFunction_UIVideoDeviceManager_GetDevice, "GetDevice" }, // 2293686812
		{ &Z_Construct_UFunction_UIVideoDeviceManager_NumberOfCapabilities, "NumberOfCapabilities" }, // 2970398623
		{ &Z_Construct_UFunction_UIVideoDeviceManager_Release, "Release" }, // 4256233429
		{ &Z_Construct_UFunction_UIVideoDeviceManager_SetDevice, "SetDevice" }, // 1867184859
		{ &Z_Construct_UFunction_UIVideoDeviceManager_StartDeviceTest, "StartDeviceTest" }, // 2434186570
		{ &Z_Construct_UFunction_UIVideoDeviceManager_StopDeviceTest, "StopDeviceTest" }, // 4204931755
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIVideoDeviceManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIVideoDeviceManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AgoraBluePrintPlugin/IVideoDeviceManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/IVideoDeviceManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIVideoDeviceManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIVideoDeviceManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIVideoDeviceManager_Statics::ClassParams = {
		&UIVideoDeviceManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIVideoDeviceManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UIVideoDeviceManager_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UIVideoDeviceManager()
	{
		if (!Z_Registration_Info_UClass_UIVideoDeviceManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIVideoDeviceManager.OuterSingleton, Z_Construct_UClass_UIVideoDeviceManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIVideoDeviceManager.OuterSingleton;
	}
	template<> AGORAPLUGIN_API UClass* StaticClass<UIVideoDeviceManager>()
	{
		return UIVideoDeviceManager::StaticClass();
	}
	UIVideoDeviceManager::UIVideoDeviceManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIVideoDeviceManager);
	UIVideoDeviceManager::~UIVideoDeviceManager() {}
	struct Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIVideoDeviceCollection, UIVideoDeviceCollection::StaticClass, TEXT("UIVideoDeviceCollection"), &Z_Registration_Info_UClass_UIVideoDeviceCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIVideoDeviceCollection), 1604481813U) },
		{ Z_Construct_UClass_UIVideoDeviceManager, UIVideoDeviceManager::StaticClass, TEXT("UIVideoDeviceManager"), &Z_Registration_Info_UClass_UIVideoDeviceManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIVideoDeviceManager), 1454019169U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_4065239688(TEXT("/Script/AgoraPlugin"),
		Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ivanDesktop_Desktop_AgoraTest53_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_IVideoDeviceManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
