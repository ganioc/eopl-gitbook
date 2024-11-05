%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int screen_done = 1; /* 1 if done, - otherwise */
int lineno=0;

void warning(char*s, char *t);
void yyerror(char *s);
int yylex();

extern void start_screen(char *name);
extern void end_file();
extern void print_screen(char *name);

#ifdef YYDEBUG
int yydebug = 1;
#endif
%}


%union{
    char *string; /* string buffer */
}
%token COMMAND ACTION IGNORE EXECUTE ITEM TITLE SCREEN END
%token <string> QSTRING ID
%token QUIT MENU ATTRIBUTE VISIBLE INVISIBLE 
%%
screens: /* empty */
    | screens screen 
    ;
screen: screen_name screen_terminator
    | screen_name  screen_contents screen_terminator
    ;
screen_name: SCREEN ID  { 
                print_screen($2); 
                start_screen($2);
            }
    | SCREEN            { 
                print_screen(strdup("default")); 
                start_screen(strdup("default")); 
            }
    ;
screen_terminator: END ID 
    | END
    ;
screen_contents: titles lines
    ;
titles: /* empty */ { print_screen("empty title"); }
    | titles title  
    ;
title: TITLE QSTRING { print_screen($2); }
    ;
lines: /* empty */  { print_screen("empty line"); } 
    | lines line 
    ;
line: ITEM QSTRING command ACTION action attribute
    ;
command: /* empty */ { print_screen("empty command"); }
    | COMMAND ID
    ;
/*action: ACTION IGNORE
    | ACTION EXECUTE QSTRING
    ;
*/
action: EXECUTE QSTRING
    | MENU ID 
    | QUIT      { print_screen("action quit"); }
    | IGNORE
    ;
attribute: /* empty */ { print_screen("empty attribute"); }
    | ATTRIBUTE VISIBLE
    | ATTRIBUTE INVISIBLE
    ;
%%
#define DEFAULT_OUTFILE "screen.out"

char *usage = "%s usage [infile] [outfile]\n";

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

void main(int argc, char **argv){
    char *outfile;
    char *infile;
    extern FILE *yyin, *yyout;

    progname = argv[0];

    if(argc > 3){
        fprintf(stderr, usage, progname);
        exit(1);
    }

    if(argc > 1){
        infile = argv[1];
        /* open for read */
        yyin = fopen(infile, "r");
        if(yyin == NULL){
            fprintf(stderr, "%s can not open %s\n",
                progname, infile);
            exit(1);
        }
    }

    if(argc > 2){
        outfile = argv[2];
    }else{
        outfile = DEFAULT_OUTFILE;
    }

    yyout = fopen(outfile, "w");
    if(yyout == NULL){
        fprintf(stderr,"%s can not open %s\n",
            progname, outfile);
        exit(1);
    }


    /* normal interaction with yyin and yyout */
    yyparse();

    end_file(); /* write out any final information */

    /* check EOF condition */
    if(!screen_done){ /* in the middle of screen */
        warning("Premature EOF", (char *)0);
        unlink(outfile);
        exit(1);
    }
    exit(0);
}

