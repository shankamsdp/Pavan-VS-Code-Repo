#include <stdio.h>

void main()
{
int a ,b ,choice,sum,sub,mul,div ;

printf ("enter the value of choice:");

scanf("%d",&choice);

printf("Choose amongst below avaialble options\n 1:Add\n 2:subtract\n 3:multiply\n 4:divide\n");

printf ("enter the value of First number:");

scanf("%d",&a);

printf ("enter the value of second number:");

scanf("%d",&b);


switch (choice) {
    case 1:
        sum = a+b;
        printf ("addition of numbers is %d",sum);
        break; 
    case 2:
        sub = a-b;
        printf ("Subtraction of numbers is %d",sub);
        break;
    case 3:
        mul = a*b;
        printf ("Subtraction of numbers is %d",mul);
        break; 
    case 4:
        div = a/b;
        printf ("division of numbers is %d",div);
        break; 
    default:
        printf("invalid choice ");
}

}