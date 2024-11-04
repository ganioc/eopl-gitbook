%{
#include <stdio.h>
#include "y.tab.h"

extern int lineno;
%}

ws  [ \t]+
nl  \n 

%%
{ws}  ;
command { return COMMAND; }
{nl}    { lineno++; }
.       { return yytext[0]; }

