#include <stdio.h>

int main()
{
    float n1,n2,n3,max,min;

    printf("enter number 1 = ");
    scanf("%f",&n1);
    printf("enter number 2 = ");
    scanf("%f",&n2);
    printf("enter number 3 = ");
    scanf("%f",&n3);


 /***   if(n1>n2)
       { if(n1>n3)
            printf("Number 1 is the greatest.");
         else
            printf("Number 3 is the greatest.");
       }
    else
       {
         if(n2>n3)
            printf("Number 2 is the greatest.");
         else
            printf("Number 3 is the greatest.");

       }***/
    if(n1<n2)
       {min=n1;
        max=n2;}
    if(max<n3)
        max=n3;
    if(n3<min)
        min=n3;

    printf("Maximum is = %f",max);
}
