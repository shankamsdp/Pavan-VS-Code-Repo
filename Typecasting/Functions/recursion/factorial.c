#include <stdio.h>

int factorial( int n)
{
    if(n==1)//base case 
    {
        return n;

    }
    else 

    {

        return n*factorial(n-1);

    }

}


void main()
{

    int n;
    printf("enter the number for which we need factorial:");
    scanf("%d",&n);
    printf("Factorial is %d",factorial(n));


}
