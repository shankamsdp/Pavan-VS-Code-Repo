#include<stdio.h>
void main()
#define password 2
#define username 1

{

int UN,PW ;

printf("enter the UN");
scanf("%d",&UN);
printf("enter the PW");
scanf("%d",&PW);

if (UN==username&&PW==password)

{
    printf("login is successful");
}
else if (UN!=username)
{
    printf("Invalid UN");
}
else if (PW!=password)
{
printf("Invalid PW");
}

}