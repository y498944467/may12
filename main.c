#include"LPC11XX.H"
#define LED1_ON() (LPC_GPIO2->DATA &=~(1<<0))
#define LED1_OFF() (LPC_GPIO2->DATA |=(1<<0))
#define LED2_ON() (LPC_GPIO2->DATA &=~(1<<1))
#define LED2_OFF() (LPC_GPIO2->DATA |=(1<<1))
#define LED3_ON() (LPC_GPIO2->DATA &=~(1<<2))
#define LED3_OFF() (LPC_GPIO2->DATA |=(1<<2))
#define LED4_ON() (LPC_GPIO2->DATA &=~(1<<3))
#define LED4_OFF() (LPC_GPIO2->DATA |=(1<<3))
#define LED5_ON() (LPC_GPIO2->DATA &=~(1<<4))
#define LED5_OFF() (LPC_GPIO2->DATA |=(1<<4))
#define LED6_ON() (LPC_GPIO2->DATA &=~(1<<5))
#define LED6_OFF() (LPC_GPIO2->DATA |=(1<<5))
#define LED7_ON() (LPC_GPIO2->DATA &=~(1<<6))
#define LED7_OFF() (LPC_GPIO2->DATA |=(1<<6))
#define LED8_ON() (LPC_GPIO2->DATA &=~(1<<7))
#define LED8_OFF() (LPC_GPIO2->DATA |=(1<<7))
void Delay()
{
uint16_t i,j;
for(i=0;i<5000;i++)
for(j=0;j<200;j++);
}
void Ledinit(void)
{
LPC_SYSCON->SYSAHBCLKCTRL |=(1<<16);
LPC_IOCON->PIO2_0 &=~0X07;
LPC_IOCON->PIO2_0 |=0X00;
LPC_IOCON->PIO2_1 &=~0X07;
LPC_IOCON->PIO2_1 |=0X00;
LPC_IOCON->PIO2_2 &=~0X07;
LPC_IOCON->PIO2_2 |=0X00;
LPC_IOCON->PIO2_3 &=~0X07;
LPC_IOCON->PIO2_3 |=0X00;
LPC_IOCON->PIO2_4 &=~0X07;
LPC_IOCON->PIO2_4 |=0X00;
LPC_IOCON->PIO2_5 &=~0X07;
LPC_IOCON->PIO2_5 |=0X00;
LPC_IOCON->PIO2_6 &=~0X07;
LPC_IOCON->PIO2_6 |=0X00;
LPC_IOCON->PIO2_7 &=~0X07;
LPC_IOCON->PIO2_7 |=0X00;
LPC_SYSCON->SYSAHBCLKCTRL &=~(1<<16);
LPC_SYSCON->SYSAHBCLKCTRL |=(1<<6);
LPC_GPIO2->DIR |=(1<<0);
LPC_GPIO2->DATA |=(1<<0);
LPC_GPIO2->DIR |=(1<<1);
LPC_GPIO2->DATA |=(1<<1);
LPC_GPIO2->DIR |=(1<<2);
LPC_GPIO2->DATA |=(1<<2);
LPC_GPIO2->DIR |=(1<<3);
LPC_GPIO2->DATA |=(1<<3);
LPC_GPIO2->DIR |=(1<<4);
LPC_GPIO2->DATA |=(1<<4);
LPC_GPIO2->DIR |=(1<<5);
LPC_GPIO2->DATA |=(1<<5);
LPC_GPIO2->DIR |=(1<<6);
LPC_GPIO2->DATA |=(1<<6);
LPC_GPIO2->DIR |=(1<<7);
LPC_GPIO2->DATA |=(1<<7);
}
int main(void)
{
Ledinit();
while(1)
{
	Delay();
  LED1_ON();
	LED2_OFF();
	LED3_OFF();
	LED4_OFF();
	LED5_OFF();
	LED6_OFF();
	LED7_OFF();
	LED8_OFF();
	
	Delay();
	
	LED1_OFF();
	LED2_ON();
	LED3_OFF();
	LED4_OFF();
	LED5_OFF();
	LED6_OFF();
	LED7_OFF();
	LED8_OFF();
	Delay();
	LED1_OFF();
	LED2_OFF();
	LED3_ON();
	LED4_OFF();
	LED5_OFF();
	LED6_OFF();
	LED7_OFF();
	LED8_OFF();
	Delay();
	LED1_OFF();
	LED2_OFF();
	LED3_OFF();
	LED4_ON();
	LED5_OFF();
	LED6_OFF();
	LED7_OFF();
	LED8_OFF();
	Delay();
	LED1_OFF();
	LED2_OFF();
	LED3_OFF();
	LED4_OFF();
	LED5_ON();
	LED6_OFF();
	LED7_OFF();
	LED8_OFF();
	Delay();
	LED1_OFF();
	LED2_OFF();
	LED3_OFF();
	LED4_OFF();
	LED5_OFF();
	LED6_ON();
	LED7_OFF();
	LED8_OFF();
	Delay();
	LED1_OFF();
	LED2_OFF();
	LED3_OFF();
	LED4_OFF();
	LED5_OFF();
	LED6_OFF();
	LED7_ON();
	LED8_OFF();
	Delay();
	LED1_OFF();
	LED2_OFF();
	LED3_OFF();
	LED4_OFF();
	LED5_OFF();
	LED6_OFF();
	LED7_OFF();
	LED8_ON();
	Delay();
}
}
