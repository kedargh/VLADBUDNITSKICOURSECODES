#include <stdio.h>

int main()
{char grade;
printf("Enter your grade letter");
scanf("%c",&grade);

switch(grade)
{ case 'A':
    printf("Your marks are in the range 90 - 100");
    break;
  case 'B':
    printf("Your marks are in the range 80 - 89");
    break;
  case 'C':
    printf("Your marks are in the range 70 - 79");
    break;
  case 'D':
    printf("Your marks are in the range 60 - 69");
    break;
  case 'F':
    printf("Your marks are in the range 0 - 59");
    break;
  default:
    printf("Invalid Input");
    return 0;
    break;


}

}
