#include<iostream>
using namespace std;

int main ()

{

int n,fact=1;

cout<<"enter the number till which we need factorial"<<endl;

cin>>n;

for (int i=1;i<n;i++)
{

fact=fact*i;

}
cout <<"factorial is "<<fact <<endl;

}