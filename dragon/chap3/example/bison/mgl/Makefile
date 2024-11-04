
LEX = lex 
YACC = yacc 
CC = gcc -DYYDEBUG=1

.PHONY: clean 

a.out: y.tab.o lex.yy.o
	$(CC) -o $@ $^ -lfl -lm

y.tab.o: y.tab.c

y.tab.c: mgl-1.y
	$(YACC) -d $^

lex.yy.o: lex.yy.c

lex.yy.c: mgl-1.l y.tab.h
	$(LEX) mgl-1.l
 
clean:
	@rm a.out *.o 
	@rm y.tab.h y.tab.c lex.yy.c


