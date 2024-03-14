#pragma once

#include "can_headers/PM09-CANBUS-FRONTBOX.hpp"

namespace PUTM_CAN
{
    static constexpr int INVALID_FILE_DESCRIPTOR = -1;
    static constexpr uint16_t INVALID_CAN_ID = 0xFFFFU;

    template <typename T>
    constexpr uint16_t can_id = INVALID_CAN_ID;

    template <>
    constexpr uint16_t can_id<Frontbox_main> = FRONTBOX_MAIN_CAN_ID;

}
