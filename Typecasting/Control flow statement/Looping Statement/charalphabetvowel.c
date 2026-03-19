#include<stdio.h>

void main()

{

    char digit;
    printf("enter the digit:");
    scanf ("%c",&digit);

    if ((digit>='a' && digit<='z')||(digit>='A'&&digit<='Z'))

{

   if (digit == 'a' || digit == 'A' || digit == 'e' || digit == 'E'
        || digit == 'i' || digit == 'I' || digit == 'o' || digit == 'O'
        || digit == 'u' || digit == 'U')

        {
            printf("%c  IS alphabet and vowel",digit);

        }

    else
        {
            printf("%c IS alphabet and consonant",digit);

        }



}

else 

{

    printf ("%c is a number",digit);
}

}


