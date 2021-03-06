#include <main.h>

#use rs232(baud=9600,xmit=PIN_C6,rcv=PIN_C7)
#INT_RB

void main()
{
   enable_interrupts(INT_RDA);
   enable_interrupts(GLOBAL);
}

#INT_RDA
void ngatRDA()
{
   char a;
   a = getc();
   switch(a)
   {
      case 'r':
      {
         output_bit(PIN_C1,1);
         output_bit(PIN_C4,1);
         break;
      }
      case 'l':
      {
         output_bit(PIN_C1,1);
         output_bit(PIN_C4,0);
         break;
      }
      case 's':
      {
         output_bit(PIN_C1,0);
         break;
      }
   }
}
