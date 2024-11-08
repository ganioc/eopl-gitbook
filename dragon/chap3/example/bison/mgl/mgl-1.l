%{
#include <stdio.h>
#include "y.tab.h"
extern int lineno;
extern void warning(char*s, char *t);
%}
%option noyywrap

ws      [ \t]+
comment #.*
qstring \"[^\"\n]*[\"\n]
nl      \n 
id      [a-zA-Z][a-zA-Z0-9]*
%%
{ws}  ;
{comment}   ;
{qstring}   {
                yylval.string = strdup(yytext+1);
                /* skip open quote */
                if(yylval.string[yyleng - 2] != '"'){
                    warning("Unterminated character string",
                    (char*)0);
                }else{
                    yylval.string[yyleng - 2] = '\0';
                    /* remove close quote */
                    return QSTRING;
                }
            }
action      { return ACTION; }
execute     { return EXECUTE; }
command     { return COMMAND; }
ignore      { return IGNORE;  }
item        { return ITEM;    }
title       { return TITLE;   }
screen      { return YSCREEN;  }

quit        { return QUIT; }
menu        { return MENU; }
attribute   { return ATTRIBUTE; }
visible     { return VISIBLE; }
invisible   { return INVISIBLE; }
end         { return END;     }
{id}        { yylval.string = strdup(yytext);
                return ID;  }
{nl}        { lineno++; }
.           {  }
%%


