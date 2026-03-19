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
    printf("the original numbers are :\n") ;
    for (int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                printf ("%d ",array[i][j]) ;
            }
            printf("\n");
        }

    printf("the upper triange matrix is :\n") ;
    for (int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                
                if (i>j)
                {
                    printf("  ");
                }

                else
                {

                    printf ("%d ",array[i][j]) ;
                }                
                
            }
            printf("\n");
        }


}

