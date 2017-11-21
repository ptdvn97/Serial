#include <main.h>

#use rs232(baud=9600,xmit=PIN_C6,rcv=PIN_C7)
#INT_RB

void main()
{
   set_tris_b(0x00);
   setup_adc_ports(7);
   while(1)
   {
      if(input(PIN_C0))
      {
         putc('S');
      }
      else
      {
         putc('D');
      }
   }
}
