#include <stdio.h>

int main()
{
    int n,sumodd=0,i;

    printf("Enter a number = ");
    scanf("%d",&n);
    if(n<0)
        printf("Invalid Input");
    else{
        for(i=1;i<=n;i=i+2)
            sumodd=sumodd+i;
    }

    printf("The sum of odd digits upto n is = %d",sumodd);

}
