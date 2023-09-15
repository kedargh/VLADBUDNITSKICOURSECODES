#include <stdio.h>

int main()
{
    int i, n, sum=0;
    printf("Enter a positive integer = ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%3==0 || i%5==0)
        {
            sum=sum+i;
        }

    }
    printf("%d is the sum of common multiples of 3 and 5 ",sum);
}
