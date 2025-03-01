// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "Menu.generated.h"

/**
 *
 */
UCLASS()
class MULTIPLAYERSESSIONSMYPLUGINUE55_API UMenu : public UUserWidget
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable)
    void MenuSetup(int32 NumberOfPublicConnections = 4, FString TypeOfMatch = FString(TEXT("FreeForAll")), FString LobbyPath = FString(TEXT("/Game/Lobby")));


protected:
    virtual bool Initialize() override;
    virtual void NativeDestruct() override;

    //
    //Callbacks for the custom delegates on the multiplayersessionssubsystem
    //
    UFUNCTION()
    void OnCreateSession(bool bWasSuccessful);
    void OnFindSessions(const TArray<FOnlineSessionSearchResult>& SessionResults, bool bWasSuccessful);
    void OnJoinSession(EOnJoinSessionCompleteResult::Type Result);
    UFUNCTION()
    void OnDestroySession(bool bWasSuccessful);
    UFUNCTION()
    void OnStartSession(bool bWasSuccessful);

private:
    UPROPERTY(meta = (BindWidget))
    class UButton* BT_Host;

    UPROPERTY(meta = (BindWidget))
    UButton* BT_Join;

    UFUNCTION()
    void HostButtonClicked();

    UFUNCTION()
    void JoinButtonClicked();

    UFUNCTION()
    void MenuTearDown();

    //The Subsystem designed to handle all online session functionality
    class UMultiplayerSessionsSubsystem* MultiplayerSessionsSubsystem;

    int32 NumPublicConnections{4};
    FString MatchType{TEXT("FreeForAll")};
    FString PathToLobby{TEXT("")};

};