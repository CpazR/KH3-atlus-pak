#include "TresProj_LaserLineTrace.h"

void ATresProj_LaserLineTrace::_OnShutdownFromLaser() {
}

ATresProj_LaserLineTrace::ATresProj_LaserLineTrace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_fLifeTime = 0.00f;
    this->m_bIsLifeOverWhenArrivedLaserTerminate = true;
}
