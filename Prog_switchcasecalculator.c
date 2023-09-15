#include <stdio.h>

int main()
{float num1,num2;
char op;

printf("Enter number 1 = ");
scanf("%f",&num1);
printf("Enter number 2 = ");
scanf("%f",&num2);

fflush(stdin);

printf("Enter operation = ");
scanf("%c",&op);
//op='+';

switch(op)
{case '+':
    printf("%f %c %f = %f",num1,op,num2,num1+num2);
    break;
case '-':
    printf("%f %c %f = %f",num1,op,num2,num1-num2);
    break;
case '*':
    printf("%f %c %f = %f",num1,op,num2,num1*num2);
    break;
case '/':
    printf("%f %c %f = %f",num1,op,num2,num1/num2);
    break;
default:
    printf("Invalid input");
    break;
}
return 0;
}
