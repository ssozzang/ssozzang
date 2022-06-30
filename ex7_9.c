#include <stdio.h>

void swap(int *, int *);

void main()
{
      int a = 20;, b = 30;
  
      printf("(swap 이전) a = %d, b = %d \n", a, b);
      swap(&a, &b);
      printf("(swap 이후) a = %d, b = %d \n", a, b);
}

void swap(int *x, int *y)
{
      int z;
  
      z = *x;
      *x = *y;
      *y = z;
}
      
