#include<stdio.h>
void main ()
//write a program to find factorial of n natural numbers 
{

    int n;
    int fac=1;
    printf ("enter the value of natural number:");
    scanf("%d",&n);
     
    for (int i =1;i<=n;i++)
    {
      fac=fac*i;

    }
    printf("value of factorial is %d",fac);


}