#pragma once
#include "CoreMinimal.h"
#include "SQEX_BonamikShapeMatchingDesc.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_BonamikShapeMatchingDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_TotalParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_RegionSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Stiffness;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_ParticleIds[50];
    
    BONAMIKRT_API FSQEX_BonamikShapeMatchingDesc();
};
