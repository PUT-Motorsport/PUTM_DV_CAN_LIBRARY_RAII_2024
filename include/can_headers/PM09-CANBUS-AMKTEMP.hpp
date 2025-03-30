#pragma once

#include <cstdint>

namespace PUTM_CAN {

struct __attribute__((packed)) AmkTempData {  

    int8_t motor_temp_fl;
    int8_t motor_temp_fr;
    int8_t motor_temp_rl;
    int8_t motor_temp_rr;

    int8_t inverter_temp_fl;
    int8_t inverter_temp_fr;
    int8_t inverter_temp_rl;
    int8_t inverter_temp_rr;
  
};


}  // namespace PUTM_CAN
