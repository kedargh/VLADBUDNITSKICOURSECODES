#include <stdio.h>

int main()
{
    int start,value,counter;
    counter=0;

    for(start=1;start>=1000000;start=start*2,counter++);


    printf("Number of days close to million from 1 dollar = %d",counter);


}
