#include <stdio.h>
void swap(int num1 ,int num2)
{
int temp;
temp =num1;
num1=num2 ;
num2=temp;
printf("after swap is %d %d",num1 ,num2);


}
;

void main()

{

    int num1,num2;
    printf ("Enter the value of num1:");
    scanf("%d",&num1);
     printf ("Enter the value of num2: \n");
    scanf("%d",&num2);

    printf("before swap is %d %d",num1 ,num2);
    swap(num1,num2);
   
}

