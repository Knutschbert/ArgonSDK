#pragma once
#include "CoreMinimal.h"
#include "SpawningStartedDelegate.generated.h"

class ASpawnWave;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawningStarted, ASpawnWave*, Wave);

