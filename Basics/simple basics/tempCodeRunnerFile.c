#include<stdio.h>
void main ()
{

    int a ,b ,sum,difference,multi,div;

    printf("enter the value of a\n");
    scanf( "%d",&a);
    printf("enter the value of b\n");
    scanf( "%d",&b);
    sum=a+b;
    difference=b-a;
    multi=a*b;
    div=b/a;
    printf("addition of a and b is %d",sum);
printf("Differenec of a and b is %d",difference);
printf("multiplication  of a and b is %d",multi);
printf("division of a and b is %d",div);

}