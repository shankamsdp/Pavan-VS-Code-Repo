#include<iostream>
using namespace std ;

int main ()

{

int i , count =0,count1=0;

for (i=1;i<=100;i++)

{

    if(i%2==0)
    count =count +1;
else
count1=count1+1;

}

cout <<"count of even number is "<<count<<endl;
cout <<"count of odd number is "<<count1 ;
return 0;

}