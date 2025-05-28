#pragma once

namespace PUTM_CAN {

struct __attribute__((packed)) BmsLvMain {
  uint16_t voltage_sum;
  uint8_t soc;
  uint8_t temp_avg;
  uint8_t current;
  //uint8_t device_state;
};

}  // namespace PUTM_CAN
