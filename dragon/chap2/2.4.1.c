/*
2.4,


Some example input:
    > ++++aaaaa
    > +++--+-+-+-+-+++-a-aaaaaaaaaaaaaaaaaa
    > 

*/

#include <stdio.h>

// the lookahead symbol
int token;

int gettoken(void){
    return token = getchar();
}
// the expression : s, S, 
void s(void){
    if(token == 'a'){
        gettoken();
    }
    else if( token == '+' || token == '-' ){
        gettoken();
        s();
        s();
    }
    else{
        fprintf(stderr, "Syntax error.\n");
    }
}

int main(){
    printf("2.4.1 run\n");

    printf("S -> '+' S S | '-' S S | 'a' \n");

    while(1){
        printf("> ");
        fflush(stdout);
        gettoken();
        s();
    }

    return 0;
}