#pragma once

#include "can_headers/PM09-CANBUS-AMK-FRONT-LEFT.hpp"
#include "can_headers/PM09-CANBUS-AMK-FRONT-RIGHT.hpp"
#include "can_headers/PM09-CANBUS-AMK-REAR-LEFT.hpp"
#include "can_headers/PM09-CANBUS-AMK-REAR-RIGHT.hpp"
#include "can_headers/PM09-CANBUS-FRONTBOX.hpp"

namespace PUTM_CAN {
constexpr int INVALID_FILE_DESCRIPTOR = -1;
constexpr uint16_t INVALID_CAN_ID = 0xFFFFU;

template <typename T>
constexpr uint16_t can_id = INVALID_CAN_ID;

template <>
constexpr uint16_t can_id<FrontboxDriverInput> = FRONTBOX_DRIVER_INPUT_CAN_ID;

template <>
constexpr uint16_t can_id<FrontboxData> = FRONTBOX_DATA_CAN_ID;

template <>
constexpr uint16_t can_id<AmkFrontLeftActualValues1> = FRONT_LEFT_AMK_ACTUAL_VALUES_1_CAN_ID;
template <>
constexpr uint16_t can_id<AmkFrontLeftActualValues2> = FRONT_LEFT_AMK_ACTUAL_VALUES_2_CAN_ID;
template <>
constexpr uint16_t can_id<AmkFrontLeftSetpoints1> = FRONT_LEFT_AMK_SETPOINTS_1_CAN_ID;

template <>
constexpr uint16_t can_id<AmkFrontRightActualValues1> = FRONT_RIGHT_AMK_ACTUAL_VALUES_1_CAN_ID;
template <>
constexpr uint16_t can_id<AmkFrontRightActualValues2> = FRONT_RIGHT_AMK_ACTUAL_VALUES_2_CAN_ID;
template <>
constexpr uint16_t can_id<AmkFrontRightSetpoints1> = FRONT_RIGHT_AMK_SETPOINTS_1_CAN_ID;

template <>
constexpr uint16_t can_id<AmkRearLeftActualValues1> = REAR_LEFT_AMK_ACTUAL_VALUES_1_CAN_ID;
template <>
constexpr uint16_t can_id<AmkRearLeftActualValues2> = REAR_LEFT_AMK_ACTUAL_VALUES_2_CAN_ID;
template <>
constexpr uint16_t can_id<AmkRearLeftSetpoints1> = REAR_LEFT_AMK_SETPOINTS_1_CAN_ID;

template <>
constexpr uint16_t can_id<AmkRearRightActualValues1> = REAR_RIGHT_AMK_ACTUAL_VALUES_1_CAN_ID;
template <>
constexpr uint16_t can_id<AmkRearRightActualValues2> = REAR_RIGHT_AMK_ACTUAL_VALUES_2_CAN_ID;
template <>
constexpr uint16_t can_id<AmkRearRightSetpoints1> = REAR_RIGHT_AMK_SETPOINTS_1_CAN_ID;
}  // namespace PUTM_CAN
