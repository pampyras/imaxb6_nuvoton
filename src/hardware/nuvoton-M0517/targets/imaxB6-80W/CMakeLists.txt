
set(hardware imaxB6-80W)

set(SOURCE_FILES
    defaultCalibration.cpp
    HardwareConfig.h
)

CHEALI_CPU(nuvoton-M0517)
CHEALI_GENERIC_CHARGER(50W)

CHEALI_GENERATE_ARM_EXEC()
