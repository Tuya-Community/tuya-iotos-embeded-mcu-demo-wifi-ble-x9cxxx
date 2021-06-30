# Tuya IoTOS Embedded Mcu Demo Wifi Ble X9Cxxx

[English](./README.md) | [中文](./README_zh.md)

## 简介 

本Demo通过涂鸦智能云平台、涂鸦智能APP、X9C104和IoTOS Embeded MCU SDK实现一款数字电位器。

已实现功能包括：

+ 设定阻值

  



## 快速上手 

### 编译与烧录
+ 下载 Tuya IoTOS Embeded Code

+ 执行test.uvprojx文件

+ 点击软件中的编译，并完成下载


### 文件介绍 

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



### Demo入口

入口文件：main.c

重要函数：main()

+ 对mcu的IO口，USART，定时器等进行初始化配置，所有事件在while(1)中轮询判断。



### I/O 列表 

|  X9C104  | UASRT1  | SWITCH |
| :------: | :-----: | :----: |
| PB11 INC | PC4 TXD |  PC13  |
| PB12 U/D | PC5 RXD |        |

## 相关文档

涂鸦Demo中心：https://developer.tuya.com/demo



## 技术支持

您可以通过以下方法获得涂鸦的支持:

- 开发者中心：https://developer.tuya.com
- 帮助中心: https://support.tuya.com/help
- 技术支持工单中心: [https://service.console.tuya.com](https://service.console.tuya.com/) 

