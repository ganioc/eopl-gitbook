
LEX = flex 
YACC = bison 
CC = gcc -DYYDEBUG=1

LDPATH =  -L/usr/lib
INCPATH = -I/usr/include

#VPATH=/usr/lib

.PHONY: clean main

a.out: y.tab.o lex.yy.o screen-1.o
	$(CC) -g -o $@ $^ $(INCPATH) $(LDPATH) -lfl

y.tab.o: y.tab.c

lex.yy.o: lex.yy.c

screen-1.o: screen-1.c

y.tab.c: mgl-1.y
	$(YACC)  $^  -d -o y.tab.c



lex.yy.c: mgl-1.l y.tab.h
	$(LEX) -d mgl-1.l
 
clean:
	@rm -f a.out *.o 
	@rm -f y.tab.h y.tab.c lex.yy.c screen-out.c 

main:
	echo -n "/* main() entry */\n\nvoid main(){\n\tmenu_second();\n\tmenu_cleanup();\n}\n" >> screen-out.c
	gcc -o main.out screen-out.c -lcurses -ltermcap


 
