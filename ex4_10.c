#include <stdio.h>

void main()
{
     unsigned char a = 83, x, y;
     
     x = a >> 2;
     printf("a = 0x%02X (%d), x = a >> 2 = 0x%02 (%u)\n", a, a, x, x);
  
     y = a >> 2;
     printf("a = 0x%02X (%d), y = a >> 2 = 0x%02 (%u)\n", a, a, y, y);
}
  
