#include <stdio.h>

void main()
{
     int a, b, max;
     
     printf("a와 b값을 입력하시오:");
     scanf_s("%d %d", &a, &b);
     a >= b / (max = a) : (max = b);
     printf("큰 수는 %d 입니다. \n", max);
}
