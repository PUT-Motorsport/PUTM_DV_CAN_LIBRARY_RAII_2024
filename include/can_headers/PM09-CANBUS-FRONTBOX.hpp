#pragma once

#include <cstdint>

namespace PUTM_CAN {

enum struct Frontbox_states : uint8_t {
  Normal_operation,
  Power_up,
  Sensor_Implausiblity,
  Left_sensor_out_of_range_lower_bound,
  Left_sensor_out_of_range_upper_bound,
  Right_sensor_out_of_range_lower_bound,
  Right_sensor_out_of_range_upper_bound,
};

struct __attribute__((packed)) FrontboxDriverInput {
  uint16_t pedal_position;  // pedal position form 0 – 1000 where 0 means pedal not pressed
  uint16_t brake_pressureFront;
  uint16_t brake_pressure_rear;
  uint16_t steering_wheel_position;
};

struct __attribute__((packed)) FrontboxData {
  uint8_t sc_state;
  uint16_t front_left_suspension;
  uint16_t front_right_suspension;
  uint8_t front_left_hub_temperature;
  uint8_t front_right_hub_temperature;
};

const uint16_t FRONTBOX_DRIVER_INPUT_CAN_ID = 0x5;
const uint8_t FRONTBOX_DRIVER_INPUT_CAN_DLC = sizeof(FrontboxDriverInput);
const uint8_t FRONTBOX_DRIVER_INPUT_FREQUENCY = 100;

const uint8_t FRONTBOX_DATA_CAN_ID = 0x65;
const uint8_t FRONTBOX_DATA_CAN_DLC = sizeof(FrontboxData);
const uint8_t FRONTBOX_DATA_FREQUENCY = 10;

}  // namespace PUTM_CAN
