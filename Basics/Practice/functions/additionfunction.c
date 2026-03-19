#include <stdio.h>
int add (int,int);
int subtract (int,int);//prototyping

void main()
{

    int num1 ,num2 ;
    printf("enter the value of num1 ");
    scanf("%d",&num1);
    printf("enter the value of num2 ");
    scanf("%d",&num2);

int sum = add(num1,num2);//call
printf("sum is %d",sum);

int difference = subtract(num1,num2);
printf("difference is %d",difference);

}

int add (int a,int b)
{

   return a+b; 
}

int subtract  (int a,int b)
{

   return a-b; 
}