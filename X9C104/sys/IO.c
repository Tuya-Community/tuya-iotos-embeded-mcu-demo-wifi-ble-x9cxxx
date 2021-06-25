#include "IO.h"
#include "delay.h"
#include "TIM.h"
#include "math.h"
#include "stdlib.h"

uint8_t resistance_value=100;
#if USING_X9C
uint8_t F_TASK_X9C=0;
void x9c104s_reset(void)
{
	uint8_t i;
	INC_OUT;
	UD_OUT;
	UD_RESET;
	delay_us(5);
	
	for(i=0;i<100;i++)//¸ÃÐ¾Æ¬Îª100³éÍ·
	{
		INC_RESET;
		delay_us(2);
		INC_SET;
		delay_us(2);
	}
	
	UD_SET;
	delay_us(5);
	
}
void x9c104s_set(uint8_t num)
{
	uint8_t i;
	
	x9c104s_reset();
	
	INC_OUT;
	UD_OUT;
	UD_SET;
	delay_us(5);
	
	for(i=0;i<num;i++)
	{
		INC_RESET;
		delay_us(2);
		INC_SET;
		delay_us(2);
	}
	
	UD_SET;
	delay_us(5);
	
}
void TASK_X9C(void)
{
	x9c104s_set(resistance_value);
}
#endif

void Modules_Init(void)
{
	x9c104s_reset();
}
void SwitchIO_Init(void)
{
	LED_4_OUT;	
	KEY_IN;
}
void IO_Init(void)
{
	Modules_Init();
	SwitchIO_Init();
}
