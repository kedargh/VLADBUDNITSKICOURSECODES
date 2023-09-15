#include <stdio.h>

int main()
{
    float x,y;
    printf("Enter X - Coordinate = ");
    scanf("%f",&x);
    printf("Enter Y - Coordinate = ");
    scanf("%f",&y);


    if(x>0 && y>0)
        printf("First quadrant");
    else if(x<0 && y>0)
        printf("Second quadrant");
    else if(x<0 && y<0)
        printf("Third quadrant");
    else if(x>0 && y<0)
        printf("Fourth quadrant");
    else
        printf("This is the origin");

return 0;
}
