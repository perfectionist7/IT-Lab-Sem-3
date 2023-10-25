#include<LPC17xx.h>
unsigned int i,j;
int main(void){
	
	SystemInit();
	SystemCoreClockUpdate();
	
	LPC_PINCON->PINSEL0&=0xFF0000FF;
	LPC_GPIO0->FIODIR|=0X00000FF0;
	
	while(1)
	{
		for(i=0;i<8;i++)
		{
			LPC_GPIO0->FIOPIN|=1<<(4+i);
			for(j=0;j<10;j++);
		}
		for(i=0;i<8;i++)
		{
			LPC_GPIO0->FIOCLR|=1<<(4+i);
			for(j=0;j<10;j++);
		}
		
	}
}
