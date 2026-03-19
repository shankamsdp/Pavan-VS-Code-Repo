#include<iostream>
using namespace std ;
int maximum (int ,int );

int main ()
{

int n1,n2;
cout<<"enter value of n1"<<endl;
cin>>n1;
cout<<"enter valu eof n2"<<endl;
cin>>n2;


int bigger = maximum (n1,n2);

cout<<"bigger number is"<<bigger<<endl;




}

int maximum (int a ,int b)
{

if (a>b)
return a;

else

return b;



}