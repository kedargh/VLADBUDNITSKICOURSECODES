#include <stdio.h>

int main()
{
    int s1,s2,s3;
    float avg;
    printf("Enter marks for subject 1 = ");
    scanf("%d",&s1);
    printf("Enter marks for subject 2 = ");
    scanf("%d",&s2);
    printf("Enter marks for subject 3 = ");
    scanf("%d",&s3);

    avg=((float)s1+s2+s3)/3;

    printf("Your average grade is = %.3f\n",avg);
}
