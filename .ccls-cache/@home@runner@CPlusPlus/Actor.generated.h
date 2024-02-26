// Actor.generated.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

UCLASS()
class YOURGAME_API AActor : public AActor
{
    GENERATED_BODY()

public:
    AActor();

    void PerformAction();
};
