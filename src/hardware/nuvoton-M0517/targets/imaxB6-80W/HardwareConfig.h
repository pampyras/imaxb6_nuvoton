/*
    cheali-charger - open source firmware for a variety of LiPo chargers
    Copyright (C) 2013  Paweł Stawicki. All right reserved.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef HARDWARE_CONFIG_H_
#define HARDWARE_CONFIG_H_

#include "GlobalConfig.h"
#include "HardwareConfigGeneric.h"
#include "imaxB6-pins.h"

//based on: https://groups.google.com/d/msg/cheali-charger/lvbvQhnVJz0/nZaxdo9eoW8J
#undef ENABLE_SIMPLIFIED_VB0_VB2_CIRCUIT

#define MAX_CHARGE_V            ANALOG_VOLT(27.000)
#define MAX_CHARGE_I            ANALOG_AMP(6.000)
#define MAX_CHARGE_P            ANALOG_WATT(80.000)

#define MAX_DISCHARGE_P         ANALOG_WATT(10.000)
#define MAX_DISCHARGE_I         ANALOG_AMP(2.000)


//1-13? correlation
#define SMPS_UPPERBOUND_VALUE               (60000)
//TODO: ?? pwm_n in outputPWM.cpp
#define DISCHARGER_UPPERBOUND_VALUE         32760

#endif /* HARDWARE_CONFIG_H_ */
