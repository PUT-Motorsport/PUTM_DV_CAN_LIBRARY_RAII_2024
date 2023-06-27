#include <iostream>
#include <array>
#include "../include/can_rx.hpp"

using namespace PUTM_CAN;

int main()
{
    /* CONNECT TO THE CAN INTERFACE */

    CanRx<Apps_main> rx_apps_main("slcan0", NO_TIMEOUT);
    CanRx<BMS_LV_main> rx_bms_lv_main("slcan0", NO_TIMEOUT);
    CanRx<BMS_HV_main> rx_bms_hv_main("slcan0", NO_TIMEOUT);

    while (1)
    {
        rx_apps_main.receive();
        rx_bms_lv_main.receive();
        rx_bms_hv_main.receive();
    }

    // CanTx can("slcan0");
    // can.transmit(apps_main_lv);

    // CanRx<can_frame> any_device("slcan0", 5); // connect right now, disconnect on destruction
    // auto device = any_device.receive();

    // CanRx<Apps_main_lv> apps_main_lv("slcan0", 3);
    // auto apps_main = apps_main_lv.receive();

    /* RECEIVE DATA */

    /* TRANSMIT DATA */
}