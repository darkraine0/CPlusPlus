// Actor.h
#pragma once

#include "Actor.generated.h"
#include "GameFramework/Actor.h"
#include <iostream>

UCLASS()
class YOURGAME_API AActor : public AActor {
  GENERATED_BODY()

public:
  // Constructor
  AActor();

  // Function declaration
  void PerformAction();
};
