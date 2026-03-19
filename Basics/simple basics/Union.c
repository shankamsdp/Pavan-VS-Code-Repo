#include <stdio.h>
#include <string.h>

union student {
    char name [10];
    int rollNo;
};

void main ()

{

union student s1;
union student s2;

//initialize valueof S1 

strcpy(s1.name,"Pavan");
printf("value of name is %s\n",s1.name);
s1.rollNo = 123;
printf("value of rollnumber is %d\n",s1.rollNo);

//initialize valueof S2 

strcpy(s2.name,"Ashank");
printf("value of name is %s\n",s2.name);
s2.rollNo = 345;
printf("value of rollnumber is %d\n",s2.rollNo);

}