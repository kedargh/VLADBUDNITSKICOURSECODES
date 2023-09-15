#include <stdio.h>

#define size 20

int main()
{
    int i,j;
    int mat[size][size];

    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            mat[i][j]=i*j;
        }
    printf("\n");
    }
    fflush(stdin);

    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%5d ",mat[i][j]);
        }
    printf("\n");
    }
}
