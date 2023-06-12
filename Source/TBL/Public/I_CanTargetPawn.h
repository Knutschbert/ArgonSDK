#pragma once
#include "CoreMinimal.h"
#include "UtilityAI_InputAxis.h"
#include "I_CanTargetPawn.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UI_CanTargetPawn : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
    UI_CanTargetPawn();
};

