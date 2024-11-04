%{

#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/* maximum number of symbols */
#define NSYMS 20 

struct symtab
{
    /* data */
    char *name;
    double (*funcptr)();
    double value;
}symtb[NSYMS];

// struct symnab *symlook();
struct symtab* symlook(char *s);
int yylex();
void yyerror(char *s);

%}

%union {
    double dval;
    struct symtab *symp;
}
%token <symp> NAME
%token <dval> NUMBER
%left '-' '+'
%left '*' '/'
%nonassoc UMINUS

%type <dval> expression
%%
statement_list: statement '\n'
    | statement_list statement '\n'
    ;
statement: NAME '=' expression { $1->value = $3; }
    | expression { printf("= %g\n", $1); }
    ;
expression: expression '+' expression { $$ = $1 + $3; }
    | expression '-' expression { $$ = $1 - $3; }
    | expression '*' expression { $$ = $1 * $3; }
    | expression '/' expression { 
        if($3 = 0.0){
            yyerror("Divide by zero");
        }else{
            $$ = $1 / $3; }
        }
    | '-' expression %prec UMINUS { $$ = -$2; }
    | '(' expression ')' { $$ = $2; }
    | NUMBER
    | NAME  { $$ = $1->value; }
    | NAME '(' expression ')' {
            if($1->funcptr){
                $$ = ($1->funcptr)($3);
            }else{
                printf("%s is not a function\n", $1->name);
                $$ = 0.0;
            }
        }
    ;
%%

void yyerror(char *s){
    fprintf(stderr, "error: %s\n", s);
}

/* look up a symbol table entry, add if not present */
struct symtab* symlook(char *s){
    char *p;
    struct symtab *sp;

    for(sp = symtb; sp < &symtb[NSYMS]; sp++){
        /* is it already here */
        if(sp->name && strcmp(sp->name,s)){
            return sp;
        }

        /* is it free , of couse it's at the end */
        if(!sp->name){
            sp->name = strdup(s);
            return sp;
        }
        /* Otherwise continue to next pointer */
    }

    yyerror("too many symbols over sym table capacity");
    exit(1);
}

void addfunc(char* name, double(*func)()){
    struct symtab *sp = symlook(name);
    sp->funcptr = func;
}
void main(){
    extern double sqrt(), exp(), log();

    addfunc("sqrt", sqrt);
    addfunc("exp", exp);
    addfunc("log", log);
    yyparse();
}
        
    

