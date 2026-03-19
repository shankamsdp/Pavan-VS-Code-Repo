#include<stdio.h>
void main()
{
float marks;
printf("enter the marks obtained:");
scanf("%f",&marks);

if (marks>=30)//30 is passing mark
{
    if (marks>75)
    {
    printf("student got %.2f and is distinction",marks);

    }
    
    else 
    {
        if (marks<=75)
        {
            printf ("marks obtained is average ");
        }
    }
}
else 

{
    if (marks <30)
    {
printf("student failed in exam");
    }
else{
printf("student did not attend exam");
}

}
}



