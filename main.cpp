// Main.cpp
#include <iostream>
#include "MyGameMode.h"

int main()
{
    // Create instances of Player1 and Player2
    APlayer* Player1 = new APlayer();
    APlayer* Player2 = new APlayer();

    // Create an instance of MyGameMode
    AMyGameMode* GameMode = new AMyGameMode();

    // Perform SwapTile mechanic
    GameMode->SwapTile(Player1, Player2);

    delete Player1;
    delete Player2;
    delete GameMode;

    return 0;
}
