#include <lpc17xx.h>
#define RS_CTRL  0x08000000  //P0.27, 1<<27
#define EN_CTRL  0x10000000  //P0.28, 1<<28
#define DT_CTRL  0x07800000  //P0.23 to P0.26 data lines, F<<23

 unsigned long int temp1=0, temp2=0,i,j,r;
 unsigned char flag1 =0, flag2 =0;
 unsigned char msg[] = {"MIT manipal123    next line"};

void lcd_write(void);
void port_write(void);
void delay_lcd(unsigned int);
unsigned long int init_command[] = {0x30,0x30,0x30,0x20,0x28,0x01 ,0x06,0x0c,0x80};
 int main(void)
 {
	SystemInit();
	SystemCoreClockUpdate();
	 LPC_PINCON->PINSEL1=0;
                  LPC_GPIO0->FIODIR = DT_CTRL | RS_CTRL | EN_CTRL; //0xf<<23 | 1<<27 | 1<<28;
                   flag1 =0;
	 for (i=0; i<9;i++)
                    {
	    temp1 = init_command[i];
    	    lcd_write();
                    }
                   flag1 =1; //DATA MODE
	i =0;
	while (msg[i] != '\0')
                     {
                      temp1 = msg[i];
                      lcd_write();
                      i++;
                      if(i==16)
                      {
                          flag1=0;
                          temp1=0xc0;
                          lcd_write();
                          flag1=1;
                      }
                      }

	while(1);
 }

  void lcd_write(void)
                 { 
                  temp2 = temp1 & 0xf0;// 4 - Bits to get it to least significant digit place
	temp2 = temp2>>4;
	port_write();
                 if (!((flag1==0)&&((temp1==0x20)||(temp1==0x30)))) //send least significant 4 bits only when it is data/command other than 0x30/0x20
                  {
	   temp2 = temp1 & 0x0f; 
	   temp2 = temp2 ;
	   port_write();
                   }
                 }


 void port_write(void)

 {
	
	LPC_GPIO0->FIOPIN = temp2<<23; // sending the ascii code
          if (flag1 == 0)
                  LPC_GPIO0->FIOCLR = RS_CTRL; // if command
          else
                  	LPC_GPIO0->FIOSET = RS_CTRL; //if data

	LPC_GPIO0->FIOSET = EN_CTRL; //sending a low high edge on enable input
	for(r=0;r<25;r++);
	LPC_GPIO0->FIOCLR = EN_CTRL;
    for(r=0;r<30000;r++);
  }


