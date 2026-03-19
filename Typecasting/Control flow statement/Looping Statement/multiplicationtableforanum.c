//program to print multiplication table for a number 'n' to be taken input 

#include<stdio.h>

void main ()

{

int n ;

printf("enter the value of number:");
scanf("%d",&n);

for (int i=1;i<=10;i++)
    {
        
        printf ("%d * %d = %d\n",n,i,n*i);

    }

}