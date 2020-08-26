//
// Created by admin on 2020/8/26.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//定义一个栈:回忆栈有线性结构和非线性结构，这里使用非线性结构
//非线性结构需要使用结构体，结构体定义当前节点值域和下一指针的指针域
typedef char ElementType;
typedef struct SNode{
    ElementType data;       //栈的当前节点的值
    struct SNode *Next;     //指向栈的下一个元素
} *Stack;

//堆栈需要一个不包含任何元素的头节点
Stack CreateStack() {
    Stack S = (Stack)malloc(sizeof(struct SNode));
    S->Next = NULL;
    return S;
}

//判断堆栈是否为空
int IsEmpty(Stack S) {
    return (S->Next == NULL);
}

//往堆栈中添加元素
void Push(ElementType item, Stack S) {
    //定义一个临时的结点
    struct SNode *TmpCell;
    //为临时节点申请栈空间
    TmpCell = (Stack)malloc(sizeof(struct SNode));
    //然后将item赋值给临时结点TmpCell，并插入到栈的头部
    TmpCell->data = item;

    TmpCell->Next = S->Next;
    S->Next = TmpCell;
}

//删除并返回堆栈S的栈顶元素
ElementType Pop(Stack S) {
    //弹出元素时，先判断边界条件，堆栈空不空,怎么判断为空即S->Next = NULL
    //定义一个临时变量
    struct SNode *FirstNode;
    ElementType TopElem;
    if(S->Next == NULL){
        printf("堆栈为空");
        return NULL;
    }else{
        //将栈顶元素赋值给定义的FirstNode;
        FirstNode = S->Next;
        //将头结点的指针往后移动一个
        S->Next = FirstNode->Next;
        TopElem = FirstNode->data;
        //释放掉FirstNode
        free(FirstNode);
        return TopElem;
    }
}

