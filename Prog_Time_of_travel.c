#include <stdio.h>

int main()
{
    float speed,distance,time;
    printf("Enter the speed of the vehicle in kmph = ");
    scanf("%f",&speed);
    printf("Enter the distance = ");
    scanf("%f",&distance);

    time=distance/speed;
    printf("The time required for travel in hours = %f",time);
}
