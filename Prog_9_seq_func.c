#include <stdio.h>
#include <math.h>>
int fun9(int a)
{  int i,sum=0;
    for(i=0;i<=a;i++)
    {
        sum=sum +(9*(pow(10,i-1)));
    }
    return sum;
}


int main()
{   int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    printf("%d",fun9(n));
}
