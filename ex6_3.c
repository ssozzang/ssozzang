#include <stdio.h>

void main()
{
      int i, sum;
  
      for(i=1, sum=0; i<=100; i++)
          sum += i;
  
      printf("1부터 100까지 정수의 합은 %d 이다.\n", sum);
}
