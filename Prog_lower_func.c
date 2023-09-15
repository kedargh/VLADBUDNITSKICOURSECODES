#include <stdio.h>

char lower(unsigned char a)
{
    if(a>='A' && a<='Z' )
    {
        return a + 'a' - 'A';
    }
    else
        return a;
}

char upper(unsigned char a)
{
    if(a>='a' && a<='z' )
    {
        return a - 'a' + 'A';
    }
    else
        return a;
}


int main()
{
   printf("%c \n",lower('E'));
   printf("%c \n",lower(upper('d')) );


}
