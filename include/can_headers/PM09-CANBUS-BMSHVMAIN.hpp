#pragma once

namespace PUTM_CAN {

struct __attribute__((packed)) BmsHvMain {
  uint16_t voltage_sum;
  int16_t current;
  uint8_t temp_max;
  uint8_t temp_avg;
  uint16_t soc;
};

}  // namespace PUTM_CAN
