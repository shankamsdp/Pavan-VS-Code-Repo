#include<iostream>
using namespace std;

int main ()

{

int array[5];

cout<<"enter the numbers"<<endl;

for (int i=0;i<5;i++)

{

    cin>>array[i];

}


cout<<"Reverse of number is"<<endl;

for (int i=4;i>=0;i--)

{

    cout<<array[i]<<endl;

}


return 0;

}


