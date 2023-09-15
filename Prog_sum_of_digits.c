#include <stdio.h>

int main()
{   int num,d1,d2,d3,sum;
    printf("Enter a 3 digit number");
    scanf("%d",&num);

    d1=num%10;
    num=num/10;
    d2=num%10;
    num=num/10;
    d3=num%10;

   sum=d1+d2+d3;

   printf("The sum of digits = %d",sum);

   return 0;
}
