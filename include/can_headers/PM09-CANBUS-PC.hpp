#pragma once

#include <cstdint>

namespace PUTM_CAN {

struct __attribute__((packed)) PcMainData {
    uint8_t rearRightInverterTemperature;
    uint8_t rearLeftInverterTemperature;
    uint8_t rearRightMotorTemperature;
    uint8_t rearLeftMotorTemperature;
    uint8_t vehicleSpeed : 6;
    uint8_t power : 6;
    uint16_t rpm : 15;
	bool invertersReady: 1;
    bool rtd : 1;
};

}  // namespace PUTM_CAN
