#include"main.h"
#include<regx52.h>
#include"..\Lib\delay.h"

#define LED_PORT P2

void main(){
     LED_PORT = 0x55;
	   while(1){
           LED_PORT = ~LED_PORT;
			     Delay_ms(500);
     }
}