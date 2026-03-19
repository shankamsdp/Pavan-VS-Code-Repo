#include <stdio.h>
int maximum(int , int );//prototyping

void main()

{

    int num1,num2;
    printf ("Enter the value of num1:");
    scanf("%d",&num1);
    printf ("Enter the value of num2:");
    scanf("%d",&num2);
   
    int greater = maximum (num1 , num2);//call
    printf("bigger number is %d",greater);
}

int maximum (int a ,int b )//signature
{
    if (a>b)
       return a;
    else 
        return b;

}

