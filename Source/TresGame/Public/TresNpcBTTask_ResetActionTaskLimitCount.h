#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresNpcBTTask_ResetActionTaskLimitCount.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTTask_ResetActionTaskLimitCount : public UBTTaskNode {
    GENERATED_BODY()
public:
    UTresNpcBTTask_ResetActionTaskLimitCount();
};
