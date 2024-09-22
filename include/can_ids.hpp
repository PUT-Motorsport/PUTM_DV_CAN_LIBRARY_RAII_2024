#pragma once
#include <cstdint>

/* Primary Can Bus */
const uint16_t DRIVER_INPUT_CAN_ID = 0x5;
const uint16_t PC_MAIN_CAN_ID = 0x10;
const uint16_t DASHBOARD_CAN_ID = 0x15;

const uint16_t REARBOX_SAFETY_CAN_ID = 0x25;
const uint16_t REARBOX_TEMPERATURE_CAN_ID = 0x26;
const uint16_t REARBOX_MISCELLANEOUS_CAN_ID = 0x27;

const uint16_t XSENS_STATUS_WORD = 0x30;
const uint16_t XSENS_ORIENTATION = 0x31;
const uint16_t XSENS_EULER = 0x32;
const uint16_t XSENS_INERTAIL_DATA = 0x33;
const uint16_t XSENS_RATE_OF_TURN_HR = 0x34;
const uint16_t XSENS_ACCELERATION_HR = 0x35;
const uint16_t XSENS_POSITION = 0x36;
const uint16_t XSENS_VELOCITY = 0x37;

const uint16_t FRONT_DATA_CAN_ID = 0x40;
const uint16_t BMS_HV_MAIN_CAN_ID = 0x45;
const uint16_t BMS_LV_MAIN_CAN_ID = 0x55;
const uint16_t BMS_LV_TEMPERATURE_CAN_ID = 0x56;

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