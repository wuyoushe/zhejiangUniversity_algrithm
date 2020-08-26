//
// Created by admin on 2020/8/25.
//

#include <stdio.h>
#include <stdlib.h>

//define称为宏定义，一般形式为 #define 标识符 常量
//# define PI 3.14159
typedef char ElementType;
//为*T取别名BitTree
typedef struct TreeNode *BinTree;

//定义二叉树
struct TreeNode {
    ElementType Data;
    BinTree Left;
    BinTree Right;
};

//大话数据结构上的二叉树的二叉链表结点的结构定义
//typedef struct BiTNode{
//ElementType data;
//struct BiTNode *lchild, *rchild;
//
// }BitNode, *BiTree 相当于为BitNode取别名为BitNode, 为BiTNode* 取别名为BiTree

//BinTree *T，*T是指向BitNode的指针
//流程图详解
//输入ABDG##H###CE#I##F##
//每递归调用一次，当输入A时 A != '#'，判断语句进入else,先动态分配内容，将A赋值给第一个结点（*T）->Data
//然后递归的调用CreateBiTree()函数，
//当输入为#时，直接*T = NULL，没分配内存，该结点创建失败。
void CreateBiTree(BinTree *T) {
    char ch;
    //读入输入的字符
    scanf("%c", &ch);
    if(ch == '#') {
        *T = NULL;
    }else{
        //申请结点空间 T是BiTNode**类型, *T是指向BiTNode的指针
        *T = (BinTree)malloc(sizeof(struct TreeNode));
        //处理申请空间失败问题
        if(!*T) {
            exit(-1);
        }
        //开始往二叉树里添加元素
        (*T)->Data = ch;
        //往二叉树的左边结点添加元素,递归调用
        //创建&(*T)->Left临时变量，传入CreateBiTree构造左子树
        //操作*T相当于操作双亲节点Left或Right （Left或Right的地址作为实参传递给形参T）
        //之所以CreateBiTree(&(*T)->Left)是因为要传当前节点Left,(*T)->Left的地址 &(*T)->Left给调用者CreateBiTree
        CreateBiTree(&(*T)->Left);
        CreateBiTree(&(*T)->Right);
        //相当于
        //BiTNode **p1;
        //p1 = &((*T)->Left) 不能直接 p1 = &lchild
        //CreateBiTree(p1)
        //BiTNode **p2;
        //p2 = &((*T)->Right)
        //CreateBiTree(p2)
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

