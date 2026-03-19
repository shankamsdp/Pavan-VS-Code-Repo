#include <stdio.h>

int fibonacii (int n)
{

if(n==0||n==1)
    {
    return n ;
    } 

else
{

    return fibonacii(n-1)+fibonacii(n-2);

}


}

void main()
{
int n;
printf("enter the nummber until which we need fibonacii series for:");
scanf("%d",&n);
for(int i=0;i<n;i++)
{

    printf("%d ",fibonacii(i));
}



}