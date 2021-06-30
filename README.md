# Tuya IoTOS Embedded Mcu Demo Wifi Ble X9Cxxx

[English](./README.md) | [中文](./README_zh.md)

## Introduction  

This Demo uses the Tuya smart cloud platform, Tuya smart APP, X9C104 and IoTOS Embedded MCU SDK to realize a Digitally Controlled Potentiometer .

The implemented features include:

+ Resistance  set


## Quick start  

### Compile & Burn
+ Download Tuya IoTOS Embeded Code
+ Execute the test.uvprojx file
+ Click Compile in the software and complete the download


### File introduction 

```
├── user
│   ├── main.c
│   ├── MY_ST_config.h
├── CMSIS
│   ├── system_stm32g0xx.c
│   ├── startup_stm32g071xx.s
├── SYSTEM
│   ├── sys.c
│   ├── sys.h
│   ├── RCC.c
│   ├── RCC.h
│   ├── delay.c
│   ├── delay.h
│   ├── USART.c
│   ├── USART.h
│   ├── IO.c
│   ├── IO.h
│   ├── TIM.c
│   ├── TIM.h
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

Entry file：main.c

Important functions：main()

+ Initialize and configure MCU IO port, USART, timer, etc. All events are polled and judged in while(1)。



### I/O List  

|  X9C104  | UASRT1  | SWITCH |
| :------: | :-----: | :----: |
| PB11 INC | PC4 TXD |  PC13  |
| PB12 U/D | PC5 RXD |        |



## Related Documents

  Tuya Demo Center: https://developer.tuya.com/demo



## Technical Support

  You can get support for Tuya by using the following methods:

- Developer Center: https://developer.tuya.com
- Help Center: https://support.tuya.com/help
- Technical Support Work Order Center: [https://service.console.tuya.com](https://service.console.tuya.com/) 

