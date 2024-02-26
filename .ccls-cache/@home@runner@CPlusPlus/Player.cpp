// Player.cpp
#include "Player.h"

APlayer::APlayer()
{
}

void APlayer::SwapLocationWith(APlayer* OtherPlayer)
{
    if (OtherPlayer)
    {
        FVector TempLocation = GetActorLocation();
        SetActorLocation(OtherPlayer->GetActorLocation());
        OtherPlayer->SetActorLocation(TempLocation);
    }
}
