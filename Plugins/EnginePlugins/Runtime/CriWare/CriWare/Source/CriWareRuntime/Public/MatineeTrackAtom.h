#pragma once
#include "CoreMinimal.h"
#include "AtomTrackKeyframe.h"
#include "MatineeTrackAtomSoundBase.h"
#include "MatineeTrackAtom.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMatineeTrackAtom : public UMatineeTrackAtomSoundBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<FString> AisacList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<FString> SelectorList;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FAtomTrackKeyframe> KeyframeList;
    
    UMatineeTrackAtom();
};
