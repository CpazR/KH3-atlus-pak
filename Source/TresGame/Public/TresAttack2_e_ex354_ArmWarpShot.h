#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "EX354_CreateArmWarpInfoSet.h"
#include "TresAttack2_e_ex354_ArmWarpShot.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack2_e_ex354_ArmWarpShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEX354_CreateArmWarpInfoSet m_ArmWarpInfoSet;
    
public:
    UTresAttack2_e_ex354_ArmWarpShot();
};
