// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Menu.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYERSESSIONSMYPLUGINUE55_Menu_generated_h
#error "Menu.generated.h already included, missing '#pragma once' in Menu.h"
#endif
#define MULTIPLAYERSESSIONSMYPLUGINUE55_Menu_generated_h

#define FID_Users_robin_Desktop_OnlinePlugin_MenuSystem_Plugins_MultiplayerSessionsMyPluginUE55_Source_MultiplayerSessionsMyPluginUE55_Public_Menu_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMenuTearDown); \
	DECLARE_FUNCTION(execJoinButtonClicked); \
	DECLARE_FUNCTION(execHostButtonClicked); \
	DECLARE_FUNCTION(execOnStartSession); \
	DECLARE_FUNCTION(execOnDestroySession); \
	DECLARE_FUNCTION(execOnCreateSession); \
	DECLARE_FUNCTION(execMenuSetup);


#define FID_Users_robin_Desktop_OnlinePlugin_MenuSystem_Plugins_MultiplayerSessionsMyPluginUE55_Source_MultiplayerSessionsMyPluginUE55_Public_Menu_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMenu(); \
	friend struct Z_Construct_UClass_UMenu_Statics; \
public: \
	DECLARE_CLASS(UMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayerSessionsMyPluginUE55"), NO_API) \
	DECLARE_SERIALIZER(UMenu)


#define FID_Users_robin_Desktop_OnlinePlugin_MenuSystem_Plugins_MultiplayerSessionsMyPluginUE55_Source_MultiplayerSessionsMyPluginUE55_Public_Menu_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMenu(UMenu&&); \
	UMenu(const UMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenu) \
	NO_API virtual ~UMenu();


#define FID_Users_robin_Desktop_OnlinePlugin_MenuSystem_Plugins_MultiplayerSessionsMyPluginUE55_Source_MultiplayerSessionsMyPluginUE55_Public_Menu_h_12_PROLOG
#define FID_Users_robin_Desktop_OnlinePlugin_MenuSystem_Plugins_MultiplayerSessionsMyPluginUE55_Source_MultiplayerSessionsMyPluginUE55_Public_Menu_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_robin_Desktop_OnlinePlugin_MenuSystem_Plugins_MultiplayerSessionsMyPluginUE55_Source_MultiplayerSessionsMyPluginUE55_Public_Menu_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_robin_Desktop_OnlinePlugin_MenuSystem_Plugins_MultiplayerSessionsMyPluginUE55_Source_MultiplayerSessionsMyPluginUE55_Public_Menu_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_robin_Desktop_OnlinePlugin_MenuSystem_Plugins_MultiplayerSessionsMyPluginUE55_Source_MultiplayerSessionsMyPluginUE55_Public_Menu_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERSESSIONSMYPLUGINUE55_API UClass* StaticClass<class UMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_robin_Desktop_OnlinePlugin_MenuSystem_Plugins_MultiplayerSessionsMyPluginUE55_Source_MultiplayerSessionsMyPluginUE55_Public_Menu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
