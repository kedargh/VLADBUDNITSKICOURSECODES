#include <stdio.h>              //1
                              // 2 3

int main()
{ int i,j,k,blankspaces,n,currentValue = 1;

  printf("Enter the number of rows = ");
  scanf("%d",&n);
  blankspaces=n-1;

  for(i=1;i<=n;i++)  //Loop for printing blank spaces
  {
     for(k=blankspaces;k>=1;k--)
        printf(" ");


  for(j=1;j<=i;j++)
  {
      printf("%d",currentValue);
      currentValue++;
  }

  printf("\n");
  blankspaces--;


  }
}
