// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuSystem_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MenuSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MenuSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_MenuSystem.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MenuSystem",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x72DBA60B,
				0x7E24923E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MenuSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MenuSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MenuSystem(Z_Construct_UPackage__Script_MenuSystem, TEXT("/Script/MenuSystem"), Z_Registration_Info_UPackage__Script_MenuSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x72DBA60B, 0x7E24923E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
