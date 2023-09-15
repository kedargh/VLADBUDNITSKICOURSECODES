#include <stdio.h>

int main()
{
/**int days,day;
char month;
float start;

printf("Enter the month = ");
scanf("%d",&month);

switch(month)
{
case "Jan":
    days=31;
    break;
case "Feb" :
    days=28;
    break;
case "Mar" :
    days=31;
    break;
case "Apr":
    days=30;
    break;
case "May":
    days=31;
    break;
case "June":
    days=30;
    break;
case "July":
    days=31;
    break;
case "Aug":
    days=31;
    break;
case "Sep":
    days=30;
    break;
case "Oct":
    days=31;
    break;
case "Nov":
    days=30;
     break;
case "Dec":
    days=31;
    break;
}
for(start=0.01,day=1;day<=days;day++)
    start=start*2;

printf("Your total doubled currency is = %d",start);

if(start<1000000)
{
    printf("Choose 1 million right now ");

}
else
    printf("Let the cent double itself for the month");**/

int i;
float start=0.01;

for(i=1;i<=30;i++)
   {printf("Day %d amt = %lf\n",i,start);
       start=start*2;

   }

printf("%d",start);
}
