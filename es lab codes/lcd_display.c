#include <LPC17xx.h>
#include <stdio.h>

int flag, temp2, i, temp1;

void port_write()
{
    LPC_GPIO0->FIOPIN = temp2 << 23;
    if (flag == 0)
        LPC_GPIO0->FIOCLR = 1 << 27;
    else
        LPC_GPIO0->FIOSET = 1 << 27;

    LPC_GPIO0->FIOSET = 1 << 28;
    for (i = 0; i < 50; i++)
        ;
    LPC_GPIO0->FIOCLR = 1 << 28;

    for (i = 0; i < 10000; i++)
        ;
}

void lcd_write()
{
    temp2 = (temp1 >> 4) & 0xF;
    port_write();
    // if(!(flag==0 && (temp1==0x20||temp1==0x30))){
    temp2 = temp1 & 0xF;
    port_write();
}

int main()
{
    int j;
    char message[] = "Lcddisplay";
    int command[] = {3, 3, 3, 2, 0x28, 0x01, 0x06, 0x0C, 0X80};
    SystemInit();
    SystemCoreClockUpdate();

    LPC_PINCON->PINSEL1 = 0;
    LPC_GPIO0->FIODIR = 0X3F << 23;
    flag = 0;
    for (j = 0; j < 9; j++)
    {
        temp1 = command[j];
        lcd_write();
    }
    flag = 1;
    for (j = 0; message[j] != '\0'; j++)
    {
        temp1 = message[j];
        lcd_write();
    }
    while (1)
        ;
}