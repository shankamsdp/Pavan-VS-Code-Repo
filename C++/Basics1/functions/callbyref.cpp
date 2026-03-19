#include<iostream>
using namespace std;

void swap (int *a,int *b)

{
int temp ;
temp = *a;
*a = *b;
*b= temp;

}

int main()

{

int a=10 ,b=20 ;
cout<<"before swap values are "<<a<<endl<<b<<endl;
swap (&a,&b);
cout<<"after swap values are "<<a<<endl<<b<<endl;
return 0;

}