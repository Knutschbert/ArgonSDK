#pragma once
#include "CoreMinimal.h"
#include "OnUseItemDelegate.generated.h"

class AInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUseItem, AInventoryItem*, Item);

