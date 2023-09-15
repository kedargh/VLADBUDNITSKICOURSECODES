#include <stdio.h>

int main()

{ float a,b,c;

 printf("Enter value of a = ");

scanf("%f",&a);

printf("Enter value of b = ");

scanf("%f",&b);

printf("Before - a = %f, b = %f",a,b);

c=a;

a=b;

b=c;

printf("After - a = %f, b = %f",a,b);

}
