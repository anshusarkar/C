/*PROGRAM TO RECOGNIZE THE GRAMMAR A^N B, N>=10*/
/*YACC PART:CODE: (gram_anb.y)*/

%{
#include<stdio.h>
#include<stdlib.h>
%}

%token A B NL

%%
stmt: A A A A A A A A A A S B NL {printf("valid string\n");
             exit(0);}
;
S: S A
|
;
%%

int yyerror(char *msg)
{
printf("invalid string\n");
exit(0);
}

int main()
{
printf("enter the string\n");
yyparse();
}
