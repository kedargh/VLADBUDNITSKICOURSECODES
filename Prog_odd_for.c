#include <stdio.h>

int main()
{
 int num,i,start;
 printf("Enter the number of odd numbers you want = ");
 scanf("%d",&num);

 for(i=1;i<=num;i=i+2)
 {
     printf("%d\n",i);
 }
return 0;
}
