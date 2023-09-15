#include <stdio.h>

int main()
{   int num,d1,d2,d3,rev_num;
    printf("Enter a 3 digit number = ");
    scanf("%d",&num);

    d1=num%10;
    num=num/10;
    d2=num%10;
    num=num/10;
    d3=num%10;
    num=num/10;

    rev_num=d3*1+d2*10+d1*100;

    printf("The reversed number is = %d",rev_num);
}
