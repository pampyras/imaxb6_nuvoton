
set(SOURCE_FILES
    defaultCalibration.cpp
    HardwareConfig.h
)

CHEALI_HARDWARE(Turnigy-MAX80W-7A)
CHEALI_CPU(atmega32)
CHEALI_GENERIC_CHARGER(50W)

CHEALI_GENERATE_AVR_EXEC()
