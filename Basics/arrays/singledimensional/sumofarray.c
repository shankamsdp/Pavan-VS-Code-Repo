#include<stdio.h>
void main()
{
int array[5],sum=0;
printf("enter the numbers:");

for(int i=0;i<5;i++)
{
scanf("%d",&array[i]);
}

for (int i=0;i<5;i++)
{

sum=sum+array[i];

}

printf("value of sum is %d",sum);


}