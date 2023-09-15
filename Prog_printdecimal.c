#include <stdio.h>
#include <stdlib.h>

int main()
{ float or_num;
  float decimal;

  printf("Enter a floating point number = ");
  scanf("%f",&or_num);

  or_num - (int)or_num;

  printf("The decimal part of the number is = %f",or_num - (int)or_num);
  return 0;
}
