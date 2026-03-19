#include<iostream>
using namespace std;
#include<cstring>

union student 
{

    char name[10];
    int rollno;

};

int main ()

{

union student s1;
union student s2;


strcpy(s1.name,"pavan");
cout<<"value of name is "<<s1.name<<endl;
s1.rollno = 20;
cout<<"value of Roll No  is "<<s1.rollno<<endl;
strcpy(s2.name,"deshikachar");
cout<<"value of second name is "<<s2.name<<endl;
s2.rollno= 30 ;
cout<<"value of second Roll No  is "<<s2.rollno<<endl;



}
