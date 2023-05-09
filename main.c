#include "main.h"

void toggleLED(GPIO_TypeDef* GPIO, uint16_t GPIO_Pin)
{
			
			GPIO_ResetBits(GPIO,GPIO_Pin);	//Set muc 0 cho LED
			Delay_ms(100);
			GPIO_SetBits(GPIO,GPIO_Pin);		//Set muc 1 cho LED
			Delay_ms(100);
}
int main()
{
	// Khoi tao delay
	DelayInit();	
	// Cau hinh PORT GPIO
	GPIO_Configuration();	
		while(1)
		{
			toggleLED(GPIOB,GPIO_Pin_0);
			toggleLED(GPIOB,GPIO_Pin_1);
		}
	}
	

