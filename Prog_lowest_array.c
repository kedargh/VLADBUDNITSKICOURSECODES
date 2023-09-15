#include <stdio.h>


int main()
{
    int a[10];//array of grades
    int i;
    int highestgr;

    for(i=0;i<=9;i++)
    {
        printf("Enter the grade number %d = ",i+1);
        scanf("%d",&a[i]);

    }
    highestgr=a[0];

    for(i=0;i<=9;i++ )

    {
        if(a[i]>highestgr)
            highestgr=a[i];
    }
printf("The highest grade is = %d\n",highestgr);


for(i=0;i<=9;i++)
{
    printf("%d ",a[i]);
}
}
