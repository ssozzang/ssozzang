#include <stdio.h>

void main()
{
     int    a, b, max;
  
     printf("정수 두 개를 입력 하시오:");
     scanf_s("%d %d", &a, &b);    //scanf("%d %d", &a, &b);
  
     max = a;
     if( b>a )
         max = b;
     printf("큰 수는 %d 입니다. \n", max);
}
        
    
     
