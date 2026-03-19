#include<stdio.h>

void main ()

{

char LETTER ;
printf("enter the  letter");

scanf("%c",&LETTER);

if (LETTER == 'a' || LETTER == 'A' || LETTER == 'e' || LETTER == 'E'
        || LETTER == 'i' || LETTER == 'I' || LETTER == 'o' || LETTER == 'O'
        || LETTER == 'u' || LETTER == 'U')

{
printf("LETTER  IS vowel");

}

else
{
printf("LETTER IS consonant");

}

}