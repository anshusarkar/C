/*LEX PART:CODE:(gram.l)*/

%{
#include<stdio.h>
#include<stdlib.h>
#include "y.tab.h"
%}


%%
[aA] {return A;}
[bB] {return B;}
\n {return NL;}
. {return yytext[0];}
%%

int yywrap()
{
return 1;
}