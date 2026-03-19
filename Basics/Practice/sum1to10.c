#include<stdio.h>
void main()
{
int sum=0,n;
printf("enter the number till which you need sum for:");
scanf("%d",&n);

for (int i=1;i<=n;i++)
{

    sum=sum+i;

}
printf("sum is %d",sum);
}
