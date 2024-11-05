%{
#include <stdio.h>

int lineno=0;

void warning(char*s, char *t);
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
char *progname = "mgl";

void yyerror(char *s){
    fprintf(stderr, "error: %s\n", s);
}

void warning(char*s, char *t){
    fprintf(stderr, "%s: %s", progname, s);
    if(t){
        fprintf(stderr, " %s", t);
    }
    fprintf(stderr, " line %d\n", lineno);
}

void main(){
    yyparse();
}

