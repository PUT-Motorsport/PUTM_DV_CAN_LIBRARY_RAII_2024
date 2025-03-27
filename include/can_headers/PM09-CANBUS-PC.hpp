#pragma once

#include <cstdint>

namespace PUTM_CAN {

struct __attribute__((packed)) PcMainData {   
    
    int16_t torque_current;
    int16_t vechicle_speed;
    bool rtd :1;
    // bool rtd : 1;
    // uint8_t rearRightInverterTemperature;
    // uint8_t rearLeftInverterTemperature;
    // uint8_t rearRightMotorTemperature; // 24
    // uint8_t rearLeftMotorTemperature : 4 ;
    // // bool rtd : 1; // 29
    // uint8_t vehicleSpeed;
    // bool rtd : 1;
};


}  // namespace PUTM_CAN
