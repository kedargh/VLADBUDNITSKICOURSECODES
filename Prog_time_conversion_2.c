#include <stdio.h>

int main()
{
    int sec,hours,mins,seconds;

    printf("Enter the number of seconds = ");
    scanf("%d",&sec);

    hours=sec/3600;
    mins=(sec - hours*3600)/60;
    seconds=(sec - hours*3600) % 60;


 if(hours<10)
    printf("0");
 printf("%d : ",hours);
 if(mins<10)
    printf("0");
 printf("%d : ",mins);
 if(seconds<10)
    printf("0");
 printf("%d\n",seconds);




return 0;

}
