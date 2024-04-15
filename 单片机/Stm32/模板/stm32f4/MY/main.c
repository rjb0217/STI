/***
	***************************************************************************************************
	*	@file  	main.c
	*	@version V1.0
	*  @date    2023-3-13
	*	@author  反客科技	
	*	@brief   LED闪烁实验
   ****************************************************************************************************
   *  @description
	*
	*	实验平台：反客STM32F407VET6核心板 （型号：FK407M3-VET6）
	*	淘宝地址：https://shop212360197.taobao.com
	*	QQ交流群：536665479
	*
>>>>> 功能说明：
	*
	*	1.LED闪烁
	* 	
	***************************************************************************************************
***/


#include "stm32f4xx.h"
#include "led.h"   
#include "delay.h"


int main(void)
{
	Delay_Init();		//延时函数初始化
	LED_Init();			//LED初始化

	while (1)
	{		
		LED1_Toggle;
		Delay_ms(1000);	
	}	
}





