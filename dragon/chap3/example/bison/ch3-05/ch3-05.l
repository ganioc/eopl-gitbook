%{
#include "y.tab.h"
#include <math.h>

struct symtab* symlook(char *s);
%}
%%
([0-9]+|([0-9]*\.[0-9]+)([eE][-+]?[0-9]+)?)  {
    yylval.dval = atof(yytext);
    return NUMBER;
}

[ \t] ; /* ignore whitespace */

[A-Za-z][A-Za-z0-9]* {
    struct symtab *sp = symlook(yytext);
    yylval.symp = sp;
    return NAME;
}

"$" {return 0; }
\n  |
.    return yytext[0];

%%
