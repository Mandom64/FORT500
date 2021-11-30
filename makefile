CC=gcc
CFLAGS= -g -Wall -Wextra -std=c99
 

compiler: tokens.h
	flex compiler.l
	bison -v -d syntax.y 
	gcc -o hashtbl.o -c hashtbl.c
	gcc syntax.tab.c lex.yy.c hashtbl.o -lm
	./a.exe fort500test2.f