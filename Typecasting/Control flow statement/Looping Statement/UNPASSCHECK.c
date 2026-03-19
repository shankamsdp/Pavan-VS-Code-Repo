#include<stdio.h>
#define U "PAVAN"
#define P "PASSWORD"

void main ()

{
char user,password;

printf("enter the UN:");
scanf ("%c",&user);
printf("enter the PW:");
scanf ("%c",&password);

if (user==U)
{

    if (password==P)

    {
        printf ("login is succesfull as password is valid");

    }
    else 
    {
        printf ("login is unsuccesfull as password is Wrong");

    }

}
else 
{

    printf("invalid UN");
}

}