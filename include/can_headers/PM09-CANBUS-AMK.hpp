#pragma once

#include <cstdint>

namespace PUTM_CAN {

// ---------- inverter -> can device ----------

struct __attribute__((packed)) AmkStatus {
  unsigned int reserve : 8;

  bool system_ready : 1;
  bool error : 1;
  bool warn : 1;
  bool quit_dc_on : 1;
  bool dc_on : 1;
  bool quit_inverter_on : 1;
  bool inverter_on : 1;
  bool derating : 1;
};

struct __attribute__((packed)) AmkFrontLeftActualValues1 {
  AmkStatus amk_status;
  int16_t actual_velocity;
  int16_t torque_current;
  int16_t magnetizing_current;
};

struct __attribute__((packed)) AmkFrontLeftActualValues2 {
  int16_t temp_motor;
  int16_t temp_inverter;
  uint16_t error_info;
  int16_t temp_igbt;
};

struct __attribute__((packed)) AmkFrontRightActualValues1 {
  AmkStatus amk_status;
  int16_t actual_velocity;
  int16_t torque_current;
  int16_t magnetizing_current;
};

struct __attribute__((packed)) AmkFrontRightActualValues2 {
  int16_t temp_motor;
  int16_t temp_inverter;
  uint16_t error_info;
  int16_t temp_igbt;
};

struct __attribute__((packed)) AmkRearLeftActualValues1 {
  AmkStatus amk_status;
  int16_t actual_velocity;
  int16_t torque_current;
  int16_t magnetizing_current;
};

struct __attribute__((packed)) AmkRearLeftActualValues2 {
  int16_t temp_motor;
  int16_t temp_inverter;
  uint16_t error_info;
  int16_t temp_igbt;
};

struct __attribute__((packed)) AmkRearRightActualValues1 {
  AmkStatus amk_status;
  int16_t actual_velocity;
  int16_t torque_current;
  int16_t magnetizing_current;
};

struct __attribute__((packed)) AmkRearRightActualValues2 {
  int16_t temp_motor;
  int16_t temp_inverter;
  uint16_t error_info;
  int16_t temp_igbt;
};
// --------------------------------------------

// ---------- can device -> inverter ----------

struct __attribute__((packed)) AmkControl {
  unsigned int reserve1 : 8;

  bool inverter_on : 1;
  bool dc_on : 1;
  bool enable : 1;
  bool error_reset : 1;

  unsigned int reserve2 : 4;
};

struct __attribute__((packed)) AmkFrontLeftSetpoints {
  AmkControl amk_control;
  int16_t target_torque;
  int16_t torque_positive_limit;
  int16_t torque_negative_limit;
};

struct __attribute__((packed)) AmkFrontRightSetpoints {
  AmkControl amk_control;
  int16_t target_torque;
  int16_t torque_positive_limit;
  int16_t torque_negative_limit;
};

struct __attribute__((packed)) AmkRearLeftSetpoints {
  AmkControl amk_control;
  int16_t target_torque;
  int16_t torque_positive_limit;
  int16_t torque_negative_limit;
};

struct __attribute__((packed)) AmkRearRightSetpoints {
  AmkControl amk_control;
  int16_t target_torque;
  int16_t torque_positive_limit;
  int16_t torque_negative_limit;
};
// --------------------------------------------

}  // namespace PUTM_CAN
