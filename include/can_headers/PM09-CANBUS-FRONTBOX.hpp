#pragma once

#include <cstdint>

namespace PUTM_CAN {

struct __attribute__((packed)) FrontboxDriverInput {
  uint16_t pedal_position;  // pedal position form 0 – 1000 where 0 means pedal not pressed
  uint16_t brake_pressure_front;
  uint16_t brake_pressure_rear;
  uint16_t steering_wheel_position;
};

struct __attribute__((packed)) FrontboxData {
  bool sense_left_kill : 1;
  bool sense_right_kill : 1;
  bool sense_driver_kill : 1;
  bool sense_inertia : 1;
  bool sense_bspd : 1;
  bool sense_overtravel : 1;
  bool sense_right_wheel : 1;
  uint8_t sc_state;
  uint16_t front_left_suspension;
  uint16_t front_right_suspension;
  uint8_t front_left_hub_temperature;
  uint8_t front_right_hub_temperature;
};

}  // namespace PUTM_CAN
