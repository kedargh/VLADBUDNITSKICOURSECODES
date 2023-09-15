#include <stdio.h>
#include <math.h>
float square(float x);
float square_root(float x);
int main()
{
    float x1,y1,x2,y2,dist;


    printf("Enter x1 coordinate = ");
    scanf("%f",&x1);

    printf("Enter y1 coordinate = ");
    scanf("%f",&y1);

    printf("Enter x2 coordinate = ");
    scanf("%f",&x2);

    printf("Enter y2 coordinate = ");
    scanf("%f",&y2);

dist=sqrt(square(x2-x1)+square(y2-y1));
printf("the distance between points is = %f",dist);
}


float square(float x)
{
return x*x;
}

