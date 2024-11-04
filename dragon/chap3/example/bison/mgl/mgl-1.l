%{
#include <stdio.h>
#include "y.tab.h"
extern int lineno;
%}
ws      [ \t]+
qstring \"[^\"\n"]*[\"\n]
nl      \n 
%%
{ws}  ;
{qstring}   {
                yylval.string = strdup(yytext+1);
                /* skip open quote */
                if(yylval.string[yylen - 2] != '"'){
                    warning("Unterminated character string",
                    (char*)0);
                }else{
                    yylval.string[yylen - 2] = '\0';
                    /* remove close quote */
                    return QSTRING;
                }
            }
action      { return ACTION; }
execute     { return EXECUTE; }
command     { return COMMAND; }
ignore      { return IGNORE;  }
item        { return ITEM; }
{nl}        { lineno++; }
.           { return yytext[0]; }

%%


