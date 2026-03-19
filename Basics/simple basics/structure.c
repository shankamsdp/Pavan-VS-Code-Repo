#include <stdio.h>
#include <string.h>

struct student {
    char name [10];
    int rollNo;
};

void main ()

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
printf("value of name is %s\n",s1.name);
printf("value of rollnumber is %d\n",s1.rollNo);

//printing value of S2
printf("value of name is %s\n",s2.name);
printf("value of rollnumber is %d\n",s2.rollNo);

}