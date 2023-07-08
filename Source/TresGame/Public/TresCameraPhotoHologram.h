#pragma once
#include "CoreMinimal.h"
#include "TresCameraNormal.h"
#include "TresCameraPhotoHologram.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class ATresCameraPhotoHologram : public ATresCameraNormal {
    GENERATED_BODY()
public:
    ATresCameraPhotoHologram(const FObjectInitializer& ObjectInitializer);
};
