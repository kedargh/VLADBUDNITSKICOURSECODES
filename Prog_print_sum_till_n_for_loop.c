#include <stdio.h>

int main()
{
    int num,sum,i;
    printf("Enter a number = ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
            sum+=i;

    printf("The sum of digits upto %d is = %d ",num,sum);
}
