#include <stdio.h>

float area(float x,float y)
{
    return x*y;
}

int main()
{   float l,b;
c:
    printf("Enter the length = ");
    scanf("%f",&l);
    printf("Enter the breadth = ");
    scanf("%f",&b);

    if(l<=0 || b<=0)
    {
        printf("Invalid Input\n");
        goto c;
    }
    else{
        printf("The area is = %f",area(l,b));
    }
}
