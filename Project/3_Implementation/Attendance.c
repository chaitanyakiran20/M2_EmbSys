#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "USART.h"
#include "lcd.h"
#include "eeprom.h"

int main(void)
{
	unsigned char i,j,k,a[12],b[12]="13006F8C7282",c[12]="13006FF259D7";
	static int m,l;
	InitLCD(0);
	uart_init();
	_delay_ms(100);
	
    while(1)
    {
		
		LCDWriteStringXY(0,0,"RFID attendance");
		LCDWriteStringXY(0,1,"Swipe ur card ");
		j=0;k=0;
       for(i=0;i<12;i++) // reading RFID tag number
	   {
		   a[i]=rx_data();
		   if(b[i]==a[i])
		   j++;
		   if(c[i]==a[i])
		   k++;
	   }
	   if(j==12)		// check for authentication
	   {
		   l++;
		  LCDWriteStringXY(0,0,"PERSON1          ");
		  LCDWriteStringXY(0,1,"ATTENDANCE ")
		  LCDWriteIntXY(11,1,l,2);
		  _delay_ms(5000);
	   }		   			
	     else if(k==12)		// check for authentication
		 {		
		    
		   m++;
		   LCDWriteStringXY(0,0,"PERSON2          ");
		  LCDWriteStringXY(0,1,"ATTENDANCE ")
		  LCDWriteIntXY(11,1,m,2);
		  _delay_ms(5000);
		 }		  	 
	  	 else               // unauthorized person        
		 {
			 LCDWriteStringXY(0,0,"card not matched");
			 LCDWriteStringXY(0,1,"Unknown person ");
			 _delay_ms(5000);
		 }			    
    }
}