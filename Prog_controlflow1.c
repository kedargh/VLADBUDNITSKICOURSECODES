#include <stdio.h>

int main()
{
int loop=1;
float grade;
while(loop==1)
{printf("Enter your grade = ");
scanf("%f",&grade);

if(grade>=60)
{
    printf("Congratulations !!! You have passed with %f percent \n",grade);

}
else printf("you have failed \n");}
return 0;

}
