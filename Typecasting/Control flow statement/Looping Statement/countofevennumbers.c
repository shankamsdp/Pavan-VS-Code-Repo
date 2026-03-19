
//count of even numbers from 1 to 100
#include<stdio.h>
void main()
{

int count=0;


for (int i=1;i<=100;i++)
{

    if (i%2==0)
    {
        count=count+1;

    }


}

printf("number of even numbers is %d",count);

}
