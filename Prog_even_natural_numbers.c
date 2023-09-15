#include <stdio.h>

int main()
{
    int num,i;
    printf("Enter a number = ");
    scanf("%d",&num);

    for(i=2;i<=num;i++)
{if(i%2==0)
    {
        printf("%d \t",i);
    }
}
}
