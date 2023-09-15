#include <stdio.h>

#define SIZE 5

int main()
{
    int a[SIZE];
    int i;
    int flag=0;
    for(i=0;i<SIZE;i++)
    {
        printf("Enter the number %d in the input = ",i+1);
        scanf("%d",&a[i]);

    }

    for(i=0;i<SIZE;i++)
    {
        printf("%d ",a[i]);
    }

    for(i=1;i<SIZE-1;i++)
    {
       if(a[i]==a[i-1]*a[i+1])
       {
           printf("It is has good neighbours");
           flag=1;
           break;
       }

    }


    if(flag==0)
    {
        printf("No good neighbours");
    }
}
