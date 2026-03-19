#include<iostream>
using namespace std ;

int  main ()//program for sum of array numbers 

{

int array[5],sum=0;

cout<<"enter the numbers "<<endl;

for (int i=0;i<5;i++)

{

cin>>array[i];


}

for (int i=0;i<5;i++)

{

sum =sum+array[i];


}

cout<<"sum of array is "<<sum;

return 0;

}