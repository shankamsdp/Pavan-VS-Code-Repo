#include<iostream>
using namespace std ;
int multiply (int ,int);

int main ()

{

int num1,num2 ;
cout<<"enter value of num1"<<endl;
cin>>num1;
cout<<"enter value of num2"<<endl;
cin>>num2;

int mul = multiply (num1,num2);
cout<<"multiplication of numbers is "<<mul<<endl;

return 0;
}

int multiply (int a ,int b )
{

return a*b;

}
