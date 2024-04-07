#include <stdio.h>
//#include<conio.h>
//#include <stdlib.h>

int main()
{
FILE *fp; //Aperantly FILE is a hidden data type in C
char ch;
fp = fopen("hello.txt", "w");
printf("Enter data \n");
while( (ch = getchar())!= EOF) { // Maybe EOF means End of file ? 
  putc(ch,fp);
}
fclose(fp);
fp = fopen("hello.txt", "r");

while( (ch = getc(fp))!= EOF)
  printf("%c",ch);
  
fclose(fp);
}