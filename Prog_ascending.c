#include <stdio.h>

int main()
{
    int order;
    int prevalue=0,curvalue=0;
    int ascendingflag=1;

    printf("Enter the number of characters in the series = ");
    scanf("%d",&order);

    if (order<=0)
        printf("Invalid Input");
    else{
        do{
            printf("Enter a value in the sequence = ");
            scanf("%d",&curvalue);

            if(curvalue<0)
                {printf("Enter a positive number");
            break;}
            else{ if(curvalue<=prevalue)

            ascendingflag=0;
            prevalue=curvalue;
            order--;

            }

        }while(order>0);

         if(ascendingflag==0)
            printf("Seq not ascending");
         else
            printf("Seq is ascending");
    }
}
