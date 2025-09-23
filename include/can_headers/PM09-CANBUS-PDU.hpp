#pragma once

#include <cstdint>

namespace PUTM_CAN {

struct __attribute__((packed)) PduData {   

 uint32_t pc_current : 8;
 uint32_t pump_current : 8; 
 uint32_t fan_current : 8;
 uint32_t inverter_current : 8;
 uint32_t fbox_current : 8;
 uint32_t sdc_current : 8;
 uint32_t total_current : 16;
 
};


struct __attribute__((packed)) PduChannel {
 uint32_t pc_status : 2;
 uint32_t fan_status : 2; 
 uint32_t pump_status : 2;
 uint32_t inverter_status : 2;
 uint32_t fbox_status : 2;
 uint32_t sdc_status : 2;
 uint32_t dash_status : 2;
 uint32_t tsal_hv_status : 2;
 uint32_t rbox_diagport_brake_l_status : 2;
 uint32_t brake_ir_air_status : 2;
};






}  // namespace PUTM_CAN
