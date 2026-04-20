#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct BiNode{
    char data;
    struct BiNode* lchild,* rchild;
    bool ltag,rtag;

}BiNode,*BiTree;//函数对指针操作使得能直接对数据修改，而不是对副本进行修改
void CreatBiTree (BiTree* t){
  char c;
  scanf(" %c",&c);
  if('#'==c){
    *t=NULL;
        return;
  }
  else{
    (*t)=(BiNode*)malloc(sizeof(BiNode));
    (*t)->data=c;
    (*t)->ltag=false;
    (*t)->rtag=false;
    CreatBiTree(&(*t)->lchild);
    CreatBiTree(&(*t)->rchild);//typedef，二级指针，
  }
}
BiTree pre=NULL;

void inordertraversing(BiTree t){
     if(!t)return;
     inordertraversing(t->lchild);
     if(!t->lchild){
        t->ltag=1;
        t->lchild=pre;
     }
     if(pre&&!pre->rchild){
        pre->rtag=1;
        pre->rchild=t;
     }//遗留了，最后一个节点的空指针访问问题，引发segmentationfault问题
     pre=t;
    inordertraversing(t->rchild);

}
void inorderTraverse(BiTree t){
    BiTree p=t;
    if(!p)return;
    while(p->lchild&&p->ltag==false){
        p=p->lchild;
    }
    //在处理了线索二叉树后只有最后一个节点被设置了，Pre-child=NULL;然后p会到哪里就是该停的地方
    while(p!=NULL){
        printf("%c",p->data);
        if(p->rtag==true)p=p->rchild;
        else{
            p=p->rchild;
            while(p&&p->ltag==false){
                p=p->lchild;                
            }
        }
    }

}
int main(void){
    int level=1;
    BiTree T=NULL;
    CreatBiTree(&T);
    inordertraversing(T);
    if(pre!=NULL){
        pre->rtag=1;
        pre->rchild=NULL;
    }
    inorderTraverse(T);
    return 0;
}