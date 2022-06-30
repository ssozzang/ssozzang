#include <stdio.h>

void main()
{
      char c = 'A';
      int a = 125;
  
      printf("변수 c의 크기 : %d \n", sizeof(c));
      printf("변수 a의 크기 : %d \n", sizeof(a));
      printf("float 형의 크기 : %d \n", sizeof(float));
      printf("double 형의 크기 : %d \n", sizeof(double));
      printf("125의 메모리 크기 : %d \n", sizeof125));
      printf("625.5의 메모리 크기 : %d \n", sizeof(625.5));
      printf("문자열 world의 메모리 크기 : %d \n", sizeof("world"));
}
