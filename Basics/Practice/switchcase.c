#include<stdio.h>

void main ()

{

int a,b,add,sub,mul,div,choice;

printf ("enter the first number");
scanf("%d",&a);

printf ("enter the second number");
scanf("%d",&b);

printf ("enter choice\n 1:ADD\n 2: SUB\n 3:MUL\n 4:DIV\n");
scanf ("%d",&choice);

switch(choice)
{

    case 1:
    add=a+b;
    printf ("sum is %d",add);
    break;

    case 2:
    sub=a-b;
    printf ("difference is %d",sub);
    break;

    case 3:
    mul=a*b;
    printf ("mul is %d",mul);
    break;

    case 4:
    div=a/b;
    printf ("div is %d",div);
      break;

default:
printf("invalid choice");

}

}