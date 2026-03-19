#include<iostream>
using namespace std ;
int add (int ,int ); //prototyping 
int subtract (int,int);

int main ()

{

int num1 ,num2 ;
cout<<"enter value of num1"<<endl;
cin>>num1;
cout<<"enter the value of num2"<<endl;
cin>>num2;

int sum = add (num1,num2);//call
cout<<"sum is "<<sum<<endl;

int difference = subtract (num1,num2);

cout<<"difference is "<<difference<<endl;


return 0; 

}

int add (int a , int b )//signature
{

    return a+b;
}

int subtract (int a,int b )

{

return a-b;

}