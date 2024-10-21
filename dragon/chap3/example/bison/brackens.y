%{ /* -*- C -*- */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <error.h>

static int yylex(void);
static void yyerror(const char *);
#define YYERROR_VERBOSE 1
%}
/* %error-verbose */
%debug
%defines
%output "brackens.c"
%%
expr: '(' expr ')'
    | 'N'
    ;
%%
static const char **args = NULL;

static int yylex(void){
    /* No token stands for the end of file */
    if (!*++args){
        return 0;
    }
    /* Parens stand for themselves. 'N' denotes a number. */
    if (strlen(*args) == 1 && strchr("()N", **args)){
        return **args;
    }
    /* An error */
    error(EXIT_FAILURE, 0, "invalid argument: %s", *args);
    /* Pacify GCC that knows ERROR may return */
    return -1;

}
void yyerror(const char* msg){
    error(EXIT_FAILURE, 0, "%s", msg);
}
int main(int argc, const char*argv[]){
    yydebug = getenv("YYDEBUG")?1:0;
    args = argv;
    return yyparse();
}
