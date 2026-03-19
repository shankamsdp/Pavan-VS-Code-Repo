#include <stdio.h>
int square(int );//prototyping

void main()

{

    int num1;
    printf ("Enter the value of num1:");
    scanf("%d",&num1);
    
   
    int sq = square (num1);//call
    printf("square is %d",sq);
}

int square (int a )//signature
{

    return a*a;

}

