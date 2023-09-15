#include <stdio.h>
#include <math.h>
int main()
{
    int num,digit,n=1;
    int evensum=0,oddsum=0;
    printf("Enter a number = ");
    scanf("%d",&num);

    do{
       digit=num%10;
       if(digit%2==0)
       {
         evensum=evensum+digit;
       }
       else
        oddsum=oddsum+digit;
       num=num/10;
    }
    while(num>0);

    printf("Even sum = %d\n",evensum);
    printf("Odd sum = %d\n",oddsum);

    printf("Evensum - Oddsum = %d",evensum-oddsum);
}
