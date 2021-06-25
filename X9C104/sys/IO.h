#ifndef __IO_H
#define __IO_H 		
#include "MY_ST_config.h"
#include "math.h"
#include "stdbool.h"



//PC13
#define KEY_IN  {RCC->IOPENR|=1<<2;GPIOC->MODER&=~(3<<26);GPIOC->MODER|=0<<26;} 
#define KEY_State ((GPIOC->IDR & 1<<13) == 1<<13)



//LED_CTRL4	 	PA5
#define LED_4_OUT {RCC->IOPENR|=1<<0;GPIOA->MODER&=~(3<<10);GPIOA->MODER|=1<<10;} 
#define LED_4_SET GPIOA->ODR|=1<<5
#define LED_4_RESET  GPIOA->ODR&=~(1<<5)
#define LED_4_TOG GPIOA->ODR^=1<<5

#if USING_X9C/***************************以下是X9C104SIZT1电子电位器**************************/
/***************************以下是X9C104SIZT1电子电位器**************************/
//INC	  PB11
#define INC_OUT {RCC->IOPENR|=1<<1;GPIOB->MODER&=~(3<<22);GPIOB->MODER|=1<<22;GPIOB->PUPDR|=1<<22;} 
#define INC_IN  {RCC->IOPENR|=1<<1;GPIOB->MODER&=~(3<<22);GPIOB->MODER|=0<<22;} 
#define INC_SET GPIOB->ODR|=1<<11
#define INC_RESET  GPIOB->ODR&=~(1<<11)
#define INC_State ((GPIOB->IDR & 1<<11) == 1<<11)

//UD	  PB12
#define UD_OUT {RCC->IOPENR|=1<<1;GPIOB->MODER&=~(3<<24);GPIOB->MODER|=1<<24;GPIOB->PUPDR|=1<<24;}  
#define UD_IN  {RCC->IOPENR|=1<<1;GPIOB->MODER&=~(3<<24);GPIOB->MODER|=0<<24;} 
#define UD_SET GPIOB->ODR|=1<<12
#define UD_RESET  GPIOB->ODR&=~(1<<12)
#define UD_State ((GPIOB->IDR & 1<<12) == 1<<12)

extern uint8_t F_TASK_X9C;
extern uint8_t resistance_value;
void TASK_X9C(void);
#endif

void IO_Init(void);
#endif

