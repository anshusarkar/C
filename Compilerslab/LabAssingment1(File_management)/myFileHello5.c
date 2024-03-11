//header file declaration

#include <stdio.h>
#include <stdlib.h>

//user defined function declaration

void check_comment (char) ;
void block_comment () ;
void single_comment () ;


FILE *fp1 , *fp2;

//main function definition

int main()
{
char c;
fp1 = fopen ("file1.txt","r") ;
fp2 = fopen ("mynewfile.txt","w") ;
while((c=fgetc(fp1))!=EOF)
check_comment(c);
fclose(fp1);
fclose(fp2);
return 0;
}

//handles both types of comments
void check_comment(char c)
{
char d;
if( c == '/')
{
if((d=fgetc(fp1))=='*')
block_comment();
else if( d == '/')
{
single_comment();
}
else
{
// if both the cases fail, it is not a comment, so we add the character as it is in the new file.
fputc(c,fp2);
fputc(d,fp2);
}
}
// again, if all above fails, we add the character as it is in the new file.
else
fputc(c,fp2);
}

// function that handles block comments
void block_comment()
{
char d,e;
while((d=fgetc(fp1))!=EOF)
{
/* keep reading the characters and do nothing,
as they do not have to be copied into the new file
*/
if(d=='*') // if the comment 'seems' like ending
{
e=fgetc(fp1); // check if it actually ends (block comments end with '*/')
if(e=='/') // if the comment 'has' ended, return from the function
return;
}
}
}

// function that handles single line comments
void single_comment()
{
char d,e;
while((d=fgetc(fp1))!=EOF)
{
/* keep reading the characters and do nothing,
as they do not have to be copied into the new file
*/
if(d=='\n') // check if the comment ends
return; // if the comment 'has' ended, return from the function
}
}