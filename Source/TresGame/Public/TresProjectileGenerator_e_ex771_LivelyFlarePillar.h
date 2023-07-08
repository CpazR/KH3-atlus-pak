#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEnemy_e_ex771_LivelyFlarePillarParam.h"
#include "TresEnemy_e_ex771_LivelyFlarePillarPoint.h"
#include "TresProjectileGenerator_e_ex771_LivelyFlarePillar.generated.h"

UCLASS(Blueprintable)
class ATresProjectileGenerator_e_ex771_LivelyFlarePillar : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemy_e_ex771_LivelyFlarePillarParam> m_LivelyFlarePillarParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemy_e_ex771_LivelyFlarePillarPoint> m_LivelyFlarePillarPointArray;
    
    ATresProjectileGenerator_e_ex771_LivelyFlarePillar(const FObjectInitializer& ObjectInitializer);
};
