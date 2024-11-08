%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int   screen_done = 1; /* 1 if done, - otherwise */
char *act_str;  /* extra argument for an action */
char *cmd_str;  /* extra argument for command */
char *item_str; /* extra argument for item description */



void warning(char*s, char *t);
void yyerror(char *s);
int yylex();

extern void start_screen(char *name);
extern void end_file();
extern void print_screen(char *name);
extern void add_line(int action, int attrib);
extern void end_screen(char *name);
extern void add_title(char *line);

#ifdef YYDEBUG
int yydebug = 1;
#endif
%}


%union{
    char *string; /* string buffer */
    int  cmd;     /* command value */
}
%token <cmd> COMMAND ACTION IGNORE EXECUTE ITEM TITLE SCREEN END EMPTY
%token <string> QSTRING ID COMMENT
%token <cmd> QUIT MENU ATTRIBUTE VISIBLE INVISIBLE

%type <cmd> action line attribute command
%type <string> id qstring 

%start screens

%%
screens: /* empty */
    | screens screen 
    ;
screen: screen_name screen_terminator
    | screen_name  screen_contents screen_terminator
    ;
screen_name: SCREEN id { 
                print_screen($2); 
                start_screen($2);
            }
    | SCREEN            { 
                print_screen(strdup("default")); 
                start_screen(strdup("default")); 
            }
    ;
screen_terminator: END id { 
                print_screen($2);
                end_screen($2); 
            }
    | END   {
                end_screen(strdup("default"));
            }
    ;
screen_contents: titles lines
    ;
titles: /* empty */ {   print_screen("empty title"); 
                    }
    | titles title  
    ;
title: TITLE qstring {  print_screen($2); 
                        add_title($2);  }
    ;
lines: /* empty */  { print_screen("empty line"); } 
    | lines line 
    ;
line: ITEM QSTRING command ACTION action attribute
        {
            item_str = $2;
            add_line($5, $6);
            $$ = ITEM; 
        }
    ;
command: /* empty */ { print_screen("empty command");
                        cmd_str = strdup("");  }
    | COMMAND id    { 
            print_screen($2);
            cmd_str = $2; }
    ;
/*action: ACTION IGNORE
    | ACTION EXECUTE QSTRING
    ;
*/
action: EXECUTE qstring {
            print_screen($2);
            act_str = $2;
            $$ = EXECUTE;
        }
    | MENU id {
        /* make menu_$2 */
            act_str = malloc(strlen($2) + 6);
            strcpy(act_str, "menu_");
            strcat(act_str, $2);
            free($2);
            $$ = MENU;
        }
    | QUIT      { print_screen("action quit");
                  $$ = QUIT;  
                }
    | IGNORE    { $$ = IGNORE; }
    ;
attribute: /* empty */ { 
                    print_screen("empty attribute");
                    $$ = VISIBLE;
                    }
    | ATTRIBUTE VISIBLE { 
            print_screen("attribute visible");
            $$ = VISIBLE;  }
    | ATTRIBUTE INVISIBLE { 
            print_screen("attribute invisible");
            $$ = INVISIBLE; }
    ;
id: ID      {  $$ = $1; }
    | QSTRING {
            warning("String literal inappropriate", 
                    (char *)0);
            $$ = $1;  /* but use it anyway */
        }
    ;
qstring: QSTRING {  

            $$ = $1;  }
    | ID {
            warning("Non-string literal inappropriate",
                    (char *)0);
            $$ = $1;   /* but use it anyway */
        }
    ;
%%
#define DEFAULT_OUTFILE "screen.out"

char *usage = "%s usage [infile] [outfile]\n";

char *progname = "mgl";
int lineno=0;

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

