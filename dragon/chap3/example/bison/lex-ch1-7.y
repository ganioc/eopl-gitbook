%{
/* A lexer for the basic grammar to use for recognizing English sentences. */
#include <stdio.h>

%}
%token NOUN PRONOUN VERB ADVERB ADJECTIVE PREPOSITION CONJUNCTION
%%
sentence: subject VERB object { printf("Sentence is valid.\n"); }
    ;
subject: NOUN
    | PRONOUN
    ;
object: NOUN
    ;
%% 
extern FILE *yyin;

void main(){

    while(!feof(yyin)){
        yyparse();
    }
}

void yyerror(char *s){
    fprintf(stderr, "%s\n", s);
}
