#pragma once

#include <cstdint>

namespace PUTM_CAN {

struct __attribute__((packed)) PcMainData {   
    

    bool inverter_on_fr:1;
    bool inverter_on_fl:1;
    bool inverter_on_rr:1;
    bool inverter_on_rl:1;
    
    bool inverter_error_fr:1;
    bool inverter_error_fl:1;  
    bool inverter_error_rr:1;
    bool inverter_error_rl:1; 

    int16_t torque_current;
    int16_t vechicle_speed;
    bool inverter_ready;
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
