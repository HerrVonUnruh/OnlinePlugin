// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MenuSystem/GM_LobbyGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGM_LobbyGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MENUSYSTEM_API UClass* Z_Construct_UClass_AGM_LobbyGameMode();
MENUSYSTEM_API UClass* Z_Construct_UClass_AGM_LobbyGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MenuSystem();
// End Cross Module References

// Begin Class AGM_LobbyGameMode
void AGM_LobbyGameMode::StaticRegisterNativesAGM_LobbyGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGM_LobbyGameMode);
UClass* Z_Construct_UClass_AGM_LobbyGameMode_NoRegister()
{
	return AGM_LobbyGameMode::StaticClass();
}
struct Z_Construct_UClass_AGM_LobbyGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GM_LobbyGameMode.h" },
		{ "ModuleRelativePath", "GM_LobbyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGM_LobbyGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGM_LobbyGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MenuSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGM_LobbyGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGM_LobbyGameMode_Statics::ClassParams = {
	&AGM_LobbyGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGM_LobbyGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGM_LobbyGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGM_LobbyGameMode()
{
	if (!Z_Registration_Info_UClass_AGM_LobbyGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGM_LobbyGameMode.OuterSingleton, Z_Construct_UClass_AGM_LobbyGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGM_LobbyGameMode.OuterSingleton;
}
template<> MENUSYSTEM_API UClass* StaticClass<AGM_LobbyGameMode>()
{
	return AGM_LobbyGameMode::StaticClass();
}
AGM_LobbyGameMode::AGM_LobbyGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGM_LobbyGameMode);
AGM_LobbyGameMode::~AGM_LobbyGameMode() {}
// End Class AGM_LobbyGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_robin_Desktop_OnlinePlugin_MenuSystem_Source_MenuSystem_GM_LobbyGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGM_LobbyGameMode, AGM_LobbyGameMode::StaticClass, TEXT("AGM_LobbyGameMode"), &Z_Registration_Info_UClass_AGM_LobbyGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGM_LobbyGameMode), 2099679625U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_robin_Desktop_OnlinePlugin_MenuSystem_Source_MenuSystem_GM_LobbyGameMode_h_1179322520(TEXT("/Script/MenuSystem"),
	Z_CompiledInDeferFile_FID_Users_robin_Desktop_OnlinePlugin_MenuSystem_Source_MenuSystem_GM_LobbyGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_robin_Desktop_OnlinePlugin_MenuSystem_Source_MenuSystem_GM_LobbyGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
