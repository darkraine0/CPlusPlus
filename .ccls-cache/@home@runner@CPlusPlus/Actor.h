// Actor.h
#pragma once

#include <iostream>
#include "CoreMinimal.h"
#include "Actor.generated.h"

UCLASS()
class YOURGAME_API AActor : public AActor
{
    GENERATED_BODY()

public:
    // Constructor
    AActor();

    // Function declaration
    void PerformAction();
};
