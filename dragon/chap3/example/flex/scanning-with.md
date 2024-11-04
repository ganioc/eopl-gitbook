# Scanning with Flex

## Looking for Tokens

When processing texts written in formal languages (such as programming languages, mark up languages, etc.), finding keywords is not enough: you also need to recognize numbers, identifiers, strings etc. We will name token or lexeme a series of characters which must be grouped together into a "word". For instance the following C snippet:

const char *cp = "Foo";
is composed of seven tokens: const, char, *, cp, =, "Foo", and ;. We excluded the white characters because they are not relevant in C, their purpose is limited to separating the tokens (compare const char to constchar).

Keywords, operators (which are nothing else but non alphabetic keywords) are tokens, and we saw that Gperf is a fine tool to recognize keywords, see Scanning with Gperf. Nevertheless, as demonstrated in the numeral example, it does not help us segmenting the input into tokens, which we handled thanks to strpbrk and strspn (see example 6.4). A better tool could have assisted us in such a task.

Contrary to the keywords, there are infinitely many tokens: you may write infinitely many different strings, infinitely many identifiers etc. Again, we are hitting a limitation of Gperf: it will never be able to recognize strings.

Worse yet! It cannot help us recognize some keywords. Some languages allow for goto written with arbitrarily many spaces between go and to! Of course, we could teach it goto on the one hand, and then go and to on the other hand, but it would be so much easier to be able to specify that a token GOTO can be written as go, then any number of spaces including none, then to...

Clearly, the technology used by Gperf cannot answer such a problem: peeking at fixed places within a string no longer makes sense if the string can have any length. Nevertheless, we exposed a technique that might help, see example 6.1. If we relax the constraint of building a tree, i.e., if we allow cycles in our construct, then we can build a fast GOTO recognizer:

                        ,--.
                        |  ^
                        |  | ` '
                        v  |
   ,---. `g' ,---. `o' ,----. `t' ,-----. `o' ,------.
-->|   |---->| g |---->| go |---->| got |---->| goto |-->
   `---'     `---'     `----'     `-----'     `------'
Example 6.6: A Fast GOTO Recognizer


Such small recognizers are named Finite State Recognizers1, FSR, each node being named a state, and each labeled arrow a transition.

It is one of the most beautiful results in computer size that one can always write an FSR for all the keywords, identifiers, numbers etc. For instance, identifiers usually look like:

                  ,--.
                  |  ^ letter
                  |  | digit
                  v  |  `_'
   ,---. letter  ,---.
-->|   |-------->|   |--->
   `---'  `_'    `---'
Example 6.7: A Fast Identifier Recognizer


In other words, it must start with one letter or an underscore, and can be followed by any number of letter, digit or underscore, including zero.

All this independent FSR can be grouped together into a bigger one:

               ,--.
               |  ^ letter
               |  | digit
               v  |  `_'
              ,---.
   letter ,-->|   |-->
     `_' /    `---'
        /
   ,---/                 ,--.
-->|   |                 |  ^
   `---\                 |  | ` '
        \                v  |
     `g' \    ,---. `o' ,----. `t' ,-----. `o' ,------.
          `-->| g |---->| go |---->| got |---->| goto |-->
              `---'     `----'     `-----'     `------'
Example 6.8: A Fast Nondeterministic GOTO and Identifier
Recognizer
Recognizer

Obviously there is a competition between the two branches of this FSR: from the initial state, upon g, it may go in either the identifier or GOTO branch. This FSR is said to be nondeterministic: it may perform choices at runtime. It recognizes a word if and only if one of its possible executions reaches an exiting arrow. It is another most beautiful result in computer science that there is a deterministic FSR that recognize exactly the same set of words. Better yet: one can build it from the nondeterministic automaton:

                                                  ,--.
                                                  |  ^
                                                  |  | .
                                                  v  |
    letter but `g'                               ,---.
          ,-----+---------+-----------+--------->|   |-->
     `_' /      ^         ^           ^          `---'
        /       |         |           |            ^
   ,---/        |         |           |            |
-->|   |        | [^o]    | [^t]      | [^o]       | .
   `---\        |         |           |            |
        \       |         |           |            |
     `g' \    ,---. `o' ,----. `t' ,-----. `o' ,------.
          `-->| g |---->| go |---->| got |---->| goto |-->
              `---'     `----\     `-----'     `------'
                              \` '
                               \    ,----. `t' ,-----. `o' ,------.
                                `-->| go |---->| got |---->| goto |-->
                                    `----'     `-----'     `------'
                                     ^  |
                                     |  | ` '
                                     |  v
                                     `--'
Example 6.9: A Fast Deterministic GOTO and Identifier
Recognizer
Recognizer

where . stands for "any letter, digit or underscore", and [^o] for "any letter, digit or underscore but o". This deterministic automaton is a very efficient token recognizer.


Our goal is ultimately to design a tool that can build this automaton for us, therefore we need a convenient notation to describe the tokens. It turns out that regular expressions are as powerful as FSRs are. In other words, the language, the set of words recognized by an automaton can always be described by a regular expression, and conversely, for any regular expression there exists a deterministic FSR which recognizes its language.

For instance, goto is a perfect description of the word goto: in regular expressions most characters represent themselves. In addition, the star, *, is used to denote the repetition of the previous regular expression. For instance, * denotes any number of spaces, including none; the regular expression go *to denotes the same language as that recognized by the automaton of example 6.6.

We also need to express a choice, for instance, to be able to describe that all the identifiers start with a letter or an underscore. The operator | denotes the alternative, and as usual, parentheses, ( ), allow for changing the precedence. For instance a|b|c|d|e|f denotes one character amongst a, b, c, d, e, f, a|b|c|d|e|f* represent a single a, or a b, or a c, or a d, or a e, or any number of f including none, and (a|b|c|d|e|f)* denotes any string written with a, b, c, d, e, f, including the empty string.

This notation is inconvenient for character alternatives, therefore we introduce some abbreviations: [abcdef] stands for (a|b|c|d|e|f), and [a-f] stands for [abcdef]. Therefore, the language recognized by the automaton of the example 6.7 can be represented as [a-zA-Z_][a-zA-Z0-9_]*. Finally, go *to|[a-zA-Z_][a-zA-Z0-9_]* denotes the language recognized by the FSRs of example 6.8 and of example 6.9.


When recognizing a keyword, getting a structure associated to it, as with Gperf, see Advanced Use of Gperf, is very convenient, but in the case an identifier, you want to know (i) it is an identifier, and (ii), which one. When reading an integer, i.e., a word written with digits, you don't want to get its textual representation, but rather a genuine int containing its value. Finally, you don't even want to hear about spaces, since they are just separators.

Therefore, it will be more convenient to associate actions to regular expressions, rather than structures. These actions will rely on return to declare that something was recognized and to say what; typically there will be no return associated to spaces since they are meaningless. To cope with identifiers and integers which, in addition to their type, have a value, these actions will be provided with two variables, yytext pointing to the beginning of the string which was recognized, and yyleng, holding its length. Then the action is free to compute whatever is wanted, for instance converting a string of digits into an actual int, and then to provide the environment with it via, for instance, a global variable. It is customary to name this global yylval.

Each pair of regular expression/action will be listed one a single line, separated by spaces. Using braces will allow for longer actions, and using " " allow for denoting a space which is not a separator.

It will be more convenient for us if it read directly from a file, the standard input by default, instead of a string. It then needs a means to inform us that it finished reading the input; returning 0 will do, but keep this in mind when numbering the tokens. Finally, recognition and actions will be embedded in a routine, which we will name yylex. We will use the same file layout as in Gperf, see example 6.2.

%{
#include <stdio.h>
#include <stdlib.h>
const char *yylval = NULL;
enum token_e { token_goto = 1, token_identifier };
%}
%%
go" "*to                return token_goto;
[a-zA-Z_][a-zA-Z0-9_]*  yylval = yytext; return token_identifier;
" "                     /* Do nothing. */;
%%
int
main (void)
{
  enum token_e token;
  while ((token = yylex ()))
    if (token == token_goto)
      printf ("Saw a goto.\n");
    else if (token == token_identifier)
      printf ("Saw an identifier (%s).\n", yylval);
  printf ("End of file.\n");
  return 0;
}
Example 6.10: goid.l -- A GOTO and Identifier Flex Recognizer


This turns out to be perfectly valid Flex source which we can immediately compile:

$ flex -ogoid.c goid.l
$ gcc -Wall -W goid.c -lfl -o goid
error-->goid.c:976: warning: `yyunput' defined but not used
for the time being, forget about -lfl and the warning, just try goid:

$ echo 'gotoo goto go to' | ./goid
Saw an identifier (gotoo).
Saw a goto.
Saw a goto.

End of file.
You may wonder why gotoo is not recognized as a GOTO followed by the identifier o. Our input file relies on a fundamental rule in Lex matching: if several patterns match the current input, the longest wins, and if several patterns match the same number of characters, then the topmost one wins. This explains why the second goto is recognized as a GOTO and not as an identifier although it does look like one: always write the most generic rule last.

You may also wonder where the spurious empty line comes from. Flex provides a default action for any character which is not caught by the scanner: echoing it to its output. Our scanner has no rule for the newline character, hence it is output.

Notes en bas de page
You may also find Finite State Machine, or Automaton, which is less specific since not all automata are recognizers: some are generators and generate words, and others are transducers and transform words.