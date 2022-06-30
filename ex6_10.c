#include <stdio.h>

void main()
{
      int a;
  
      do {
          printf("정수를 입력하시오(0을 입력하면 종료):");
          scanf_s("%d", &a);
        
          if( a == 0)
              printf("프로그램을 종료합니다. \n");
          esle if( a%2 == 0 )
              printf("짝수입니다. \n");
          esle 
              printf("홀수입니다. \n");
      } while( a != 0);
}
