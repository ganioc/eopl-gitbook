#include <stdio.h>
#include <stdlib.h>
#include <string.h>


extern FILE *yyout;

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
    printf("=================================\n");
    printf("%s\n", name);
    printf("=================================\n");
}