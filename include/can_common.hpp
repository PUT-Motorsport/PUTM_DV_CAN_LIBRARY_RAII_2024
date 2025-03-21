#pragma once

#include <cstdint>

#include "can_headers/PM09-CANBUS-AMK.hpp"
#include "can_headers/PM09-CANBUS-DASHBOARD.hpp"
#include "can_headers/PM09-CANBUS-FRONTBOX.hpp"
#include "can_headers/PM09-CANBUS-PC.hpp"
#include "can_headers/PM09-CANBUS-XSENS.hpp"
#include "can_ids.hpp"
#include "can_headers/PM09-CANBUS-BMSHVMAIN.hpp"
#include "can_headers/PM09-CANBUS-BMSLVMAIN.hpp"
#include "can_headers/PM09-CANBUS-LAPTIMER.hpp"


namespace PUTM_CAN {
constexpr int INVALID_FILE_DESCRIPTOR = -1;
constexpr uint16_t INVALID_CAN_ID = 0xFFFFU;
template <typename T>
constexpr uint16_t can_id = INVALID_CAN_ID;
}  // namespace PUTM_CAN

namespace PUTM_CAN {
template <>
constexpr uint16_t can_id<FrontboxDriverInput> = DRIVER_INPUT_CAN_ID;
template <>
constexpr uint16_t can_id<PcMainData> = PC_MAIN_CAN_ID;
template <>
constexpr uint16_t can_id<Dashboard> = DASHBOARD_CAN_ID;
template <>
constexpr uint16_t can_id<BmsHvMain> = BMS_HV_MAIN_CAN_ID;
template <>
constexpr uint16_t can_id<BmsLvMain> = BMS_LV_MAIN_CAN_ID;
template <>
constexpr uint16_t can_id<LapTimer> = LAP_TIMER_CAN_ID;

template <>
constexpr uint16_t can_id<XsensAcceleration> = XSENS_ACCELERATION;
template <>
constexpr uint16_t can_id<XsensAccelerationHighRate> = XSENS_ACCELERATION_HR;
template <>
constexpr uint16_t can_id<XsensAltitudeEllipsoid> = XSENS_ALLTITUDE_ELLIPSOID;
template <>
constexpr uint16_t can_id<XsensDeltaQ> = XSENS_DELTA_Q;
template <>
constexpr uint16_t can_id<XsensError> = XSENS_ERROR;
template <>
constexpr uint16_t can_id<XsensEuler> = XSENS_EULER;
template <>
constexpr uint16_t can_id<XsensFreeAcceleration> = XSENS_FREE_ACCELERATION;
template <>
constexpr uint16_t can_id<XsensInertialData> = XSENS_INERTIAL_DATA;
template <>
constexpr uint16_t can_id<XsensMagneticField> = XSENS_MAGNETIC_FIELD;
template <>
constexpr uint16_t can_id<XsensOrientation> = XSENS_ORIENTATION;
template <>
constexpr uint16_t can_id<XsensPosition> = XSENS_POSITION;
template <>
constexpr uint16_t can_id<XsensRateOfTurn> = XSENS_RATE_OF_TURN;
template <>
constexpr uint16_t can_id<XsensRateOfTurnHighRate> = XSENS_RATE_OF_TURN_HR;
template <>
constexpr uint16_t can_id<XsensStatus> = XSENS_STATUS;
template <>
constexpr uint16_t can_id<XsensTemperatureAndPressure> = XSENS_TEMPERATURE_AND_PRESSURE;
template <>
constexpr uint16_t can_id<XsensUtc> = XSENS_UTC;
template <>
constexpr uint16_t can_id<XsensVelocity> = XSENS_VELOCITY;






template <>
constexpr uint16_t can_id<FrontboxData> = FRONT_DATA_CAN_ID;



template <>
constexpr uint16_t can_id<AmkFrontLeftActualValues1> = FRONT_LEFT_AMK_ACTUAL_VALUES_1_CAN_ID;
template <>
constexpr uint16_t can_id<AmkFrontLeftActualValues2> = FRONT_LEFT_AMK_ACTUAL_VALUES_2_CAN_ID;
template <>
constexpr uint16_t can_id<AmkFrontLeftSetpoints> = FRONT_LEFT_AMK_SETPOINTS_1_CAN_ID;

template <>
constexpr uint16_t can_id<AmkFrontRightActualValues1> = FRONT_RIGHT_AMK_ACTUAL_VALUES_1_CAN_ID;
template <>
constexpr uint16_t can_id<AmkFrontRightActualValues2> = FRONT_RIGHT_AMK_ACTUAL_VALUES_2_CAN_ID;
template <>
constexpr uint16_t can_id<AmkFrontRightSetpoints> = FRONT_RIGHT_AMK_SETPOINTS_1_CAN_ID;

template <>
constexpr uint16_t can_id<AmkRearLeftActualValues1> = REAR_LEFT_AMK_ACTUAL_VALUES_1_CAN_ID;
template <>
constexpr uint16_t can_id<AmkRearLeftActualValues2> = REAR_LEFT_AMK_ACTUAL_VALUES_2_CAN_ID;
template <>
constexpr uint16_t can_id<AmkRearLeftSetpoints> = REAR_LEFT_AMK_SETPOINTS_1_CAN_ID;

template <>
constexpr uint16_t can_id<AmkRearRightActualValues1> = REAR_RIGHT_AMK_ACTUAL_VALUES_1_CAN_ID;
template <>
constexpr uint16_t can_id<AmkRearRightActualValues2> = REAR_RIGHT_AMK_ACTUAL_VALUES_2_CAN_ID;
template <>
constexpr uint16_t can_id<AmkRearRightSetpoints> = REAR_RIGHT_AMK_SETPOINTS_1_CAN_ID;
}  // namespace PUTM_CAN
