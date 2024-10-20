
%option noyywrap debug

%{
#include <stdio.h>
#include <stdlib.h>
const char *yylval = NULL;
enum token_e { token_goto = 1, token_identifier };
%}
%%
go" "*to                return token_goto;
[a-zA-Z_][a-zA-Z0-9_]*  yylval = yytext; return token_identifier;
" "                     /* Do nothing  */;
%%
int main(void){
    enum token_e token;

    while((token = yylex())){
        if (token == token_goto){
            printf("Saw a goto.\n");
        }
        else if(token == token_identifier){
            printf("Saw an identifier (%s).\n", yylval);
        }

    }
    printf("End of file.\n");
    return 0;
}

