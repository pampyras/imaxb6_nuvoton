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
#ifndef MONITOR_H_
#define MONITOR_H_

#include "Strategy.h"

#define MONITOR_EXTERNAL_ERROR_NONE                         0
#define MONITOR_EXTERNAL_ERROR_BATTERY_DISCONNECTED         1

namespace Monitor {
    extern uint32_t etaDeltaSec;
    extern bool isBalancePortConnected;
    extern volatile uint8_t i_externalError;

    Strategy::statusType run();
    void doIdle();
    void powerOn();
    void powerOff();

    uint32_t getTimeSec();
    uint32_t getTotalBalanceTimeSec();
    uint32_t getTotalChargeDischargeTimeSec();
    uint16_t getTotalChargeDischargeTimeMin();
    uint32_t getETATime();

    uint8_t getChargeProcent();

    void resetAccumulatedMeasurements();


    void doSlowInterrupt();
};


#endif /* MONITOR_H_ */

