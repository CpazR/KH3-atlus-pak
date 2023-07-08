#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "TresGumiShipSplineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UTresGumiShipSplineComponent();
};
