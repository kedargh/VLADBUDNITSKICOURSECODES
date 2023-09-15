#include <stdio.h>

int main()
{
    int n,i,m;

    printf("Enter a number = ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        {printf("%d ",i);}
    printf("\n");

    for(m=i-1;m>=1;--m)
        printf("%d ",m);

    return 0;
}
