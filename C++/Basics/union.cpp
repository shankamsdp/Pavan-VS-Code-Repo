#include <iostream>
#include <cstring>
using namespace std;

union student {
    char name [10];
    int rollNo;
};

int main ()

{

union student s1;
union student s2;

//initialize valueof S1 

strcpy(s1.name,"Pavan");
cout<<"value of name is "<<s1.name<<endl;
s1.rollNo = 123;
cout<<"value of rollnumber is "<<s1.rollNo<<endl;

//initialize valueof S2 

strcpy(s2.name,"Ashank");
cout<<"value of name is "<<s2.name<<endl;
s2.rollNo = 345;
cout<<"value of rollnumber is "<<s2.rollNo<<endl;


return 0;

}