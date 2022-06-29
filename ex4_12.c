#include <stdio.h>

void main()
{
      int  a, b, c, d, e;
   
      a = b = = c = d = e = 10;
      a +=6;
      printf("a += 6 --> a = %d \n", a);
      b -=6;
      printf("b -= 6 --> b = %d \n", b);
      c *=6;
      printf("c *= 6 --> c = %d \n", c);
      d /=6;
      printf("c /= 6 --> d = %d \n", d);
      e %=6;
      printf("e %= 6 --> e = %d \n", e);
}
