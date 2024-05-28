//Generated on Wed Jun 15 10:27:21 2022
#ifndef APPS
#define APPS

#include <cstdint>

namespace PUTM_CAN
{

enum struct Frontbox_states : uint8_t {
  Normal_operation,
  Power_up,
  Sensor_Implausiblity,
  Left_sensor_out_of_range_lower_bound,
  Left_sensor_out_of_range_upper_bound,
  Right_sensor_out_of_range_lower_bound,
  Right_sensor_out_of_range_upper_bound,
};

struct __attribute__((packed)) DriverInput {
  uint16_t pedalPosition;   // pedal position form 0 – 1000 where 0 means pedal not pressed
  uint16_t brakePressureFront;
  uint16_t brakePressureRear;
  uint16_t steeringWheelPosition;
};

struct __attribute__((packed)) FrontData {
  uint8_t sc_state;
  uint16_t frontLeftSuspension;
  uint16_t frontRightSuspension;
  uint8_t frontLeftHubTemperature;
  uint8_t frontRightHubTemperature;
};

const uint16_t DRIVER_INPUT_CAN_ID = 0x5;
const uint8_t DRIVER_INPUT_CAN_DLC = sizeof(DriverInput);
const uint8_t DRIVER_INPUT_FREQUENCY = 100;

const uint8_t FRONT_DATA_CAN_ID = 0x65;
const uint8_t FRONT_DATA_CAN_DLC = sizeof(FrontData);
const uint8_t FRONT_DATA_FREQUENCY = 10;

}  // namespace PUTM_CAN
#endif
