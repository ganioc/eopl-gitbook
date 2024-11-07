#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "y.tab.h"  

/* macros */
#define SCREEN_SIZE     80

extern FILE *yyout;
extern void warning(char*s, char *t);

/* imprts */
extern int screen_done;
extern char *cmd_str, *item_str, *act_str;

/* exports */
static char current_screen[100];
static int done_start_init = 0;
static int done_end_init;
static int current_line;

struct item
{
    /* data */
    char        *desc; /* item description */
    char        *cmd;   /* command */
    int         action; /* action to take */
    char        *act_str; /* action operation */
    int         attribute; /* visible/invisible */
    struct item *next;  /* next member of list */
    
} *item_list, *last_item;

/*
 * MGL Runtime support code
 * To be copied by MGL to the generated C file.
 */
char *screen_init[] = {
    "/* initialization information */",
    "static int init;\n",
    "#include <curses.h>",
    "#include <sys/signal.h>",
    "#include <ctype.h>\n",
    //"#include \"mglyac.h\"\n",
    "/* structure used to store menu items */",
    "struct item {",
    "\tchar *desc;",
    "\tchar *cmd;",
    "\tint action;",
    "\tchar *act_str; /* execute string */", 
    "\tint (*act_menu)(); /* call appropriate function */",
    "\tint attribute;",
    "};\n",
    0,
};
char *menu_init[] = {
    "menu_init()",
    "{",
    "\tvoid menu_cleanup();\n",
    "\tsignal(SIGINT, menu_cleanup);",
    "\tinitscr();",
    "\tcrmode();",
    "}\n\n",
    "menu_cleanup()",
    "{",
    "\tmvcur(0,COLS-1, LINES-1,0);",
    "\tendwin();",
    "}\n",
    0,
};
char *menu_runtime[]={
    "/* runtime */",
    "",
    "void menu_runtime(struct item *items)",
    "{",
    "\tint visible = 0;",
    "\tint choice = 0;",
    "\tstruct item *ptr;",
    "\tchar buf[BUFSIZ];",
    "",
    "\tfor(ptr=items; ptr->desc != 0; ptr++) {",
    "\t\taddch('\\n');/* skip a line */",
    "\t\tif(ptr->attribute == VISIBLE) {",
    "\t\t\tvisible++;",
    "\t\t\tprintw(\"\\t%d) %s\",visible,ptr->desc);",
    "\t\t}",
    "\t}",
    "",
    "\taddstr(\"\\n\\n\\t\"); /* tab out so it look fine */",
    "\trefresh();",
    "",
    "\tfor(;;)",
    "\t{",
    "\t\tint i, nval;",
    "",
    "\t\tgetstr(buf);",
    "",
    "\t\t/* numeric choic? */",
    "\t\tnval = atoi(buf);",
    "",
    "\t\t/* command choice ? */",
    "\t\ti = 0;",
    "\t\tfor(ptr = items; ptr->desc != 0; ptr++){",
    "\t\t\tif(ptr->attribute != VISIBLE)",
    "\t\t\t\tcontinue;",
    "\t\t\ti++;",
    "\t\t\tif(nval == i)",
    "\t\t\t\tbreak;",
    "\t\t\tif(!casecmp(buf,ptr->cmd))",
    "\t\t\t\tbreak;",
    "\t\t}",
    "",
    "\t\tif(!ptr->desc)",
    "\t\t\tcontinue;\t/* no match */",
    "",
    "\t\tswitch(ptr->action)",
    "\t\t{",
    "\t\tcase QUIT:",
    "\t\t\treturn 0;",
    "\t\tcase IGNORE:",
    "\t\t\trefresh();",
    "\t\t\tbreak;"
    "\t\tcase EXECUTE:",
    "\t\t\trefresh();",
    "\t\t\tsystem(ptr->act_str);",
    "\t\t\tbreak;",
    "\t\tcase MENU:",
    "\t\t\trefresh();"
    "\t\t\t(*ptr->act_menu)();",
    "\t\t\tbreak;",
    "\t\tdefault:",
    "\t\t\tprintw(\"default case, no action\\n\");",
    "\t\t\trefresh();",
    "\t\t\tbreak;"
    "\t\t}",
    "\t\trefresh();"
    "\t}",
    "}",
    "",
    "int casecmp(char *p, char *q)",
    "{",
    "\tint pc, qc;",
    "",
    "\tfor(; *p != 0; p++, q++) {",
    "\t\tpc = tolower(*p);",
    "\t\tqc = tolower(*q);",
    "",
    "\t\tif(pc != qc)",
    "\t\t\tbreak;",
    "\t}",
    "\treturn pc-qc;",
    "}",
    0,
};




/*
 * print to screen for debug purpose.
*/
void print_screen(char *name){
    printf("=================================\n");
    printf("%s\n", name);
    printf("=================================\n");
}
void cfree(char *p){
    if(p){
        free(p);
    }
}
/*
 * Check a name to see if it has already been used. If 
 * not , return 1; otherwise , return 0. This routine also
 * squirrels away the name for future reference. Note that 
 * this routine is purely dynamic. It would be easire to 
 * just set up a static array, but less flexible. 
*/
int check_name(char *name){
    static char **names = 0;
    static int name_count = 0;
    char **ptr, *newstr; 

    if(!names){
        names = (char **)malloc(sizeof(char *));
        *names = 0;
    }

    ptr = names;
    while(*ptr){
        if(strcmp(name, *ptr++) == 0){
            return 0;
        }
    }

    /* not in use */
    name_count++;
    names = (char **)realloc(names, (name_count+1)*sizeof(char *));
    names[name_count] = 0;
    newstr = strdup(name);
    names[name_count - 1] = newstr;
    return 1;
}

/*
 * this routine takes a null-terminated list of strings
 * and prints them on the standard out. Its sole purpose
 * in life is to dump the big static arrays making up the 
 * runtime code for the menus generated.
*/
void dump_data(char **array){
    while(*array){
        fprintf(yyout, "%s\n", *array++);
    }
}
/*
 * this routine writes out the run-time support
*/
void end_file(){
    dump_data(menu_runtime);
}

/*
 * start_screen: 
 * This routine begins preparation of the screen. It 
 * writes the preamble and modifies the global state
 * variable screen_done to show that a screen is in 
 * progress (thus, if a screen is in progress when EOF
 * is seen, an appropriate error message can be given).
 */
int start_screen(char *name){
    long tm = time((long *)0);

    if(!done_start_init){
        fprintf(yyout, 
            "/*\n Generated by MGL: %s \n*/\n\n\n",
            ctime(&tm));
        dump_data(screen_init);
        done_start_init = 1;
    }

    if(check_name(name) == 0){
        warning("Reuse of name", name);
    }

    fprintf(yyout, "/* screen %s */\n", name);
    fprintf(yyout, "void menu_%s()\n{\n", name);
    fprintf(yyout, "\textern struct item menu_%s_items[];\n\n",
        name);
    fprintf(yyout, "\tif(!init) menu_init();\n\n");
    fprintf(yyout, "\tclear();\n\trefresh();\n");

    if(strlen(name) > sizeof(current_screen)) {
        warning("Screen name is larger than the buffer", (char*)0);
    }

    strncpy(current_screen, name, sizeof(current_screen) - 1);

    screen_done = 0;
    current_line = 0;

    return 0;
}

/*  add_title 
 * add centered text to screen code.
*/
void add_title(char *line){
    int length = strlen(line);
    int space = (SCREEN_SIZE - length)/2;

    fprintf(yyout, "\tmove(%d,%d);\n", current_line, space);
    current_line++;
    fprintf(yyout,"\taddstr(\"%s\");\n",line);
    fprintf(yyout, "\trefresh();\n");
}

/* add_line:
 * Add a line to the actions table. It will be written
 * out after all lines have been added. Note that some
 * of the information is in global variables. 
*/
void add_line(int action, int attrib){
    struct item *new; 

    new = (struct item *)malloc(sizeof(struct item));
    
    if(!item_list){
        /* first item */
        item_list = last_item = new;
    }else{
        /* already items on the list */
        last_item->next = new;
        last_item = new; 
    }

    new->next = NULL; /* mark end of list */
    new->desc = item_str;
    new->cmd = cmd_str;
    new->action = action;

    switch (action)
    {
    case EXECUTE:
        /* code */
        new->act_str = act_str;
        break;
    case MENU:
        new->act_str = act_str;
        break;
    default:
        new->act_str = 0;
        break;
    }
    new->attribute = attrib;
}
/* process_items:
 * Walk the list of menu items and write them to an 
 * external initialized array. Also defines the symbolic
 * constant used for the run-time support module (which
 * is below this table).
*/
void process_items(void ){
    int cnt = 0;
    struct item *ptr;

    if(item_list == 0){
        return; /* nothing to do */
    }
    fprintf(yyout, "struct item menu_%s_items[]={\n",
        current_screen);
    ptr = item_list;

    /* climb through the list */
    while(ptr){
        struct item *optr;

        if(ptr->action == MENU){
            fprintf(yyout,
                "{\"%s\",\"%s\",%d,\"\",%s,%d},\n",
                ptr->desc,ptr->cmd,ptr->action,
                ptr->act_str, ptr->attribute
                );
        }else{
            fprintf(yyout,
                "{\"%s\",\"%s\",%d,\"%s\",0,%d},\n",
                ptr->desc,ptr->cmd,ptr->action,
                ptr->act_str?ptr->act_str:"",
                ptr->attribute);
        }
        cfree(ptr->desc);
        cfree(ptr->cmd);
        cfree(ptr->act_str);
        optr = ptr;
        ptr = ptr->next;
        free(optr);
        cnt++;
    }
    fprintf(yyout,
        "{(char *)0,(char *)0, 0, (char *)0, 0, 0},\n");
    fprintf(yyout, "};\n\n");
    item_list = 0;

    /* next the run-time module that does all the work */
}
/* end_screen:
 * Finish screen, print out postamble. 
*/
void end_screen(char *name){
    fprintf(yyout, "\tmenu_runtime(menu_%s_items);\n",
        name);

    if(strcmp(current_screen, name) != 0){
        warning("name mismatch at end of screen",
            current_screen);
    }

    fprintf(yyout, "}\n");
    fprintf(yyout, "/* end %s */\n", current_screen);

    process_items();

    /* write initialization code out to file */
    if(!done_end_init){
        done_end_init = 1;
        dump_data(menu_init);
    }

    current_screen[0] = '\0'; /* no current screen */

    screen_done = 1;

}
