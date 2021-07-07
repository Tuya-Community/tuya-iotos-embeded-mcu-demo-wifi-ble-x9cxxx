# Tuya IoTOS Embedded Wi-Fi & Bluetooth LE Potentiometer

[English](./README.md) | [中文](./README_zh.md)

## Overview

In this demo, we will show you how to develop with the MCU SDK to enable an X9C104 digital potentiometer to connect to the Tuya IoT Cloud with the Tuya Smart app.

Features:

+ Set resistance





## Get started

### Compile and flash
+ Download [Tuya IoTOS Embedded MCU SDK](https://registry.code.tuya-inc.top/hardware_developer/tuya-iotos-embeded-mcu-demo-4g-vending-machine/tree/master).

+ Run `test.uvprojx`.

+ Click **Compile** on the software to download the code.


### File introduction

```
├── user
│   ├── main.c
│   ├── MY_ST_config.h
├── CMSIS
│   ├── system_stm32g0xx.c
│   ├── startup_stm32g071xx.s
├── SYSTEM
│   ├── sys.c
│   ├── sys.h
│   ├── RCC.c
│   ├── RCC.h
│   ├── delay.c
│   ├── delay.h
│   ├── USART.c
│   ├── USART.h
│   ├── IO.c
│   ├── IO.h
│   ├── TIM.c
│   ├── TIM.h
└── SYSTEM
    ├── mcu_api.c
    ├── mcu_api.h
    ├── protocol.c
    ├── protocol.h
    ├── system.c
    ├── system.h
    └── wifi.h

```



### Demo entry

Entry file: `main.c`

Main function: `main()`

+ Initialize and configure I/Os, USART, and timer of the MCU. All events are polled and determined in `while(1)`.



### Pin configuration

| X9C104 | UASRT1 | SWITCH |
| :------: | :-----: | :----: |
| PB11 INC | PC4 TXD | PC13 |
| PB12 U/D | PC5 RXD |        |

## Reference

[Tuya Project Hub](https://developer.tuya.com/demo)



## Technical Support

You can get support from Tuya with the following methods:

- [Tuya IoT Developer Platform](https://developer.tuya.com/en/)
- [Help Center](https://support.tuya.com/en/help)
- [Service & Support](https://service.console.tuya.com)[](https://service.console.tuya.com/)
