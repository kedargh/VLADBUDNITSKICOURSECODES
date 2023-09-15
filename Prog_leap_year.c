#include <stdio.h>

int main()
{
    int year;
    printf("Enter year = ");
    scanf("%d",&year);

    int is_leap_year = 0;

if(year%4==0)
{
    if (year % 100 == 0)
    {
       if (year % 400 == 0)
       {
           is_leap_year = 1;
       }
       else
       {
           is_leap_year = 0;
       }
    }
   else
   {
       is_leap_year = 1;
   }
}
else
{
    is_leap_year = 0;
}

if(is_leap_year )
       printf("Its a leap year\n");

else
   printf("Not a leap year \n");

return 0;
}
