#include<LPC17xx.h>
void delay()
{
LPC_TIM0->TCR= 0X02; //To reset TC and PC
LPC_TIM0->MCR=0X02; //to stop TC and PC when match occurs
LPC_TIM0->CTCR=0X0; //timer mode
LPC_TIM0->EMR=0X20; //set EM0 to 1 on match
LPC_TIM0->PR=2999;
LPC_TIM0->MR0=2999;
LPC_TIM0->TCR=0X01;//enable TC and PC
 //wait until match
}

int main()
{
	SystemInit();
	SystemCoreClockUpdate();
	LPC_PINCON->PINSEL0=0;
	LPC_GPIO0->FIODIR =1<<4;
		delay();
	while(1)
	{
		LPC_GPIO0->FIOSET=1<<4;
		
		while((LPC_TIM0->EMR &0X01) ==0);
		LPC_TIM0->EMR=0X20;
		//delay();
		LPC_GPIO0->FIOCLR =1<<4;
		while((LPC_TIM0->EMR &0X01) ==0);//delay();
	LPC_TIM0->EMR=0X20;
}
}
