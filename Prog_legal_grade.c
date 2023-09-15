#include <stdio.h>

int main()
{
int grade;
printf("Enter a grade = ");
scanf("%d",&grade);
if(grade>=0 && grade<=100)
    goto direct;
else
{do {printf("Enter a grade = ");
    scanf("%d",&grade);}
    while(grade<=0 || grade>100);}
direct:
printf("You have entered a legal grade %d",grade);

printf("You have entered a legal grade %d",grade);

}
