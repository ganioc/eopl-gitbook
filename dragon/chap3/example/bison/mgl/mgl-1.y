%{
#include <stdio.h>

int lineno=0;
void yyerror(char *s);
int yylex();
%}
%token COMMAND

%%

start: COMMAND
    ;

%%

void yyerror(char *s){
    fprintf(stderr, "error: %s\n", s);
}

void main(){
    yyparse();
}

