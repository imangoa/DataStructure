/*

使用（Q->rear===Q->front）牺牲一个空间来判断队列空

在队列结构体中添加一个len变量来判断长度

在每次添加时使用tag来判断上次是入队列还是进队列


*/

#include "stdio.h"
#include "stdlib.h"

#define MaxSize 50
#define true 1
#define false 0

typedef struct SqQueue
{
    int data[MaxSize];
    int front,rear;
}SqQueue;


void InitQueue(SqQueue* Q)
{
    Q->rear=Q->front=0;
}

int isEmpty(SqQueue *Q)
{
    if (Q->rear==Q->front)
        return true;
    else
        return false;
    
}

void EnQueue(SqQueue *Q,int data)
{
    if ((Q->rear+1)%MaxSize==Q->front)
        return false;
    Q->data[Q->rear]=data;
    Q->rear=(Q->rear+1)%MaxSize;
    
    
}

int DeQueue(SqQueue *Q)
{
    if (Q->rear==Q->front)
        return false;
    x=Q->data[Q->front];
    Q->front=(Q->front+1)%MaxSize;
    return true;
       
}