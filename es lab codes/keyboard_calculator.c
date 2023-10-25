#include <LPC17xx.h>
unsigned char col, row, var, flag, key, *ptr;
int i, j, flag1, temp2, temp1, x, l = 0, sum;
int ans1, ans2;
unsigned char message[4][4] = {{'1', '2', '3', '4'}, {'*', '=', '!', '0'}, {'9', '+', '-', '/'}, {'5', '6', '7', '8'}};
char ans[10];
void port_write()
{
    // LPC_GPIO0->FIOPIN = flag1 << 27;
    LPC_GPIO0->FIOPIN = temp2 << 23;
    if (flag1 == 0)
        LPC_GPIO0->FIOCLR = 1 << 27; // RS command
    else
        LPC_GPIO0->FIOSET = 1 << 27; // RS data
    // sending command/data

    LPC_GPIO0->FIOSET = 1 << 28;
    for (i = 0; i < 50; i++)
        ;
    LPC_GPIO0->FIOCLR = 1 << 28;
    for (i = 0; i < 500; i++)
        ;
}

void lcd_write()
{
    temp2 = temp1 & 0xF0;
    temp2 = temp2 >> 4;
    port_write();
    temp2 = (temp1 & 0x0F);
    port_write();
}

int main(void)
{
    int command[] = {3, 3, 3, 2, 0x28, 0x01, 0x06, 0x0C, 0x80};
    SystemInit();
    SystemCoreClockUpdate();

    LPC_PINCON->PINSEL3 = 0xF << 23 | 0xF << 10;
    LPC_GPIO2->FIODIR |= 0x00003C00;
    LPC_GPIO1->FIODIR &= 0xF87FFFFF;

    LPC_PINCON->PINSEL1 = 0;
    LPC_GPIO0->FIODIR = 0x3F << 23;

    flag1 = 0;
    for (j = 0; j < 9; j++)
    {
        temp1 = command[j];
        lcd_write();
    }

    flag1 = 1;
    j = 0;

    while (1)
    {
        for (row = 0; row < 4; row++)
        {
            LPC_GPIO2->FIOPIN = 1 << (10 + row);
            x = (LPC_GPIO1->FIOPIN >> 23) & 0xF;
            if (x)
            {
                if (x == 1)
                    col = 0;
                else if (x == 2)
                    col = 1;
                else if (x == 4)
                    col = 2;
                else if (x == 8)
                    col = 3;
                temp1 = message[row][col];
                ans[l] = message[row][col];
                l++;
                lcd_write();
                for (i = 0; i < 1500000; i++)
                    ;
                if (temp1 == '=')
                {
                    sum = (ans[0] - '0') + (ans[2] - '0');
                    temp1 = sum;
                    lcd_write();
                }
            }
        }
    }
}