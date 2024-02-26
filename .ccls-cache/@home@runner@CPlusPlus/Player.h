// Player.h
#pragma once

#include <iostream>
#include "Player.generated.h"

// Include SwapTile functionality from MyGameMode
#include "MyGameMode.h"

UCLASS()
class TOURNAMENTAL_API APlayer
{
public:
    APlayer();

    void SwapLocationWith(APlayer* OtherPlayer);
};
