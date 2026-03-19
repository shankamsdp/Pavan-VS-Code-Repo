#include<iostream>>
using namespace std;

void swap (int *a,int *b)
{
int temp;
temp = *a;
*a=*b;
*b= temp;

}

int main()

{
int a= 10,b=20;
cout <<"unswapped numbers are "<<a<<endl<<b<<endl;
swap (&a, &b );
cout <<"swapped numbers are "<<a<<endl<<b<<endl;

}