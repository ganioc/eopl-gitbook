/* Handwritten scanner for calculator */

#include <stdio.h>
#include "calculator.tab.h"

FILE **yyin;
static int seeneof = 0;

int yylex(void){
    if(!yyin){
        yyin = stdin;
    }
    if(seeneof){
        return 0;
    }

    while (1)
    {
        /* code */
        int c = getc(yyin);

        if(isdigit(c)){
            int i = c - '0';

            // 这段代码不错!
            while(isdigit(c = getc(yyin))){
                i = (10*i) + c - '0';
            }
            yylval = i;
            if(c == EOF){
                seeneof = 1;
            }else{
                ungetc(c, yyin);
            }
            return NUMBER;
        }

        switch (c)
        {
        case '+':
            /* code */
            return ADD;
        case '-':
            return SUB;
        case '*':
            return MUL;
        case '|':
            return ABS;
        case '(':
            return OP;
        case ')':
            return CP;
        case '\n':
            return EOL;
        case ' ':
        case '\t':
            break;
        case EOF:
            return 0;
        case '/':
            c = getc(yyin);
            if(c == '/'){
                while ((c=getc(yyin)) != '\n')
                {
                    /* code */
                    if (c == EOF){
                        return 0;
                    }
                }
                break;
            }
            if(c == EOF){
                seeneof = 1;
            }else{
                ungetc(c,yyin);
            }
            return DIV;
        default:
            yyerror("Myster character %c\n", c);
            break;
        }
    }
    
}

