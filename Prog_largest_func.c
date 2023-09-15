#include <stdio.h>

int largest(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;

}

int main()
{ int a,b; //LOCAL VARIABLES
 printf("Enter number 1 = ");
 scanf("%d",&a);
 printf("Enter number 2 = ");
 scanf("%d",&b);

 printf("%d",largest(a,b));

 return 0 ;
}
