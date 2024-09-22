#pragma once
#include <cstdint>

/* Primary Can Bus */
const uint16_t DRIVER_INPUT_CAN_ID = 0x5;
const uint16_t PC_MAIN_CAN_ID = 0x10;
const uint16_t DASHBOARD_CAN_ID = 0x15;

const uint16_t REARBOX_SAFETY_CAN_ID = 0x25;
const uint16_t REARBOX_TEMPERATURE_CAN_ID = 0x26;
const uint16_t REARBOX_MISCELLANEOUS_CAN_ID = 0x27;

const uint16_t FRONT_DATA_CAN_ID = 0x40;
const uint16_t BMS_HV_MAIN_CAN_ID = 0x45;
const uint16_t BMS_LV_MAIN_CAN_ID = 0x55;
const uint16_t BMS_LV_TEMPERATURE_CAN_ID = 0x56;

const uint16_t XSENS_ACCELERATION             = 0x70;
const uint16_t XSENS_ACCELERATION_HR          = 0x71;
const uint16_t XSENS_ALLTITUDE_ELLIPSOID      = 0x72;
const uint16_t XSENS_DELTA_Q                  = 0x73;
const uint16_t XSENS_ERROR                    = 0x74;
const uint16_t XSENS_EULER                    = 0x75;
const uint16_t XSENS_FREE_ACCELERATION        = 0x76;
const uint16_t XSENS_INERTIAL_DATA            = 0x77;
const uint16_t XSENS_MAGNETIC_FIELD           = 0x78;
const uint16_t XSENS_ORIENTATION              = 0x79;
const uint16_t XSENS_POSITION                 = 0x7A;
const uint16_t XSENS_RATE_OF_TURN             = 0x7B;
const uint16_t XSENS_RATE_OF_TURN_HR          = 0x7C;
const uint16_t XSENS_STATUS                   = 0x7D;
const uint16_t XSENS_TEMPERATURE_AND_PRESSURE = 0x7E;
const uint16_t XSENS_UTC                      = 0x7F;
const uint16_t XSENS_VELOCITY                 = 0x80;

/* Secondary Can Bus */

constexpr uint16_t FRONT_LEFT_AMK_ACTUAL_VALUES_1_CAN_ID = 0x282 + 6; // + n
constexpr uint16_t FRONT_LEFT_AMK_ACTUAL_VALUES_2_CAN_ID = 0x284 + 6; // + n
constexpr uint16_t FRONT_LEFT_AMK_SETPOINTS_1_CAN_ID = 0x183 + 6; // + n

constexpr uint16_t FRONT_RIGHT_AMK_ACTUAL_VALUES_1_CAN_ID = 0x282 + 1; // + n
constexpr uint16_t FRONT_RIGHT_AMK_ACTUAL_VALUES_2_CAN_ID = 0x284 + 1; // + n
constexpr uint16_t FRONT_RIGHT_AMK_SETPOINTS_1_CAN_ID = 0x183 + 1;     // + n

constexpr uint16_t REAR_LEFT_AMK_ACTUAL_VALUES_1_CAN_ID = 0x282 + 5; // + n
constexpr uint16_t REAR_LEFT_AMK_ACTUAL_VALUES_2_CAN_ID = 0x284 + 5; // + n
constexpr uint16_t REAR_LEFT_AMK_SETPOINTS_1_CAN_ID = 0x183 + 5; // + n

constexpr uint16_t REAR_RIGHT_AMK_ACTUAL_VALUES_1_CAN_ID = 0x282 + 2; // + n
constexpr uint16_t REAR_RIGHT_AMK_ACTUAL_VALUES_2_CAN_ID = 0x284 + 2; // + n
constexpr uint16_t REAR_RIGHT_AMK_SETPOINTS_1_CAN_ID = 0x183 + 2; // + n