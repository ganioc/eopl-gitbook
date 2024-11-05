
LEX = flex 
YACC = bison 
CC = gcc -DYYDEBUG=1

LDPATH =  -L/usr/lib
INCPATH = -I/usr/include

#VPATH=/usr/lib

.PHONY: clean 

a.out: y.tab.o lex.yy.o
	$(CC) -g -o $@ $^ $(INCPATH) $(LDPATH) -lfl -lm

y.tab.o: y.tab.c

y.tab.c: mgl-1.y
	$(YACC)  $^ -d -o y.tab.c

lex.yy.o: lex.yy.c

lex.yy.c: mgl-1.l y.tab.h
	$(LEX) mgl-1.l
 
clean:
	@rm -f a.out *.o 
	@rm -f y.tab.h y.tab.c lex.yy.c 


