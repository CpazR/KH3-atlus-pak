#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_dw405_IllusionBlizzaga.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_dw405_IllusionBlizzaga : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BeforeMoveStartSpinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AfterMoveStartSpinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpinSpeedInterpTime;
    
public:
    ATresProjectile_e_dw405_IllusionBlizzaga(const FObjectInitializer& ObjectInitializer);
};
