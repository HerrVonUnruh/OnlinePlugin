// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GM_LobbyGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MENUSYSTEM_GM_LobbyGameMode_generated_h
#error "GM_LobbyGameMode.generated.h already included, missing '#pragma once' in GM_LobbyGameMode.h"
#endif
#define MENUSYSTEM_GM_LobbyGameMode_generated_h

#define FID_Users_robin_Desktop_OnlinePlugin_MenuSystem_Source_MenuSystem_GM_LobbyGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGM_LobbyGameMode(); \
	friend struct Z_Construct_UClass_AGM_LobbyGameMode_Statics; \
public: \
	DECLARE_CLASS(AGM_LobbyGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MenuSystem"), NO_API) \
	DECLARE_SERIALIZER(AGM_LobbyGameMode)


#define FID_Users_robin_Desktop_OnlinePlugin_MenuSystem_Source_MenuSystem_GM_LobbyGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGM_LobbyGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGM_LobbyGameMode(AGM_LobbyGameMode&&); \
	AGM_LobbyGameMode(const AGM_LobbyGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGM_LobbyGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGM_LobbyGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGM_LobbyGameMode) \
	NO_API virtual ~AGM_LobbyGameMode();


#define FID_Users_robin_Desktop_OnlinePlugin_MenuSystem_Source_MenuSystem_GM_LobbyGameMode_h_12_PROLOG
#define FID_Users_robin_Desktop_OnlinePlugin_MenuSystem_Source_MenuSystem_GM_LobbyGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_robin_Desktop_OnlinePlugin_MenuSystem_Source_MenuSystem_GM_LobbyGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_robin_Desktop_OnlinePlugin_MenuSystem_Source_MenuSystem_GM_LobbyGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MENUSYSTEM_API UClass* StaticClass<class AGM_LobbyGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_robin_Desktop_OnlinePlugin_MenuSystem_Source_MenuSystem_GM_LobbyGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
