// MyGameMode.h
#pragma once

#include <iostream>
#include "Player.h"
#include "MyGameMode.generated.h"

void SwapTile(APlayer* Player1, APlayer* Player2)
        // Implement the logic to swap tiles

class YOURGAME_API MyGameMode : public AMyGameMode

{
public:
    void SwapTile(APlayer* Player1, APlayer* Player2);
};
