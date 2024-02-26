    // // Assuming you have a Player class in Unreal Engine

#include "Player.h"
#include "Engine/World.h"

void SwapTile(APlayer* Player1, APlayer* Player2)
{
    if (Player1 && Player2)
    {
        FVector TempLocation = Player1->GetActorLocation();
        Player1->SetActorLocation(Player2->GetActorLocation());
        Player2->SetActorLocation(TempLocation);
    }
}