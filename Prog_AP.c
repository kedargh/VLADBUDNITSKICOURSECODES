#include <stdio.h>

int main()
{
    float an,sn;
    int a,d,n;

    printf("Enter the first term of the AP = ");
    scanf("%d",&a);
    printf("Enter the common diff of the AP = ");
    scanf("%d",&d);
    printf("Enter which term you want of the AP = ");
    scanf("%d",&n);

    an=a+(n-1)*d;
    sn=n/2*((2*a)+(n-1)*d);

    printf("Your nth term is = %f\n",an);
    printf("Sum of n members of the arithmatic progression = %f",sn);
}
