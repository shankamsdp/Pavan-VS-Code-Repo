#include<stdio.h>

void main()
{

    int array[3][3];
    printf("enter the array values");

    for (int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                scanf ("%d",&array[i][j]) ;
            }
        }
        
    for (int i=0;i<3;i++)
        {
            for (int j=2;j>=0;j--)
            {
                printf ("%d ",array[j][i]) ;
            }
            printf("\n");

        }

  

}

