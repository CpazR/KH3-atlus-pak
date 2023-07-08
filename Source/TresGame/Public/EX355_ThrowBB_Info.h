#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EX355_ThrowInfoSet.h"
#include "EX355_ThrowBB_Info.generated.h"

USTRUCT(BlueprintType)
struct FEX355_ThrowBB_Info {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_rShotRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vShotLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEX355_ThrowInfoSet m_ThrowInfoSet;
    
    TRESGAME_API FEX355_ThrowBB_Info();
};
