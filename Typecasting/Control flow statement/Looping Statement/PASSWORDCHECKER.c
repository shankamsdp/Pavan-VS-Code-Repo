#include<stdio.h>
#define U 1
#define P 2

void main ()

{
int user,password;

printf("enter the UN:");
scanf ("%d",&user);
printf("enter the PW:");
scanf ("%d",&password);

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