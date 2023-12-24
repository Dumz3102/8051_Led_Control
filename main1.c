#include<REGX52.H>

void Delay(unsigned int t){
     unsigned int x,y;
	   for(x = 0;x<t;x++){
		     for(y = 0;y<123;y++); //Delay 1ms    
    }
}	

void main(){
	   unsigned char i;
     while(1){
			  //1. 8 Led sang , *Led tat 
           for(i = 0;i<5;i++){
               P0 = 0x00;// 0000.0000
						   Delay(500);
						   P0 = 0xFF;// 1111.1111
						   Delay(500);
              }
				//2. 4 Led sang , 4 Led tat 		
					 for(i = 0;i<5;i++){
               P0 = 0x0F;// 0000.1111
						   Delay(500);
						   P0 = 0xF0;// 1111.0000
						   Delay(500);
              }	
				//3. 8 Led sang, tat dan xen			
						for(i = 0;i<5;i++){
               P0 = 0x55;// 0101.0101
						   Delay(500);
						   P0 = 0xAA;// 1010.1010
						   Delay(500);
              }	
          }	 
}