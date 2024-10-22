%{
    /* word recognizer with a symbol table
        c codes */
    enum {
        LOOKUP = 0,
        VERB,
        ADJ,
        ADV,
        NOUN,
        PREP,
        PRON,
        CONJ
    };

    int state;
    int add_word(int type, char *word);
    int lookup_word(char *word);
%}
%%
\n      { state = LOOKUP; } /* return to default state */

^verb   { state = VERB; }
^adj    { state = ADJ;  }
^adv    { state = ADV; }
^noun   { state = NOUN; }
^prep   { state = PREP; }
^pron   { state = PRON; }
^conj   { state = CONJ; }

[a-zA-Z]+   {
            if(state != LOOKUP){
                /* define the current word */
                add_word(state, yytext);
            }else{
                switch(lookup_word(yytext)){
                    case VERB: printf("%s: verb\n", yytext);
                        break;
                    case ADJ:  printf("%s: adjective\n", yytext);
                        break;
                    case ADV:  printf("%s: adverb\n", yytext);
                        break;
                    case NOUN: printf("%s: noun\n", yytext);
                        break;
                    case PREP: printf("%s: preposition\n", yytext);
                        break;
                    case PRON: printf("%s: pronoun\n", yytext);
                        break;
                    case CONJ: printf("%s: conjunction\n", yytext);
                        break;
                    default:   printf("%s: don't recognize\n", yytext);
                        break;
                }
            }
            }
.       /* ignore anything else */ ;
%%
int main(){
    yylex();
}
/* define a linked list of words and types */
struct word{
    char *word_name;
};

