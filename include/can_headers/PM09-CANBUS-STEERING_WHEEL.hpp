#pragma once

#include <cstdint>


// Data
// int16 steering_wheel_position
// uint16 measurement2
// uint16 measurement3
// uint16 measurement4


namespace PUTM_CAN {

struct __attribute__((packed)) SteeringWheel {
  int16_t steering_wheel_position;
  uint16_t measurement2;
  uint16_t measurement3;
  uint16_t measurement4;
};

}  // namespace PUTM_CAN
