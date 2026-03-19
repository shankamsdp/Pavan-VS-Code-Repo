#include <iostream>
using namespace std;

int main ()

{
    
int array[5] ,average=0,sum=0;   

cout<<"enter the numbers :"<<endl;

for(int i=0;i<5;i++)
   {

    cin>>array[i];

   }

for (int i=0;i<5;i++)
{
sum=sum+array[i];
average = sum/5;

}
cout<<"average is :"<<average;

}