#pragma once

#include <cstdint>

namespace PUTM_CAN {

// --------- data tpes form datasheet ---------
struct __attribute__((packed)) AmkStatus {
  unsigned int AMK_bReserve1 : 8;

  unsigned int AMK_bSystemReady : 1;
  unsigned int AMK_bError : 1;
  unsigned int AMK_bWarn : 1;
  unsigned int AMK_bQuitDcOn : 1;
  unsigned int AMK_bDcOn : 1;
  unsigned int AMK_bQuitInverterOn : 1;
  unsigned int AMK_bInverterOn : 1;
  unsigned int AMK_bDerating : 1;
};

struct __attribute__((packed)) AmkControl {
  unsigned int AMK_bReserve1 : 8;

  unsigned int AMK_bInverterOn : 1;
  unsigned int AMK_bDcOn : 1;
  unsigned int AMK_bEnable : 1;
  unsigned int AMK_bErrorReset : 1;

  unsigned int AMK_bReserve2 : 4;
};
// --------------------------------------------

// ---------- inverter -> can device ----------
struct __attribute__((packed)) AmkFrontLeftActualValues1 {
  AmkStatus AMK_Status;
  int16_t AMK_ActualVelocity;
  int16_t AMK_TorqueCurrent;
  int16_t AMK_MagnetizingCurrent;
};

struct __attribute__((packed)) AmkFrontLeftActualValues2 {
  int16_t AMK_TempMotor;
  int16_t AMK_TempInverter;
  uint16_t AMK_ErrorInfo;
  int16_t AMK_TempIGBT;
};

struct __attribute__((packed)) AmkFrontRightActualValues1 {
  AmkStatus AMK_Status;
  int16_t AMK_ActualVelocity;
  int16_t AMK_TorqueCurrent;
  int16_t AMK_MagnetizingCurrent;
};

struct __attribute__((packed)) AmkFrontRightActualValues2 {
  int16_t AMK_TempMotor;
  int16_t AMK_TempInverter;
  uint16_t AMK_ErrorInfo;
  int16_t AMK_TempIGBT;
};

struct __attribute__((packed)) AmkRearLeftActualValues1 {
  AmkStatus AMK_Status;
  int16_t AMK_ActualVelocity;
  int16_t AMK_TorqueCurrent;
  int16_t AMK_MagnetizingCurrent;
};

struct __attribute__((packed)) AmkRearLeftActualValues2 {
  int16_t AMK_TempMotor;
  int16_t AMK_TempInverter;
  uint16_t AMK_ErrorInfo;
  int16_t AMK_TempIGBT;
};

struct __attribute__((packed)) AmkRearRightActualValues1 {
  AmkStatus AMK_Status;
  int16_t AMK_ActualVelocity;
  int16_t AMK_TorqueCurrent;
  int16_t AMK_MagnetizingCurrent;
};

struct __attribute__((packed)) AmkRearRightActualValues2 {
  int16_t AMK_TempMotor;
  int16_t AMK_TempInverter;
  uint16_t AMK_ErrorInfo;
  int16_t AMK_TempIGBT;
};
// --------------------------------------------

// ---------- can device -> inverter ----------
struct __attribute__((packed)) AmkFrontLeftSetpoints1 {
  AmkControl AMK_Control;
  int16_t AMK_TargetVelocity;
  int16_t AMK_TorqueLimitPositiv;
  int16_t AMK_TorqueLimitNegativ;
};

struct __attribute__((packed)) AmkFrontRightSetpoints1 {
  AmkControl AMK_Control;
  int16_t AMK_TargetVelocity;
  int16_t AMK_TorqueLimitPositiv;
  int16_t AMK_TorqueLimitNegativ;
};

struct __attribute__((packed)) AmkRearLeftSetpoints1 {
  AmkControl AMK_Control;
  int16_t AMK_TargetVelocity;
  int16_t AMK_TorqueLimitPositiv;
  int16_t AMK_TorqueLimitNegativ;
};

struct __attribute__((packed)) AmkRearRightSetpoints1 {
  AmkControl AMK_Control;
  int16_t AMK_TargetVelocity;
  int16_t AMK_TorqueLimitPositiv;
  int16_t AMK_TorqueLimitNegativ;
};
// --------------------------------------------

}  // namespace PUTM_CAN
