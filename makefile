# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra

# Source files
LEX = lexer.l
YACC = parser.y
HASHTABLE = hashtable/hashtbl.c
C_FILES = lex.yy.c parser.tab.c 
OBJ_FILES = $(C_FILES:.c=.o)
TARGET = parser

# Targets
all: $(TARGET) 

$(TARGET): $(OBJ_FILES) hashtable/hashtbl.o tokens.h
	$(CC) $(CFLAGS) -o $@ $^ -lfl -lm
	@echo "Build complete."

lex.yy.c: $(LEX) parser.tab.h
	flex $<

parser.tab.c parser.tab.h: $(YACC)
	bison -v -d $<

hashtable/hashtbl.o: $(HASHTABLE)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f \
	$(OBJ_FILES) \
	$(C_FILES) \
	$(TARGET) \
	$(YACC:.y=.tab.c) \
	$(YACC:.y=.tab.h) \
	$(YACC:.y=.h) \
	$(YACC:.y=.output) \
	hashtable/hashtbl.o


