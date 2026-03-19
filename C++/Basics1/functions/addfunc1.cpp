#include<iostream>
using namespace std ;

int add( int ,int);

int main ()
{

int num1,num2;
cout<<"enter value of num1"<<endl;
cin>>num1;

cout<<"enter value of num2"<<endl;
cin>>num2;

add (num1,num2);
cout<<"sum is"<<add(num1,num2);

return 0;

}

int add (int a,int b)
{

return a+b;

}