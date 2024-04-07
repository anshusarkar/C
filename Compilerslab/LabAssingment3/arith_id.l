%{
/* This LEX program returns the tokens for the expression */
#include<stdio.h>
#include<stdlib.h>
#include"y.tab.h"
%}

%%
"=" {printf("\n Operator is EQUAL");}
"+" {printf("\n Operator is PLUS");}
"-" {printf("\n Operator is MINUS");}
"/" {printf("\n Operator is DIVISION");}
"*" {printf("\n Operator is MULTIPLICATION");}

[a-z A-Z]*[0-9]* {
printf("\n Identifier is %s",yytext);
return ID;
}

\n return 0;
%%

int yywrap()
{
return 1;
}
