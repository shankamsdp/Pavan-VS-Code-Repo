#include<iostream>
using namespace std;

void main()

{
int n1=0,n2=1,n,sum=0;
cout<<"enter the number till which we need Fibonacii series for :"<<endl;
cin>>n;
cout<<"series is "<<n1<<n2;

for (int i=2;i<n;i++)
{

    sum = n1+n2 ;
    cout<<sum;
   n1=n2;
   n2=sum;

}




}