#pragma once

namespace PUTM_CAN {

struct __attribute__((packed)) Dashboard {
  bool rtd_button : 1;
  bool ts_activate_button : 1;
  bool rfu_button : 1;
};

}  // namespace PUTM_CAN
