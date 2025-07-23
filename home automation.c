#include "c8051f340.h" //Header file
#define SYSCLK 12000000
#define BR_UART0 9600

sbit Light=P2^0;
sbit TV=P2^1;
sbit Ac=P2^2;
sbit Fan=P2^3;
sbit Lamp=P2^4;

 char str;		//setting a veriable
 char Charin=0;

void delay(int time)	// Delay
{
 unsigned int i,j;
 for(i=0;i<time;i++)
 for(j=0;j<1275;j++);
}

void main()
{
	SCON0=0x50;
	TMOD=0x20;	//Selecting Timer 1 in mode 2
	TH1= -(SYSCLK/BR_UART0/2/4);	//Setting baud rate as 9600
	TR1=1;		//Starting timer
	XBR0 = 0x01;//for TX and RX P0.4and P0.5
	XBR1 = 0x40;// defining Xbar
	delay(50);

	while(1)
	{
while(RI0==0);//If RI=0 then stay there when RI=1 then move on
		Charin=SBUF0;//we are moving Received data to SBUF
		str=Charin;//To see which character we received again are moving our data to SBUF
		while(TI0==0);//Now transferring  data from Microcontroller to pins
		TI0=0;
		if(str=='A')
		{
			Light=1;	//Light turns on
			delay(50);
		}
		else if(str=='1')
		{
			Light=0;	//Light turns off
			delay(50);
		}

		else if(str=='B')
		{
			TV=1;	//TV turns on
        	delay(50);
		}

		else if(str=='2')
		{
			TV=0;	//TV turns off
        	delay(50);
		}

		else if(str=='C')
		{
			Ac=1;	//AC turns on
			delay(50);
		}

		else if(str=='3')
		{
			Ac=0;	//AC turns off
        	delay(50);
		}
		else if(str=='D')
		{
			Fan=1;	//Fan turns on
			delay(50);
		}

		else if(str=='4')
		{
			Fan=0;	//Fan turns off
			delay(50);
		}

		else if(str=='E')
		{
			Lamp=1;	//Lamp turns on
			delay(50);
		}

		else if(str=='5')
		{
			Lamp=0;	//Lamp turns off
			delay(50);
		}
		str=0;
  }
}
