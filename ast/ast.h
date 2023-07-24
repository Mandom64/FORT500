#ifndef AST_H
#define AST_H

typedef struct ASTnode ASTnode;

ASTnode *createASTnode(char data);
void preorder(ASTnode *root);

struct ASTnode{
    char data;
    ASTnode *left;
    ASTnode *right;
};



#endif // AST_H