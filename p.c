#include<stdio.h>//用链表的方法实现孩子的树
#define Elemtype char
#define MAXTREE_SIZE 100
typedef struct CTNode{
    int data;
    struct CTNode* next; 
}CTNode;
typedef struct{
    Elemtype data;
    int parent;
    CTNode firstchild;
}CTBox;
typedef struct{
    CTBox nodes[MAXTREE_SIZE];
    int r;
    int n;
}TREE;