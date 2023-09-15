#include <stdio.h>

char fun(char a, char b, char c)
{
  if (a<='9' && a>='0')
  {
      if(b<='9' && b>='0')
      {
          if(c<='9' && c>='0')
          {
              printf("%c%c%c",a,b,c);
          }
          else
            return 0;
      }
      else
        return 0;

  }
  else
    return 0;
}


int main()
{   char a,b,c;
    printf("Enter number 1 = ");
    scanf("%c",&a);
    fflush(stdin);
    printf("Enter number 2 = ");
    scanf("%c",&b);
    fflush(stdin);
    printf("Enter number 3 = ");
    scanf("%c",&c);

    printf("%c",fun(a,b,c));


}
