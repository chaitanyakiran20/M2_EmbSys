#include <util/delay.h>
void uart_init()
{
UCSRC=(1<<URSEL)|(1<<UCSZ1)|(1<<UCSZ0);	

UCSRB=(1<<RXEN)|(1<<TXEN);

UBRRL=0x33; 
}

void tx_data(unsigned char c)
{
UDR=c;
while(!(UCSRA & (1<<TXC))); 
UCSRA=(1<<TXC);
}

unsigned char rx_data()
{

while ( !(UCSRA & (1<<RXC)) ); 
return UDR;
}



void Tx_String(unsigned char *str)
{
	while(*str)
	{
		tx_data(*str);
		str++;
		_delay_ms(100);
	}
	
}