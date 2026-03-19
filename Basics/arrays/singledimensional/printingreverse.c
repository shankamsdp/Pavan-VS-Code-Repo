#include<stdio.h>
void main()
{
int array[5];
printf("enter the values: ");
for (int i=0;i<5;i++)
{
    scanf("%d",&array[i]);
}


printf("reversed values are :");
for (int i=4;i>=0;i--)
{
printf("%d ",array[i]);

}


}