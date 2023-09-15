#include <stdio.h>
#include <math.h>
int fun9(int a)
{  int i,sum=0;
    for(i=0;i<=a;i++)
    {
        sum=sum +(9*(pow(10,i-1)));
    }
    return sum;
}





long seq(int s)
{   long sum=0;
    int i;
    if(s<=9)
    {
        for(i=s;i>=s;i--)
        {
            sum=sum+(i*pow(10,i));
        }
    }
    else
    {
        sum=fun9(s);
    }
}




int main()
{   int x;
    printf("Enter a number = ");
    scanf("%d",&x);

    printf(seq(x));
}
