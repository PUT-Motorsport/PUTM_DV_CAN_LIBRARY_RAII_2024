#pragma once
#include <cstdint>

namespace PUTM_CAN {

struct __attribute__((packed)) IVT_Msg_Result_I {
    uint8_t id;                     // IVT_ID_Result_I, 0 = Vt_Result_I

    uint8_t msg_count : 4;          // IVT_MsgCount_Result_I
    uint8_t ocs : 1;                // IVT_Result_I_OCS
    uint8_t channel_error : 1;      // IVT_Result_I_Channel_Error
    uint8_t measurement_error : 1;  // IVT_Result_I_Measurement_Error
    uint8_t system_error : 1;       // IVT_Result_I_System_Error

    uint8_t result_i_be[4];         // IVT_Result_I, RAW, big-endian!
};

// IVT_Result_I jest wysyłane big-endian. Trzeba ręcznie złożyć bajty
// i pomnożyć przez skalę -0.001 (jednostka: A). Nie rzutuj tego pola
// bezpośrednio na int32_t na little-endian MCU — dostaniesz śmieci.
inline float decode_ivt_result_i(const IVT_Msg_Result_I& msg) {
    int32_t raw =
        (static_cast<int32_t>(msg.result_i_be[0]) << 24) |
        (static_cast<int32_t>(msg.result_i_be[1]) << 16) |
        (static_cast<int32_t>(msg.result_i_be[2]) << 8)  |
         static_cast<int32_t>(msg.result_i_be[3]);
    return static_cast<float>(raw) * -0.001f; // amps
}

}  // namespace PUTM_CAN