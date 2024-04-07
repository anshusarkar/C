%{
#include<stdio.h>
#include<stdlib.h>
/* This YYAC program is for recognizing the Expression */
%}

%token A NUMBER ID                       // token from lex file
%left '+' '-'                         // left associative 
%left '*' '/'

%%
statement: A'='E
| E {
printf("\n Valid arithmetic expression");
$$ = $1;
};

E: E'+'ID
| E'-'ID
| E'*'ID
| E'/'ID
|'-'NUMBER
|'-'ID
|'('E')'
| NUMBER
| ID
;
%%

extern FILE *yyin;

int main()
{
printf("Enter the expression\n");
do
{
yyparse();
}while(!feof(yyin));
}

int yyerror(char *s)
{
exit(0);
return 0;
}
