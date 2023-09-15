#include <stdio.h>

#define SIZE 8

int main()
{   int a[SIZE];
    int i,hottest;
    float sum=0,avg_temp;
    for(i=0;i<SIZE;i++)
    {
        printf("Enter the temperature of day %d = ",i+1);
        scanf("%d",&a[i]);
    }
    hottest=a[0];
    for(i=0;i<SIZE;i++)
    {
        if(a[i]>hottest)
        {
            hottest=a[i];
        }
    }

    for(i=0;i<SIZE;i++)
    {
       sum=sum+a[i];
    }
    avg_temp=sum/i;

    printf("The hottest day of the week = %d\n",hottest);
    printf("The avg temp of the entire week = %f\n",avg_temp);
}
