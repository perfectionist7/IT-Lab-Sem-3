#include<LPC17xx.h>

unsigned int i=1,j,flag=0;
int main()
{
	//SystemInit();
	//SystemCoreClockUpdate();
	
	LPC_PINCON->PINSEL0&=0xFF0000FF;
	LPC_GPIO0->FIODIR|=0X00000FF0;
	LPC_PINCON->PINSEL4&=0XFCFFFFFF;
	LPC_GPIO2->FIODIR|=0X0<<12;
	while(1)
		{
			LPC_GPIO0->FIOPIN=0;
			LPC_GPIO0->FIOSET=(i<<4);
			//for(j=0;j<10;j++);
			if(!(LPC_GPIO2->FIOPIN & 1<<12)) //AND of key o/p and 1 at 12th pos
		   i =i>>1;
			else 
			  i=i<<1;
			if(i==256)
				i=1;
			if(i==0)
		  i=128;
		}
}

			


		
		