#include <stdio.h>
int add(int ,int );
int subtract(int ,int);//prototyping

void main()

{

    int num1,num2;
    printf ("Enter the value of num1:");
    scanf("%d",&num1);
    printf ("Enter the value of num2: \n");
    scanf("%d",&num2);
   
    int sum = add(num1,num2);//call
    printf("sum is %d\n",sum);

printf("difference is %d",subtract(num1,num2));

}

int add (int a ,int b)//signature
{

    return a+b;

}


int subtract (int a ,int b)
{

    return a-b;

}

