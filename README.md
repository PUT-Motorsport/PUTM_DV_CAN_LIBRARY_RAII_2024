
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

### Receive data
The intuition behind receiving data is different. You have to create **one object for each device** you want to receive data from. You can set the timeout value for the receive() function. Remote frames are supported as well. 
```cpp
CanRx<BMS_HV_main> bms_hv_main("slcan0", NO_TIMEOUT);
CanRx<Apps_main> apps_main("slcan0", 3);

auto bms_hv_main_data = bms_hv_main.receive();
auto apps_main_data = apps_main.receive_rtr();
```

### Extras (grupa Adam only)
It is possible to receive whatever occurs on the CAN bus without specifying the device. API is exactly the same as in the "Receive data" example. Remote frames are not supported.

```cpp
CanRx<can_frame> random_device("slcan0", NO_TIMEOUT);
can_frame random_device_data = random_device.receive();
```
