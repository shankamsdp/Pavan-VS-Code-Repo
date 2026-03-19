#include<iostream>
using namespace std;
#include<cstring>

struct student {
    char name[10];
    int rollno;
};

int main()

{

struct student s1;
struct student s2;

strcpy(s1.name,"pavan");
s1.rollno= 10;


strcpy(s2.name,"Deshikachar");
s2.rollno= 20;


cout<<"value of name is "<<s1.name<<endl;
cout<<"value of Roll No  is "<<s1.rollno<<endl;

cout<<"value of second name is "<<s2.name<<endl;
cout<<"value of second Roll No  is "<<s2.rollno<<endl;



return 0;

}