#include<LPC17xx.h>

unsigned int i=0,j,flag=0;
int main()
{
	SystemInit();
	SystemCoreClockUpdate();
	
	LPC_PINCON->PINSEL0&=0xFF0000FF;
	LPC_GPIO0->FIODIR|=0X00000FF0;
	LPC_PINCON->PINSEL4&=0XFCFFFFFF;
	LPC_GPIO2->FIODIR|=0X0<<12;
	while(1)
		{
			
			LPC_GPIO0->FIOPIN=i<<4;
			for(j=0;j<10;j++);
			if(!(LPC_GPIO2->FIOPIN & 1<<12)) //AND of key o/p and 1 at 12th pos
			i--;
			else 
			i++;
			if(i==255)
				i=0;
			if(i==0)
				i=255;
			
		}
}

//if FIOSET was used then first i had to use LPC_GPIO0->FIOPIN=0 then  LPC_GPIO0->FIOSET=(i<<4)
			   

		
		