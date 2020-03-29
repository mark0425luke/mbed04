#include "mbed.h"
#include "TextLCD.h"

DigitalOut led(LED_RED);
TextLCD lcd(D2, D3, D4, D5, D6, D7);

int main()
{
	//lab4_2
	/*
      int x=0;
      lcd.printf("Hello World!\n");
      while(true)
      {
            led = !led;             // toggle led
            lcd.locate(5,1);
            lcd.printf("%5i",x);    //conuter display
            wait(1);
            x++;
      }
     */

	//demo
	  lcd.printf("106081021");
	  while(true)
	  {
	  	for(int x=30;x>=0;x--)
              {
                    lcd.locate(0,1);
                    lcd.printf("%2i",x);    //conuter display
                    wait(1);
              }
	        
	  
	  }
}