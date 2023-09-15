#include <stdio.h>

int main()
{
    int a[10];
    int i,highest;
    int maxindex=0;
    for(i=0;i<=9;i++)
    {
        printf("Enter number %d digit = ",i+1);
        scanf("%d",&a[i]);

    }
    highest=a[0];
    maxindex=0;
    for(i=0;i<=9;i++)
    {
        if(a[i]>highest)
        {
            highest=a[i];
        }
    }

    for(i=0;i<=9;i++)
    {
        if(a[i]>a[maxindex])
        {
            maxindex=i;
        }
    }


    printf("The highest number is = %d and its index is %d",highest,maxindex);
}
