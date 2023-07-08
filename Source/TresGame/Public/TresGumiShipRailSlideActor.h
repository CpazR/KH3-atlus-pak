#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickActorBase.h"
#include "TresGumiShipRailSlideActor.generated.h"

UCLASS(Blueprintable)
class ATresGumiShipRailSlideActor : public ATresGumiShipGimmickActorBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipFinishedRailSlide);
    
    ATresGumiShipRailSlideActor(const FObjectInitializer& ObjectInitializer);
};
