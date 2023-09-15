#include <stdio.h>
int largest(int a, int b)
{
    if(a<0 || a>=100)
        printf("Invalid Input ");
    else
    {
        if(a>b)
        {
            return a;
        }
        else
            return b;
    }
}
int main()
{   int n1,n2;
    printf("Enter number 1 = ");
    scanf("%d",&n1);
    printf("Enter number 2 = ");
    scanf("%d",&n2);

    printf(largest(n1,n2));
}
