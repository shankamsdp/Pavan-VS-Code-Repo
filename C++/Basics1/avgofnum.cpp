#include<iostream>
using namespace std;
//this is program for average of numbers 
int main ()

{

int array [5],sum =0,avg=0;
cout <<"enter the array numbers"<<endl;

for (int i =0;i<5;i++)
{

cin>>array[i];

}


for (int i =0;i<5;i++)
{

sum=sum+array[i];

}

avg=sum/5;
cout<<"average is "<<avg<<endl;
return 0;

}