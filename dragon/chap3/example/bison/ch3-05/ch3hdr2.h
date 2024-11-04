#pragma once

#include <stdio.h>

/* maximum number of symbols */
#define NSYMS 20 

struct symtab
{
    /* data */
    char *name;
    double (*funcptr)();
    double value;
}symtb[NSYMS];

// struct symnab *symlook();
struct symtab* symlook(char *s);

