#pragma once

#include <cstdint>

namespace PUTM_CAN {

struct __attribute__((packed)) LapTimer {   
    uint16_t current_lap;
    uint16_t best_lap;
    int16_t delta;
    uint8_t lap_counter;
};


}  // namespace PUTM_CAN
