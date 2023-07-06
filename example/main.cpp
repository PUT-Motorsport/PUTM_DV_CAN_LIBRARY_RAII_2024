#include <iostream>
#include <array>
#include "../include/can_rx.hpp"
#include "../include/can_tx.hpp"

using namespace PUTM_CAN;


int main()
{

    /* TRANSMIT DATA */
    CanTx can_tx("slcan0");
    can_tx.transmit_rtr<Apps_main>();
    Apps_main apps;
    can_tx.transmit(apps);


    /* RECEIVE DATA */
    // CanRx can_rx("slcan0", NO_TIMEOUT);
    // can_frame frame = can_rx.receive();
    // switch(frame.can_id)
    // {
    //     case can_id<Apps_main>:
    //         Apps_main apps = convert(can_frame);
    //         ros_apps.pedal_position = apps.pedal_position;
    //         publish(ros_apps); 
    //     case 0x61:
    //     case 0x65:
    // }

    
}