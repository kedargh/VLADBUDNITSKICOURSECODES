#include <stdio.h>

int main()
{ int num;
  printf("Enter a number = ");
  scanf("%d",&num);

  if(num<100 && num>=10)
    printf("double-digit");
  else if(num<999 && num>=100)
    printf("triple-digit");
  else
    printf("neither double/triple");

  return 0;

}
