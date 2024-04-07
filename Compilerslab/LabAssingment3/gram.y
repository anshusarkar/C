/*PROGRAM TO RECOGNIZE STRING WITH GRAMMAR A^N B^N, N>=0*/
/*Yacc program to recognize strings ‘aaab’, ‘abbb’,’ab’ and ‘a’ using the grammar (anbn , n>0).  */
/*YACC PART: CODE: (gram.y)*/

%{
#include<stdio.h>
#include<stdlib.h>
%}

%token A B NL

%%
stmt: S NL {printf("valid string\n");
             exit(0);}
;
S: A S B |
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

yylex ( )                                                                  
{                                                                        
        char ch;                                                          
        while ( ( ch = getchar() ) == '  ' );
        if ( ch == 'a' )                       
                return A;                 
        if ( ch == 'b' )                       
                return B;                  
        return ch;                        
}           