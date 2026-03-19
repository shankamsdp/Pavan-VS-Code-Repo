#include <iostream>
using namespace std ;

int main ()


{

int array[3][3];

cout<<"enter the vaues of array:"<<endl;

for(int i=0;i<3;i++)

{
 for (int j=0;j<3;j++)

{

    cin>>array[i][j];


}

}
cout<<"Vaues of array are:"<<endl;

for(int i=0;i<3;i++)

{
 for (int j=0;j<3;j++)

{

    cout<<array[i][j];


}
cout<<endl;

}
cout<<"Upper matrix of of array are:"<<endl;


for(int i=0;i<3;i++)

{
 for (int j=0;j<3;j++)

  {
    if (i>j)
    {
        cout<<"";

    }

else 

{

cout<<array[i][j];

}

}

cout <<endl;

}
}