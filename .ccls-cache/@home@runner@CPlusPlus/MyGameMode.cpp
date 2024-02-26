// MyGameMode.cpp
#include "MyGameMode.h"

static private void SwapTile(APlayer* Player1, APlayer* Player2


AMyGameMode::AMyGameMode(
  
  AMyGameMode(APlayer* Player1, APlayer* Player2)

{
    if (Player1 && Player2)
    {
        FVector Player1Location = Player1->GetActorLocation();
        FVector Player2Location = Player2->GetActorLocation();

        Player1->SetActorLocation(Player2Location);
        Player2->SetActorLocation(Player1Location);
    }
}
