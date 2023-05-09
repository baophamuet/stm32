#include "delay.h"
// For store tick counts in us
static __IO uint32_t nTicks;
// SysTick_Handler function will be called every 1 us
void SysTick_Handler()
{
	if (nTicks != 0)
	{
		nTicks--;
	}
}

void DelayInit()
{
	// Update SystemCoreClock value
	SystemCoreClockUpdate();
	// Configure the SysTick timer to overflow every 1 us
	SysTick_Config(SystemCoreClock / 1000000);//cau hinh thoi gian ngat
}

void Delay_us(uint32_t n)
{
	// Reload us value
	nTicks = n;
	// Wait until usTick reach zero
	while (nTicks);
}

void Delay_ms(uint32_t n)
{
	// Wait until ms reach zero
	while (n--)
	{
		// Delay 1ms
		Delay_us(1000);
	}
}
