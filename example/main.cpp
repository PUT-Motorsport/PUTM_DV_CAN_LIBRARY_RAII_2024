#include <iostream>
#include <array>
#include "../include/can_rx.hpp"
#include "../include/can_tx.hpp"

using namespace PUTM_CAN;

int main()
{

    /* RECEIVE DATA */
    CanRx<BMS_HV_main> bms_hv_main("slcan0", NO_TIMEOUT);
    auto bms_hv_main_data = bms_hv_main.receive();
    std::cout << bms_hv_main_data.voltage_sum << std::endl;

    /* TRANSMIT DATA */

    Apps_main apps_main;

    apps_main.pedal_position = 1;
    apps_main.counter = 2;
    apps_main.position_diff = 3;
    apps_main.device_state = Apps_states::Normal_operation;

    CanTx tx("slcan0");
    tx.transmit(apps_main);
}