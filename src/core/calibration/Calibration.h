/*
    cheali-charger - open source firmware for a variety of LiPo chargers
    Copyright (C) 2016  Paweł Stawicki. All right reserved.

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
#ifndef CALIBRATION_H_
#define CALIBRATION_H_

#include "AnalogInputs.h"

namespace Calibration {
    void voltageCalibration();
    void chargeCurrentCalibration();
    void dischargeCurrentCalibration();
    void externalTemperatureCalibration();
    void internalTemperatureCalibration();
    void expertVoltageCalibration();

    bool testVout(bool balancePort);

    void run();
    bool check();
};

#endif /* CALIBRATION_H_ */
