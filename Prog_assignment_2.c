#include <stdio.h>

int main()
{
    int num,d1,d2,d3;
    printf("Enter a 3 digit number = ");
    scanf("%d",&num);

    d3=num%10;
    num=num/10;
    d2=num%10;
    num=num/10;
    d1=num%10;

    if(d1<d2)
    {
        if(d2<d3)
            printf("ASCENDING");
        else
            printf("NOT ASCENDING");

    }
    else
        printf("NOT ASCENDING");
return 0;
}
