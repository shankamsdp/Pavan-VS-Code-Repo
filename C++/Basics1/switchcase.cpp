#include<iostream>
using namespace std;

int main ()

{

int a , b , choice,add,sub,div,mul ;

cout << "enter values of numbers"<<endl;
cin>>a>>b;

cout <<"enter the choice"<<endl;
cin>>choice;
switch(choice)

{

case 1:
add=a+b;
cout<<"sum is"<<add<<endl;
break;

case 2:
div=a/b;
cout<<"Div is"<<div<<endl;
break;

case 3:
sub=a-b;
cout<<"sub is"<<sub<<endl;
break;

case 4:
mul=a*b;
cout<<"Mul is"<<mul<<endl;
break;

default:
cout<<"Invalid choice"<<endl;


}

return 0;

}