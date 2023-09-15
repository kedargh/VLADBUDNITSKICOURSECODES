#include <stdio.h>

int sumdivisor(int n)
{
    int counter;
    int sum=0;
    if (n<=0)
        return 0;

    else
       for(counter=1;counter<=n/2;counter++)
       {
           if(n%counter == 0)
           {
               sum+=counter;
           }
       }
    return sum;
}


int main()
{
    int x;
    printf("Enter a number = ");
    scanf("%d",&x);
    printf("%d is the sum of divisors",sumdivisor(x));
}
