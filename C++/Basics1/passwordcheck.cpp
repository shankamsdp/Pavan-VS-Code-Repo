#include<iostream>
using namespace std;
#define password 1 
#define username 2 
int main()

{

int UN ,PW ;
cout <<"enter user name"<<endl;
cin>>UN;

cout <<"enter  password"<<endl;
cin>>PW;

if (UN == username && PW ==password)

cout <<"valid credentials"<<endl;

else 

cout <<"Invalid credentials"<<endl;

return 0;

}