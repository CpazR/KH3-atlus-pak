#pragma once
#include "CoreMinimal.h"
#include "SQEX_SplineMoverExecutor.h"
#include "TresGimmickMI_04_EventDoor.generated.h"

USTRUCT(BlueprintType)
struct FTresGimmickMI_04_EventDoor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSQEX_SplineMoverExecutor SplineMover;
    
    TRESGAME_API FTresGimmickMI_04_EventDoor();
};
