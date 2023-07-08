#pragma once
#include "CoreMinimal.h"
#include "RemyCameraWorkTiming.generated.h"

UENUM(BlueprintType)
enum class RemyCameraWorkTiming : uint8 {
    RemyCameraFirstPlay,
    RemyCameraGetReward1stMilestone,
    RemyCameraGetReward2ndMilestone,
    RemyCameraMenu,
    FlambeCameraCountDown,
    FlambeCameraStart,
    FlambeCameraFlambe,
    FlambeCameraNothingFlambe,
    FlambeCameraSuccessFire,
    FlambeCameraGreatSuccessFire,
    FlambeCameraTooManyFire,
    FlambeCameraTooLittleFire,
    FlambeCameraTimeOutThrowPan,
    FlambeCameraSuccess,
    FlambeCameraGreatSuccess,
    FlambeCameraTimeOut,
    FlambeCameraTooMany,
    FlambeCameraTooLittle,
    FlambeCameraNothing,
    FlambeCameraRetry,
    FlambeCameraReturnToMenu,
    CuttingCameraCountDown,
    CuttingCameraStart,
    CuttingCameraSuccess,
    CuttingCameraGreatSuccess,
    CuttingCameraFail,
    CuttingCameraResultSuccess,
    CuttingCameraResultGreatSuccess,
    CuttingCameraResultFail,
    CuttingCameraRetry,
    CuttingCameraReturnToMenu,
    EggCrackingCameraCountDown,
    EggCrackingCameraStart,
    EggCrackingCameraGreatSuccessBowl,
    EggCrackingCameraFail,
    EggCrackingCameraSuccess,
    EggCrackingCameraGreatSuccess,
    EggCrackingCameraTooMany,
    EggCrackingCameraTimeOut,
    EggCrackingCameraResultSuccess,
    EggCrackingCameraResultGreatSuccess,
    EggCrackingCameraResultFail,
    EggCrackingCameraRetry,
    EggCrackingCameraReturnToMenu,
    SprinklePepperCameraCountDown,
    SprinklePepperCameraStart,
    SprinklePepperCameraSuccess,
    SprinklePepperCameraGreatSuccess,
    SprinklePepperCameraFail,
    SprinklePepperCameraResultSuccess,
    SprinklePepperCameraResultGreatSuccess,
    SprinklePepperCameraResultFail,
    SprinklePepperCameraRetry,
    SprinklePepperCameraReturnToMenu,
};
