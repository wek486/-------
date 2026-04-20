#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100
#define elemtype int 
typedef struct quene{
   elemtype* base;
   int front;
   int rear;
}quene;
void initquene(quene* q){
  q->base=(elemtype*)malloc(MAXSIZE*sizeof(elemtype));
  if(q->base==NULL){
    printf("ÄÚ´æ·ÖÅäÊ§°Ü");
    exit(0);
  }
  q->front=q->rear=0;
}
void enquene(quene*q ,elemtype x){
if(((q->rear+1)%MAXSIZE)==q->front){
  printf("man\n");
  exit(0);
}
q->base[q->rear]=x;
q->rear=(q->rear+1)%MAXSIZE;
}
void dequene(quene*q ,elemtype* x){
  if(q->front==q->rear){
    printf("quene is empty\n");
    exit(0);
  }
*x=q->base[q->front];
q->front=(q->front+1)%MAXSIZE;

}
