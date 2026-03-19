#include<stdio.h>
void main()

{
int number;

printf("enter the number");

scanf("%d",&number);

if(number>=0)
{
    if (number%2==0)
    {
    printf("even");
    }
    else
    {
    printf("odd");
    }
}
else
{
    printf("number is negative");
}
}
