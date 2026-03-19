#include<stdio.h>

void main ()

{

    float num1,num2,num3 ;

    printf ("enter the value of num1:");

    scanf("%f",&num1);

    printf ("enter the value of num2:");

    scanf("%f",&num2);

    printf ("enter the value of num3:");

    scanf("%f",&num3);


    if (num1>=num2 && num1>=num3)
{

      printf("number1 is greater ");

}
  
else if (num2>=num1 && num2>=num3)

{

  printf("number2 is greater ");

}

else

{

printf("number3 is greater ");

}

}