#include<stdio.h>
int prime (int);

void main()
{

    int num1;
    printf("enter the value of num1:");
    scanf("%d",&num1);

     int pnum = prime (num1);//call
    
}

int prime (int a )//signature
{
   int is_prime=1;
    
   if (a < 2)
        is_prime=0;


    else {

 
        for (int i = 2; i < a; i++)//to get divisor 

        {

          
            {
            if (a % i == 0)
                is_prime=0;
                break;
            }
        }
            if (is_prime==0)
            printf("%d is NOT prime", a);
            else
            printf("%d is prime", a);
            return a;
        

        
    }
    
}