#include <stdio.h>

int main()
{
    int num,multi,i;
    printf("Enter the number whose table you want = ");
    scanf("%d",&num);
    printf("Enter till which multiple you want = ");
    scanf("%d",&multi);

    for(i=1;i<=multi;i++)
        printf("%d X %d = %d\n",num,i,num*i);
    return 0;
}
