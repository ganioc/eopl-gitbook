
a.out: calculator.l calculator.y
	bison -d calculator.y
	flex calculator.l
	gcc -o $@ calculator.tab.c lex.yy.c -lfl

