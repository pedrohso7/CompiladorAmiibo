yacc:
	bison -dy calc.y

lex:
	lex lex.l

gcc:
	gcc -oTP2 lex.yy.c y.tab.c -ll

all:
	bison -dy -t translate.y
	lex lex.l
	gcc -oTP2 lex.yy.c y.tab.c -lm 

run: 
	./TP2

file:
	./TP2 < entrada.txt