#include<iostream>
using namespace std;
int main()

{

int array[3][3];

cout<<"enter the values of array"<<endl;

for (int i=0;i<3;i++)

{

    for (int j=0;j<3;j++)

    cin>>array[i][j];

}


cout <<"values of array are :"<<endl;

for (int i=0;i<3;i++)

{

    for (int j=0;j<3;j++)

    cout<<array[i][j];
    cout <<endl;
}




cout <<"Reverse trasnpose  of array are :"<<endl;

for (int i=0;i<3;i++)

{

    for (int j=2;j>=0;j--)
    {

    cout <<array[j][i];
    

    }
cout <<endl;
}



}




