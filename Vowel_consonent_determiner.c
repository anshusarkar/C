#include <stdio.h>

int main()
{
 char ch;
 printf("Enter a character here : ");
 scanf("%c" , &ch );
 if (ch == 'a' || ch =='e' || ch == 'i' || ch == 'o' || ch == 'u'|| ch == 'A' || ch =='E' || ch == 'I' || ch == 'O' || ch == 'U')
 printf("it's a vowel\n");
 else
 printf("It's a consonant\n");


    return 0;
}


