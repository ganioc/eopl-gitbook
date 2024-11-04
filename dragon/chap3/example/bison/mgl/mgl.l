%{
#include "mglyac.h"
#include <string.h>

extern int lineno;
%}

ws      [ \t]+
comment #.*
qstring \"[^\"\n]*[\"\n]
id      [a-zA-Z][a-zA-Z0-9]*
nl      \n 

%%
{ws}      ;
{comment} ;
{qstring} {
            /* remove the 1st open quote, skip open quote */
            yylval.string=strdup(yytext+1);
            if(yylval.string[yylen-2] != '"'){
                warning("Unterminated character string", (char *)0);
            }
            else{
                yylval.string[yyleng - 2] = '\0'; 
                /* remove the close quote */
            }
            return QSTRING;

        }
screen      { return SCREEN; }
title       { return TITLE;  }
item        { return ITEM;   }
command     { return COMMAND; }
action      { return ACTION;  }
execute     { return EXECUTE; }
menu        { return MENU;    }
quit        { return QUIT;    }
ignore      { return IGNORE;  }
attribute   { return ATTRIBUTE; }
visible     { return VISIBLE;   }
invisible   { return INVISIBLE; }
end         { return END; }
{id}        { 
              /*if(yylval.cmd = keyword(yytext)){
                return yylval.cmd;
              }*/

              yylval.string = strdup(yytext); 
              return ID;
            }
{nl}        { lineno++; }
.           { return yytext[0]; }

%%
/*
 * keyword: Take a text string and determine if it is , in fact, a valid 
 * keyword. If it is , return the value of the keyword; 
 * if not, return zero. The token values must be nonzero.
 */
static struct keyword{
    char *name; /* text string */
    int   value; /* token */
} keywords[] = {
    "screen", SCREEN,
    "title",    TITLE,
    "item",     ITEM,
    "command",  COMMAND,
    "action",   ACTION,
    "execute",  EXECUTE,
    "menu",     MENU,
    "quit",     QUIT,
    "ignore",   IGNORE,
    "attribute",ATTRIBUTE,
    "visible",  VISIBLE,
    "invisible",INVISIBLE,
    "end",      END,
    NULL,       0,
};

int keyword(char* string){
    struct keyword *ptr = keywords;

    while(ptr->name != NULL){
        if(strcmp(ptr->name, string) == 0){
            return ptr->value;
        }else{
            ptr++;
        }
    }

    return 0; /* no match */
}

