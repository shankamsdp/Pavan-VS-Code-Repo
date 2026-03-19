#include <stdio.h>

void name (int n){
printf("pavan\n");
n++;
if(n<10)//base case
{
name(n);//recursive case 
}
}


void main()
{
name(5) ;
}

