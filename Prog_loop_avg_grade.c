#include <stdio.h>

int main()
{
 int grade;
 int sum=0,gradescount = 0;
 float avg;
 printf("Enter your grades or enter -1 to stop ");
 scanf("%d",&grade);

while(grade!=-1)
{
    sum=sum+grade;
    gradescount++;
    printf("Enter your grades or enter -1 to stop ");
    scanf("%d",&grade);
}

avg=sum/gradescount;
printf("You have entered %d number of grades\n ",gradescount);
printf("Your average grade is = %f\n",avg);
return 0 ;

}
