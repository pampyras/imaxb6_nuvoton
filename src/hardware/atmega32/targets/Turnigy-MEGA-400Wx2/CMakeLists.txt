
set(SOURCE_FILES
    defaultCalibration.cpp
    HardwareConfig.h
)

CHEALI_HARDWARE(Turnigy-MEGA-400Wx2)
CHEALI_CPU(atmega32)
CHEALI_GENERIC_CHARGER(200W)

CHEALI_GENERATE_AVR_EXEC()
