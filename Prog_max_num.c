#include <stdio.h>

int max3(int a,int b, int c)
{
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is the greatest",a);

        }
        else
            printf("%d is the greatest",c);
    }
    else
    {
        if(b>c)
        {
            printf("%d is the greatest",b);
        }
        else
            printf("%d is the greatest",c);
    }
    return 0;
}

int main()
{   int a,b,c;
    printf("Enter number 1 = ");
    scanf("%d",&a);
    printf("Enter number 2 = ");
    scanf("%d",&b);
     printf("Enter number 3 = ");
    scanf("%d",&c);

    max3(a,b,c);

}

