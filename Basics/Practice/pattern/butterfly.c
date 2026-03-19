#include<stdio.h>
void main()
{
int count=5;
for (int i=1;i<=count;i++)
{

    for(int j=1;j<=i;j++)
    {

    printf("*");

    }

    for (int j=2*i;j<=2*count;j++)

    {

    printf(" ");

    }

    for(int j=1;j<=i;j++)
    {

    printf("*");

    }
    printf("\n");
}



}