#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

extern FILE *yyout;
extern void warning(char*s, char *t);

static int done_start_init = 0;

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
void start_screen(char *name){
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
    

}

