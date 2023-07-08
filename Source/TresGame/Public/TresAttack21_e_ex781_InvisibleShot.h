#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack21_e_ex781_InvisibleShot.generated.h"

class ATresGenerator_e_ex781_GunShotMarker;

UCLASS(Blueprintable)
class UTresAttack21_e_ex781_InvisibleShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresGenerator_e_ex781_GunShotMarker> m_PatterShotState;
    
    UTresAttack21_e_ex781_InvisibleShot();
};
