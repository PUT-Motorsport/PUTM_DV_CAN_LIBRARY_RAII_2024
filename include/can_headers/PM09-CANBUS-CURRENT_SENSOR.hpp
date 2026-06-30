#pragma once

#include <cstdint>
//msg struct:
// uint16 fl_inv_current
// uint16 fr_inv_current
// uint16 rl_inv_current
// uint16 rr_inv_current



namespace PUTM_CAN {

struct __attribute__((packed)) CurrentSensor {
  uint16_t fl_inv_current;
  uint16_t fr_inv_current;
  uint16_t rl_inv_current;
  uint16_t rr_inv_current;
};

}  // namespace PUTM_CAN
