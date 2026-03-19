#include <stdio.h>

int sum(int n){
if (n==1)//base case 
{
    return n;
}

else 
{

    return n+ sum (n-1);

}

}


void main()
{

int nat;
printf ("enter the value of natural number:");
scanf("%d",&nat);
printf("sum is %d ",sum(nat));


}
