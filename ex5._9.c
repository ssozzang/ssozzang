#include <stdio.h>

void main()
{
      int score;
      char grade;
  
      printf("점수를 입력하십시오(0~100):");
      scanf_s("%d", &score);  
  
      switch (score/10){
      case 10;
      case 9 ;
          grade = 'A';
          break ;
      case 8 ;
          grade = 'B';
          break ;
      case 7 ;
          grade = 'C';
          break ;
      case 6 ;
          grade = 'D';
          break ;
      default ;
          grade = 'F';
      }
       printf("입력한 점수 : %d, 학점 : %c \n", score, grade);
}
