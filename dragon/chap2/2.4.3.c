/*
在production的右侧不能出现左侧的表达式,
a predictive parser,

S -> '0' R
R -> S '1' | 1


*/

#include <stdio.h>

int token;

int gettoken(){
    return token = getchar();
}

void r(void);
void s(void){
    if(token != '0'){
        fprintf(stderr, "Syntax error.\n");

    }
    else{
        gettoken();
        r();
    }
}

void r(void){
    switch (token)
    {
    case  '0':
        s();
        if(token != '1'){
            fprintf(stderr, "Syntax error.\n");
            return;
        }
        gettoken();
        break;
    case '1':
        gettoken();
        break;
    default:
        fprintf(stderr, "Syntax error.\n");
        return;
        break;
    }
}

#include <stdio.h>

int main(){
    printf("2.4.3 run\n");
    printf("Please enter expressions according to the following grammar:\n");
    printf("S -> '0' S '1' | '0' '1'\n");

    while(1){
        printf("> ");
        fflush(stdout);
        gettoken();
        s();
    }

    return 0;
}