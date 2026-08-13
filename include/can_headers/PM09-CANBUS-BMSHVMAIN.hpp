#pragma once

namespace PUTM_CAN {

struct __attribute__((packed)) BmsHvMain {
  uint16_t voltage_sum;
  int16_t  current;
  uint8_t  temp_max;
  uint8_t  temp_avg;
  
  uint16_t soc : 10;
  uint16_t ok : 1;
  uint16_t precharge : 1;
  uint16_t ts_on : 1;
  uint16_t unused : 3;
};

}  // namespace PUTM_CAN
