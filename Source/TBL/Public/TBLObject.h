#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssemblyObject -FallbackName=AssemblyObject
#include "Engine_misc.h"
#include "Engine_misc.h"
#include "TBLObject.generated.h"

class UTBLObject;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UTBLObject : public UAssemblyObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true), Category = "Engine")
    UTBLObject* Template;
    
    UTBLObject();
};

