#include<stdio.h>
void main ()
//write a program to find sum of n natural numbers 
{

    int n;
    int sum=0;
    printf ("enter the value of natural number:");
    scanf("%d",&n);
     
    for (int i =1;i<=n;i++)
    {
      sum=sum+i;

    }
    printf("value of sum is %d",sum);


}