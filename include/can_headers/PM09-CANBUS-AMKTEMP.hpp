#pragma once

#include <cstdint>

namespace PUTM_CAN {

struct __attribute__((packed)) AmkTempData {  

    uint8_t inverter_temp_rr;
    uint8_t inverter_temp_rl;

    uint8_t motor_temp_rr;
    uint8_t motor_temp_rl;

    uint8_t inverter_temp_fr;
    uint8_t inverter_temp_fl;
    
    uint8_t motor_temp_fr;
    uint8_t motor_temp_fl;

};


}  // namespace PUTM_CAN
