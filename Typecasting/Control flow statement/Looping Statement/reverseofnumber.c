#include<stdio.h>
void main()
{

    int num,reverse=0,remainder,original;
    printf("enter the number:");
    scanf("%d",&num );
    original = num;
        for (;num!=0;num/=10)
            {
                remainder=num %10;
                reverse=reverse*10+remainder;
            }
           printf("reversed number is %d\n",reverse);
                      
        if (original == reverse)
           {
            printf("number is palindrome");

           }
           else{
            printf("number is not a palindrome");

           }

}
