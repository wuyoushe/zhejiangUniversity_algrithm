#include <stdio.h>

#include "BinaryTree.c"

int main() {
    printf("Hello, Felton!\n");
    BinTree T;
    printf("���������д���������...\n");
    CreateBiTree(&T);
    test();
    PreOrderTraverse(T);
    printf("\n");
    InOrderTraverse(T);
    printf("\n");
    PostOrderTraverse(T);
    return 0;
}
