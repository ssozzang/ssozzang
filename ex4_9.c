#include <stdio.h>

void main()
{
     unsigned char a = 84, b = 53, x;
    
     x = a & b;
     printf("10진수 표현 : %u & %u = %u \n", a, b, x);
     printf("16진수 표현 : 0x%X & 0x%X = 0x%X \n\n", a, b, x);
  
                   x = a | b;
     printf("10진수 표현 : %u | %u = %u \n", a, b, x);
     printf("16진수 표현 : 0x%X | 0x%X = 0x%X \n\n", a, b, x);
  
     x = a ^ b;
     printf("10진수 표현 : %u ^ %u = %u \n", a, b, x);
     printf("16진수 표현 : 0x%X ^ 0x%X = 0x%X \n\n", a, b, x);
  
     x = ~b;
     printf("10진수 표현 : ~%u = %u \n", a, b, x);
     printf("16진수 표현 : ~0x%X = 0x%X \n\n", a, b, x);
}
