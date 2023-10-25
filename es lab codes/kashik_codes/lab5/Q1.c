#include<LPC17xx.h>

unsigned int i,j;
int main()
{
	SystemInit();
	SystemCoreClockUpdate();
	
	LPC_PINCON->PINSEL0&=0xFF0000FF;
	LPC_GPIO0->FIODIR|=0X00000FF0;
	
	while(1)
	{
		for(i=0;i<=255;i++)
		{
			LPC_GPIO0->FIOPIN=i<<4;
			for(j=0;j<10;j++);
		}
		
	}
}

		
		