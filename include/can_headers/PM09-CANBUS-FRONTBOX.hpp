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

  int16_t front_left_suspension;
  int16_t front_right_suspension;
  uint8_t apps_implausibility;

  bool sense_left_kill : 1;
  bool sense_right_kill : 1;
  bool sense_driver_kill : 1;
  bool sense_inertia : 1;
  bool sense_bspd : 1;
  bool sense_overtravel : 1;
  bool sense_right_wheel : 1;
  bool is_braking : 1;
  bool apps : 1;

  // bool s1 : 1;
  // bool s2 : 1;
  // bool s3 : 1;
  // // bool s4 : 1;
  // bool s5 : 1;
  // bool s6 : 1;
  // bool s7 : 1;
  uint8_t s8 ;
};

}  // namespace PUTM_CAN
