#include <iostream>
#include <cstring>
using namespace std;

struct student {
    char name [10];
    int rollNo;
};

int main ()

{

struct student s1;
struct student s2;

//initialize valueof S1 

strcpy(s1.name,"Pavan");
s1.rollNo = 123;


//initialize valueof S2 

strcpy(s2.name,"Ashank");
s2.rollNo = 345;


//printing value of S1
cout<<"value of name is "<<s1.name<<endl;
cout<<"value of rollnumber is "<<s1.rollNo<<endl;

//printing value of S2
cout<<"value of name is "<<s2.name<<endl;
cout<<"value of rollnumber is "<<s2.rollNo<<endl;

return 0;

}