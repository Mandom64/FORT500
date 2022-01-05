CC=gcc
CFLAGS= -g -Wall -Wextra -std=c99
 

compiler: tokens.h
	flex compiler.l
	bison -v -d syntax.y 
	gcc -o hashtable\hashtbl.o -c hashtable\hashtbl.c
	gcc syntax.tab.c lex.yy.c hashtable\hashtbl.o -lm
	./a.exe Testcase\fort500test2.f