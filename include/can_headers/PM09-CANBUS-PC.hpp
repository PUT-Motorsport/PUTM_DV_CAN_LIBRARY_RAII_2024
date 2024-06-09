#pragma once

#include <cstdint>

namespace PUTM_CAN {

struct __attribute__((packed)) PcMainData {
    uint8_t vehicleSpeed;
    /* Inverter temperatures */
    uint8_t frontLeftInverterTemperature : 6;
    uint8_t frontRightInverterTemperature : 6;
    uint8_t rearLeftIverterTemperature : 6;
    uint8_t rearRightIverterTemperature : 6;
    /* Motor temperatures */
    uint8_t frontLeftMotorTemperature : 6;
    uint8_t frontRightMotorTemperature : 6;
    uint8_t rearLeftMotorTemperature : 6;
    uint8_t rearRightMotorTemperature : 6;

    bool rtd : 1;
    bool inverters_ready: 1;
};


}  // namespace PUTM_CAN