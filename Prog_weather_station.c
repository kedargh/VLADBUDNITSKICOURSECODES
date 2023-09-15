#include <stdio.h>

int main()
{
    double temp,fahr;
    printf("Enter the temperature in celcius = \n");
    scanf("%lf",&temp);
    fahr=1.8*temp+32;
    printf("The fahrenheit equivalent = %lf\n",fahr);



}
