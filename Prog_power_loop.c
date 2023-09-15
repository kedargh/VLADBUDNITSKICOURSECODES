#include <stdio.h>

int main()
{
int num,pow,counter,finalnum;
printf("Enter base = ");
scanf("%d",&num);
printf("Enter power = ");
scanf("%d",&pow);
finalnum=1;
counter=1;

while(counter<=pow)
{
    finalnum=finalnum*num;
    counter++;
}
printf("%d",finalnum);


}
