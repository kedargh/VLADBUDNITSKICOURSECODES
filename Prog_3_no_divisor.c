#include <stdio.h>

int main()
{
    int n1,n2,n3;
    printf("Enter number 1 = ");
    scanf("%d",&n1);
    printf("Enter number 2 = ");
    scanf("%d",&n2);
    printf("Enter number 3 = ");
    scanf("%d",&n3);

    if(n1%n2==0 || n2%n1==0)
        {if(n2%n3==0 || n3%n2==0)
          {if(n1%n3==0 || n3%n1==0)
           printf("Divisible");
          }}
    else
        return 0;


}
