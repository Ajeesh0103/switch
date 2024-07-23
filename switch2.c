//SWITCH
#include<LPC214X.h>

int main()
{
	IODIR1&=(~(1<<16));
		IODIR0|=(1<<3);
		IODIR1&=(~(1<<17));
		IODIR0|=(1<<2);
	while(1)
	{
		
		if((1<<16)&IOPIN1)
		{
			
			IOSET0|=(1<<3);
		}
		else
		{
			IOCLR0|=(1<<3);
			
		}
		if((1<<17)&IOPIN1)
		{
			IOSET0|=(1<<2);
		}
		else
		{
			
			IOCLR0|=(1<<2);
		}
	}
} 