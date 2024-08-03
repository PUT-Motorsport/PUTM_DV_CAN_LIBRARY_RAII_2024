#pragma once

#include <cstdint>

namespace PUTM_CAN {

struct __attribute__((packed)) PcMainData {
  uint32_t time;
};

}  // namespace PUTM_CAN
