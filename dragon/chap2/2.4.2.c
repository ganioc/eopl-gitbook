/*
避免left recursive, 否则会无穷调用, 
将之转换为right recursive,

A -> Aa | B,

等效于:
A -> BR
R -> aR | epsilon

S -> R
R -> '(' S ')' S | epsilon

*/
#include <stdio.h>

int token;

int gettoken(void){
    return token = getchar();
}

void r(void);
void s(void){
    r();
}

void r(void){
    if(token != '('){
        return; /* R -> epsilon */
    }
    gettoken();

    s();

    if(token != ')'){
        fprintf(stderr, "Syntax error.\n");
        return;
    }
    gettoken();
    s();
}

int main(){
    printf("2.4.2 run\n");
    printf("Please enter expressions according to the following grammar:\n");

    printf("S -> S '(' S ')' S | epsilon\n");

    while(1){
        printf("> ");
        fflush(stdout);
        gettoken();
        s();
    }

    return 0;
}
