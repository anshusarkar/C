/*Yacc program to recognize strings ‘aaab’, ‘abbb’,’ab’ and ‘a’ using the grammar (anbn , n>0).  */

%{                                                                        
#include<stdio.h>
#include<stdio.h>                                                
%}  
                                                                     
%token   a      b

%%                                                                        
Stmt    : TERM   '\n'     {  printf ( "\n string belongs to grammar..\n" );  exit(0); }        
            |  error   '\n'     {  yyerror ( "\n String does not belong to grammar..\n" ); }
            ;
TERM: a TERM b                                                           
            |                                                                
            ;
%%                                                                       

int main ( )                                                                   
{                                                                         
        printf ( "ENTER String for GRAMMER a^nb^n : \n"  );                              
        yyparse ( );                                                       
}                       

int yylex ( )                                                                  
{                                                                        
        char ch;                                                         
        while ( ( ch = getchar() ) == '  ' );
        if ( ch == 'a' )                       
                return a;                 
        if ( ch == 'b' )                       
                return b;                 
        return ch;                        
}               
                         
int yyerror (char *s)                          
{                                         
        printf ( "%s", s);                   
}                             