
set(SOURCE_FILES
    defaultCalibration.cpp
    HardwareConfig.h
)

CHEALI_HARDWARE(BalancePortAnalyzer-200W)
CHEALI_CPU(atmega32)
CHEALI_GENERIC_CHARGER(200W)

CHEALI_GENERATE_AVR_EXEC()
