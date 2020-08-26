//
// Created by admin on 2020/8/25.
//

#include <stdio.h>
#include <stdlib.h>

//define称为宏定义，一般形式为 #define 标识符 常量
//# define PI 3.14159
typedef char ElementType;
typedef struct TreeNode *BinTree;

//定义二叉树
struct TreeNode {
    ElementType Data;
    BinTree Left;
    BinTree Right;
};

void CreateBiTree(BinTree *T) {
    char ch;
    //读入输入的字符
    scanf("%c", &ch);
    if(ch == '#') {
        *T = NULL;
    }else{
        //申请结点空间
        *T = (BinTree)malloc(sizeof(struct TreeNode));
        //处理申请空间失败问题
        if(!*T) {
            exit(-1);
        }
        //开始往二叉树里添加元素
        (*T)->Data = ch;
        //往二叉树的左边结点添加元素,递归调用
        CreateBiTree(&(*T)->Left);
        CreateBiTree(&(*T)->Right);
    }
}

void PreOrderTraverse(BinTree T) {
    if(T) {
        printf("%3c", T->Data);
        PreOrderTraverse(T->Left);
        PreOrderTraverse(T->Right);
    }
}

void InOrderTraverse(BinTree T)
{
    if(T){
        PreOrderTraverse(T->Left);
        printf("%3c", T->Data);
        PreOrderTraverse(T->Right);
    }
}

void PostOrderTraverse(BinTree T)
{
    if(T){
        PreOrderTraverse(T->Left);
        PreOrderTraverse(T->Right);
        printf("%3c", T->Data);
    }
}

void test() {
    printf("Hello world");
}

