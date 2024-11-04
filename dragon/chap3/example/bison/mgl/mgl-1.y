%{
#include <stdio.h>

int lineno=0;
void yyerror(char *s);
int yylex();
%}
%union{
    char *string; /* string buffer */
}
%token COMMAND ACTION IGNORE EXECUTE ITEM
%token <string> QSTRING

%%

/* start: COMMAND action 
    ;
    */
item: ITEM command action 
    ;
command: /* empty */
    | COMMAND
    ;
action: ACTION IGNORE
    | ACTION EXECUTE QSTRING
%%

void yyerror(char *s){
    fprintf(stderr, "error: %s\n", s);
}

void main(){
    yyparse();
}

