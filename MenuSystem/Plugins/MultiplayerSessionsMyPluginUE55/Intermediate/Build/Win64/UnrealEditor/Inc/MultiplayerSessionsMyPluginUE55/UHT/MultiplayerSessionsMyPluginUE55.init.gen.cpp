// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerSessionsMyPluginUE55_init() {}
	MULTIPLAYERSESSIONSMYPLUGINUE55_API UFunction* Z_Construct_UDelegateFunction_MultiplayerSessionsMyPluginUE55_MultiplayerOnCreateSessionComplete__DelegateSignature();
	MULTIPLAYERSESSIONSMYPLUGINUE55_API UFunction* Z_Construct_UDelegateFunction_MultiplayerSessionsMyPluginUE55_MultiplayerOnDestroySessionComplete__DelegateSignature();
	MULTIPLAYERSESSIONSMYPLUGINUE55_API UFunction* Z_Construct_UDelegateFunction_MultiplayerSessionsMyPluginUE55_MultiplayerOnStartSessionComplete__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MultiplayerSessionsMyPluginUE55;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MultiplayerSessionsMyPluginUE55()
	{
		if (!Z_Registration_Info_UPackage__Script_MultiplayerSessionsMyPluginUE55.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayerSessionsMyPluginUE55_MultiplayerOnCreateSessionComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayerSessionsMyPluginUE55_MultiplayerOnDestroySessionComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayerSessionsMyPluginUE55_MultiplayerOnStartSessionComplete__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MultiplayerSessionsMyPluginUE55",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x743A9CD7,
				0x07754C7C,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MultiplayerSessionsMyPluginUE55.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MultiplayerSessionsMyPluginUE55.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MultiplayerSessionsMyPluginUE55(Z_Construct_UPackage__Script_MultiplayerSessionsMyPluginUE55, TEXT("/Script/MultiplayerSessionsMyPluginUE55"), Z_Registration_Info_UPackage__Script_MultiplayerSessionsMyPluginUE55, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x743A9CD7, 0x07754C7C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
