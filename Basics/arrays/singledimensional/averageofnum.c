#include<stdio.h>
void main()
{

int array[5] ,average=0,sum=0;   

printf("enter the numbers :");
for(int i=0;i<5;i++)
   {

    scanf("%d",&array[i]);

   }

for (int i=0;i<5;i++)
{
sum=sum+array[i];
average = sum/5;

}
printf("average is %d",average);

}


