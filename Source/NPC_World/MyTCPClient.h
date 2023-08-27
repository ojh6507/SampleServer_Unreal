// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyTCPClient.generated.h"

/**
 * 
 */
UCLASS()
class NPC_WORLD_API UMyTCPClient : public UObject
{
	GENERATED_BODY()
  

public:
    UMyTCPClient();

    // ������ �����ϴ� �Լ�
    bool ConnectToServer(const FString& IPAddress, int32 Port);

    // �����͸� ������ ������ �Լ�
    void SendData(const FString& Data);

    // �������� �����͸� �޴� �Լ� (���÷� �ۼ�)
    FString ReceiveData();
    FSocket* ClientSocket;


    UFUNCTION(BlueprintCallable, Category = "Networking")
    void SendPlayerPosition(const FVector& Position);

    UFUNCTION(BlueprintCallable, Category = "Networking")
    FVector ReceivePlayerPosition();
};