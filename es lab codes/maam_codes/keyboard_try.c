#include<LPC17xx.h>
unsigned char seven_seg[4][4]={{0x3f, 0X06, 0X5B, 0X4F},{0X66, 0X6D, 0X7D, 0X07}, {0X7F, 0X6F, 0x77,0x7c},{0x58,0x5e,0x79,0x71}};
//	char seven_seg[][]={ 0x3f, 0X06, 0X5B, 0X4F; 0X66, 0X6D, 0X7D, 0X07, 0X7F, 0X6F};
unsigned int row, col, flag,x,j;

int main()
{
		SystemInit();
	  SystemCoreClockUpdate();

		LPC_PINCON->PINSEL4=0; //P2.10 TO P2.13 OUTPUT LINES FOR KB ROWS
	  LPC_PINCON->PINSEL0=0; //PO.4 TO P0.11 IN GPIO MODE for 7 segment
	  LPC_PINCON->PINSEL3=0; //P1.23 TO P1.26 INPUT LINES FOR COLUMN
	  LPC_GPIO0->FIODIR = 0Xff<<4| 0xF<<15; //0xffffffff
	  LPC_GPIO2->FIODIR = 0XF<<10;
	  LPC_GPIO1->FIODIR =0;

		LPC_GPIO0->FIOPIN =0; //CHOOSING FIRST SEGMENT
	  while(1)
		{
				for (row=0;row<4;row++)
				{		flag=0;
						LPC_GPIO2->FIOPIN = 1<<(10+row);
                        //sending high on ith row
                        for(j=0;j<100;j++);

					  x= ((LPC_GPIO1->FIOPIN>>23) & 0xf); //CHECK IF ANY COLUMN LINE IS HIGH

						if(x)
						{
                               //some key is pressed
							  if (x == 1)  //finding col no.
									col = 0;
								else if (x ==2)
								   col=1;
								else if (x ==4)
								   col =2;
								else if (x ==8)
								   col =3;

						LPC_GPIO0->FIOMASK = 0XFFFFF00F;
						LPC_GPIO0->FIOPIN = seven_seg[row][col]<<4;

					 }
							// break;
					//	 for(j=0;j<10000;j++);
					 }
			}

		}

