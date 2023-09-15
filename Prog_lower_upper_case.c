#include <stdio.h>

int main()
{
    char letter;
    printf("Enter a letter = ");
    scanf("%c",&letter);

if(letter>="A"&& letter<="Z")
{
    printf("its capital ");
}
else if(letter>="0" && letter<="9")
    printf("Its a digit");

else if(letter>="a" && letter<="z")
    printf("Its a small letter ");
/**
else
    printf("Its a special character ");**/

}
