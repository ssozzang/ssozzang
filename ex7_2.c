#include <stdio.h>

int add(int a, int b)  //함수의 정의
{
        int sum;
        sum = a + b;
  
        return sum;       //함수로 부터 반환
}

int main()
{
    int x, y, result;
  
    x =20, y = 40;
    result = add(x,y);  //함수 호출
    printf("%d + %d = %d \n", x, y, result);
  
    return 0;
}
