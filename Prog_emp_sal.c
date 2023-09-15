#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours,sal_per_hour,days;
    float total_sal;

    printf("Enter salary per hour of the employee = ");
    scanf("%d",&sal_per_hour);
    printf("Enter no. of hours per day = ");
    scanf("%d",&hours);
    printf("Enter no. of days worked = ");
    scanf("%d",&days);

    total_sal=sal_per_hour*hours*days;

    printf("Payable salary = %f",total_sal);

}
