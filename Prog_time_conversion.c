#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int seconds,minutes,hours;

    printf("Enter the number of seconds for conversion = ");
    scanf("%d",&seconds);

    hours=seconds/3600;
    minutes=(seconds-3600)/60;
    seconds = (seconds-3600)%60;

    printf("%d h: %d m : %d s",hours,minutes,seconds);
    return 0;
}
