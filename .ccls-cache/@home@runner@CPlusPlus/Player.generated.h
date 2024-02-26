// Player.generated.h
#pragma once

#include <iostream>
#include "GameFramework/Actor.h"
#include "Player.generated.gen.h"

UCLASS()
class TOURNAMENTAL_API APlayer : public AActor
{
    GENERATED_BODY()

public:
    APlayer();

    void SwapLocationWith(APlayer* OtherPlayer);
};
