#include <iostream>
#include <array>
#include "../include/can_rx.hpp"
#include "../include/can_tx.hpp"

using namespace PUTM_CAN;

int main()
{

    /* TRANSMIT DATA */
    CanTx can_tx("can0");
    can_tx.transmit_rtr<Apps_main>();
    Apps_main apps;
    can_tx.transmit(apps);

    /* RECEIVE DATA */

    CanRx can_rx("can0", NO_TIMEOUT);
    while (1)
    {
        can_frame frame = can_rx.receive();
        switch (frame.can_id)
        {
        case can_id<Apps_main>:
        {
            auto apps_frame = convert<Apps_main>(frame);
            std::cout << apps_frame.pedal_position << std::endl;
            break;
        }
        default:
            std::cout << "id: " << frame.can_id << " not handled" << std::endl;
            break;
        }
    }
}
