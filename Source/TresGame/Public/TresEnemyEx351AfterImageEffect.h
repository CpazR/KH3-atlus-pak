#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx351AfterImageEffect.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresEnemyEx351AfterImageEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* WarpEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* VisibleEffectData;
    
    TRESGAME_API FTresEnemyEx351AfterImageEffect();
};
