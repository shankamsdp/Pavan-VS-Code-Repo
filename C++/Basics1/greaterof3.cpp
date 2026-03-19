#include <iostream>
using namespace std;

int main ()

{

    int a,b,c;
    cout <<"enter the value of numbers "<<endl;
    cin >>a>>b>>c;
    if (a>b && a>c)
    cout <<"a is greater "<<a<<endl;
    else if(b>a && b>c)
    cout <<"b is greater "<<b<<endl;
    else if(c>a && c>b)
    cout <<"c is greater "<<c<<endl;
    else if (a==b || a==c || b==c)
    cout <<"numbers are equal  "<<endl;

    return 0;
}