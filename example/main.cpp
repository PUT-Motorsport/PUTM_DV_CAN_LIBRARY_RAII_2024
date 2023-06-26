#include <iostream>
#include <array>
#include "../include/can_rx.hpp"

using namespace PUTM_CAN;

int main()
{
    /* CONNECT TO THE CAN INTERFACE */

    CanRx<Apps_main> rx_apps_main("slcan0", 5);
    auto apps_main = rx_apps_main.receive();
    std::cout<< (int)apps_main.position_diff << std::endl;


    // CanTx can("slcan0");
    // can.transmit(apps_main_lv);

    // CanRx<can_frame> any_device("slcan0", 5); // connect right now, disconnect on destruction
    // auto device = any_device.receive();

    // CanRx<Apps_main_lv> apps_main_lv("slcan0", 3);
    // auto apps_main = apps_main_lv.receive();

    
    /* RECEIVE DATA */

    /* TRANSMIT DATA */
}