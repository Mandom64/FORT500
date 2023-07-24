#ifndef AST_C
#define AST_C

#include <stdio.h>
#include <stdlib.h>
#include "ast.h"


ASTnode *createASTnode(char data) {
    ASTnode *new_node = (ASTnode*)malloc(sizeof(ASTnode*));
    if(new_node == NULL) {
        return NULL;
    }

    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

void preorder(ASTnode *root) {
    if(root != NULL) {
        preorder(root->left);
        preorder(root->right);
        printf("%c ", root->data);
    }
}

int main() {
    ASTnode *ast = NULL;
    ast = createASTnode('a');
    preorder(ast);
}

#endif // AST_C