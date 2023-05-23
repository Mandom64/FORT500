# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra

# Source files
LEX_FILE = lexer.l
YACC_FILE = parser.y
HASHTABLE_FILE = hashtable/hashtbl.c
C_FILES = lex.yy.c parser.tab.c 
OBJ_FILES = $(C_FILES:.c=.o)
TARGET = parser

# Targets
all: $(TARGET) 

$(TARGET): $(C_FILES) hashtable/hashtbl.o tokens.h 
	$(CC) $(CFLAGS) -o $@ $^ -lfl -lm 
	@echo "Build complete."

lex.yy.c: $(LEX_FILE)
	flex $<

parser.tab.c: $(YACC_FILE)
	bison -v -d $<

hashtable/hashtbl.o: $(HASHTABLE_FILE)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f \
	$(OBJ_FILES) \
	$(C_FILES) \
	$(TARGET) \
	$(YACC_FILE:.y=.tab.c) \
	$(YACC_FILE:.y=.tab.h) \
	$(YACC_FILE:.y=.h) \
	$(YACC_FILE:.y=.output) \
	hashtable/hashtbl.o


