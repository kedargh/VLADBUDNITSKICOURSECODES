#include <stdio.h>

int main()
{
int num,pow,i=1,counter;
printf("Enter a number =  ");
scanf("%d",&num);
printf("Enter a power =  ");
scanf("%d",&pow);

for(counter=1;counter<=pow;counter++)
   i=i*num;

printf("%d",i);

}
