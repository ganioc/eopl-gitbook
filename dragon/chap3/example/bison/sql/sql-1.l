%{
#include <string.h>


int lineno = 1;
void yyerror(char *s);
%}
%%

%e 1200

%%
/* literal keyword tokens */


