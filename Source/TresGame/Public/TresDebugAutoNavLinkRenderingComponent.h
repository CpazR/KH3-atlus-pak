#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "TresDebugAutoNavLinkRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresDebugAutoNavLinkRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UTresDebugAutoNavLinkRenderingComponent();
};
