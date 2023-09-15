#include <stdio.h>

int main()
{   int i,j;
    int a[2][3]={{1,5,9},{2,8,79}};


    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
