#include "stm32f4xx.h"


void delay(volatile int delayms){
volatile int i;
for(; delayms>0;delayms--){
for(i=0;i<3192;i++);
	}
}


int main(void)
{
	RCC->AHB1ENR = 1 ;

	GPIOA->MODER  |= 0x400;



while(1)
{

	GPIOA->ODR ^= 0x20;
	delay(1000);
}

}
