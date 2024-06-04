#pragma once

#include <cstdint>

namespace PUTM_CAN {

struct __attribute__((packed)) DashboardMain {
  bool rtd_button : 1;
  bool ts_activate_button : 1;
  bool rfu_button : 1;
};

constexpr uint16_t DASHBOARD_MAIN_CAN_ID = 0x15;
}  // namespace PUTM_CAN
