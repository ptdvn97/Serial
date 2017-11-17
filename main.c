#include <main.h>
#use rs232(baud=9600,Parity=N,xmit=PIN_C6,rcv=PIN_C7)

#INT_RDA
void ngatDongCo()
{
   char a;
   a = getc();
   switch(a)
   {
      case 'l':
      {
         output_bit(PIN_C1,1);
         output_bit(PIN_C4,1);
         break;
      }
      case 'r':
      {
         output_bit(PIN_C1,1);
         output_bit(PIN_C4,0);
         break;
      }
   }
}



void main()
{
   enable_interrupts(int_rda);
   enable_interrupts(GLOBAL);
   while(TRUE)
   {
    
   }
}
