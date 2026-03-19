#include<iostream>
using namespace std;

int main ()

{

int array[5];

for (int i=0;i<5;i++)

{

    cin>>array[i];

}

cout<<"reverse of number is :"<<endl;

for (int i=4;i>0;i--)

{

    cout<<array[i];

}


return 0;

}