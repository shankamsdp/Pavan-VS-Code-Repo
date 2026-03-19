#include<stdio.h>
void main ()
{
    int i, space, rows, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) 
    {
        // Loop to print spaces
        for (space = 1; space <= rows - i; space++) 
        {
            printf(" ");
        }

        // Loop to print stars

        for (j = 1; j <= 2*(i)-1; j++) 
        {
            printf("*");
        
        }
        
       
        printf("\n");
    }

for (i = rows-1; i > 0; i--)
    {
        // Loop to print spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Loop to print stars

        for (j = 1; j <= 2*(i)-1; j++) {
            printf("*");

        
        }
        
       
        printf("\n");
    }







  
}


