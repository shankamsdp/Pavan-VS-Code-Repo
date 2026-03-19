#include<iostream>
using namespace std;

int main ()

{

int m1,m2,m3,m4,m5,avg;

cout<<"enter the value of marks "<<endl;
cin>>m1>>m2>>m3>>m4>>m5;
avg=(m1+m2+m3+m4+m5)/5;
cout <<"average is "<<avg<<endl;

if(avg>75)
cout <<"first class"<<endl;

else if (avg >50 && avg <=75)
    
    {
    cout <<"second class"<<endl;

    }

else if (avg<=50)   
{
    cout <<"Fail"<<endl;
}


return 0;

}