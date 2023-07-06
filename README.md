
# PUTM LINUX CAN LIBRARY
This library allows one to communicate with devices connected to the CAN bus easily.

## How to use
Constructors as well as functions **throw** on failure. Therefore errors have to be handled or unhandled exceptions will cause a termination of your program.

### Transmit data
Transmitting data is relatively straightforward. Connect to the CAN interface, populate the desired structure with data, and transmit.  
```cpp
Apps_main apps_main;
apps_main.pedal_position = 1;
apps_main.counter = 2;
apps_main.position_diff = 3;
apps_main.device_state = Apps_states::Normal_operation;

CanTx can_tx("slcan0");
can_tx.transmit(apps_main);
```
### Transmit a remote frame request
To transmit a remote request you have to connect to the CAN interface and provide a name of the structure you want to receive. The library will then automatically create a remote frame request and send it. The same objects can be used to transmit data and remote frame requests.
```cpp
CanTx can_tx("slcan0");
can_tx.transmit_rtr<Apps_main>();
```

### Receive data
The intuition behind receiving data is different. You receive everything that occurs on the CAN bus and then handle the frame you want. A helper function has been provided to make conversions easier. Conversions throw if the provided structure doesn't match the received frame.
```cpp
CanRx can_rx("slcan0", NO_TIMEOUT);
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
    std::cout << "id: "<< frame.can_id << " not handled" << std::endl;
    break;
}
```