#include <stdio.h>

int main()
{int grade;
printf("Enter your secured grade = ");
scanf("%d",&grade);


if(grade>=80)
    printf("Excellent job");
else if(grade<80 && grade>=60)
    printf("Not bad, could do better");
else
    printf("Oh...You didn't pass");

}
