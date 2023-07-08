#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_dw401_ChanceTime.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_dw401_ChanceTime : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_RecoveryTime;
    
    UTresAction1_e_dw401_ChanceTime();
};
