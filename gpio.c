#include "main.h"	
#include "gpio.h"
void GPIO_Configuration(void)
{
  GPIO_InitTypeDef GPIO_InitStructure;
  //Enable clock AFIO
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO, ENABLE);	
	// port B
	//Enable clock GPIOB
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
//_________________________________OUTPUT__________________________________________
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0|GPIO_Pin_1;	//khai bao pin PB0 và PB1       		
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;			// output
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		// speed led
 GPIO_Init(GPIOB,&GPIO_InitStructure);
 }
