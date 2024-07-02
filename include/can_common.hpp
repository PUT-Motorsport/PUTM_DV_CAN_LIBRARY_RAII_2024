#pragma once

#include <cstdint>

#include "can_headers/PM09-CANBUS-AMK.hpp"
#include "can_headers/PM09-CANBUS-DASHBOARD.hpp"
#include "can_headers/PM09-CANBUS-FRONTBOX.hpp"
#include "can_headers/PM09-CANBUS-PC.hpp"

namespace PUTM_CAN {
constexpr int INVALID_FILE_DESCRIPTOR = -1;
constexpr uint16_t INVALID_CAN_ID = 0xFFFFU;
template <typename T>
constexpr uint16_t can_id = INVALID_CAN_ID;
}  // namespace PUTM_CAN

namespace PUTM_CAN {
template <>
constexpr uint16_t can_id<FrontboxDriverInput> = 0x5;
template <>
constexpr uint16_t can_id<PcMainData> = 0x10;
template <>
constexpr uint16_t can_id<PcMainData2> = 0x11;
template <>
constexpr uint16_t can_id<FrontboxData> = 0x65;
template <>
constexpr uint16_t can_id<Dashboard> = 0x15;

template <>
constexpr uint16_t can_id<AmkFrontLeftActualValues1> = 0x282 + 1;
template <>
constexpr uint16_t can_id<AmkFrontLeftActualValues2> = 0x284 + 1;
template <>
constexpr uint16_t can_id<AmkFrontLeftSetpoints1> = 0x183 + 1;

template <>
constexpr uint16_t can_id<AmkFrontRightActualValues1> = 0x282 + 2;
template <>
constexpr uint16_t can_id<AmkFrontRightActualValues2> = 0x284 + 2;
template <>
constexpr uint16_t can_id<AmkFrontRightSetpoints1> = 0x183 + 2;

template <>
constexpr uint16_t can_id<AmkRearLeftActualValues1> = 0x282 + 5;
template <>
constexpr uint16_t can_id<AmkRearLeftActualValues2> = 0x284 + 5;
template <>
constexpr uint16_t can_id<AmkRearLeftSetpoints1> = 0x183 + 5;

template <>
constexpr uint16_t can_id<AmkRearRightActualValues1> = 0x282 + 6;
template <>
constexpr uint16_t can_id<AmkRearRightActualValues2> = 0x284 + 6;
template <>
constexpr uint16_t can_id<AmkRearRightSetpoints1> = 0x183 + 6;
}  // namespace PUTM_CAN
