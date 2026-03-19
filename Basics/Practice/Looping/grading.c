#include<stdio.h>
void main()
{

    int m1,m2,m3,m4,m5;
    float percent;
    printf ("enter value of m1");
    scanf("%d",&m1);
     printf ("enter value of m2");
    scanf("%d",&m2); 
    printf ("enter value of m3");
    scanf("%d",&m3);
    printf ("enter value of m4");
    scanf("%d",&m4);
     printf ("enter value of m5");
    scanf("%d",&m5);

percent = (m1+m2+m3+m4+m5)/5;

printf ("%.2f is percentage\n",percent);

if (percent>=75)
{

printf ("grade is A");

}

else if (percent<75 && percent>=50)
{

    printf("grade is B");
}
else if (percent<50 && percent >=30)

{

printf ("Grade is C");
}

else {

printf ("Fail");
}

}