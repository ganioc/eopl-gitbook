#LEX = flex -I
#YACC = 
LEX = lex 
YACC = yacc 
CC = gcc -DYYDEBUG=1

.phony: clean

a.out: y.tab.o lex.yy.o 
	$(CC) -o $@ y.tab.o lex.yy.o  -ll -lm 

lex.yy.o: lex.yy.c y.tab.h 

# lex.yy.o y.tab.h: ch3hdr2.h

y.tab.c y.tab.h: ch3-05.y 
	$(YACC) -d ch3-05.y 

lex.yy.c: ch3-05.l 
	$(LEX) ch3-05.l

clean:
	rm a.out *.o 

