#include "stdio.h"
#include "stdlib.h"
#include "queue.h"

/*
    切记野指针指向NULL
*/

Queue* initQueue()
{
    Queue *queue= (Queue*)malloc(sizeof(Queue));
    queue->len=0;
    queue->front=NULL;
    queue->rear=NULL;
    return queue;
}

void enQueue(Queue*q,int data)
{
    if (q->front==NULL)
    {
        QNode *node=(QNode*)malloc(sizeof(QNode));
        node->val=data;
        q->front=node;
        q->rear=node;
        q->len++;
    }
    else
    {
        QNode* node=(QNode*)malloc(sizeof(QNode));
        node->val=data;
        q->rear->next = node;
        q->len++;
        q->rear=node;


    }
        
}

int DeQueue(Queue*q)
{
    if (q->len!=0)
    {
        QNode* node=q->front;
         int data=node->val;
        q->len--;
        q->front=node->next;
        if (q->len==0)
        {
            q->rear==NULL;
        }
        free(node);
        return data;
        
    }
    else
    {
        return -1;
    }
    
    
}

int main()
{
    Queue *Q;
    Q=initQueue();
    enQueue(Q,1);
    enQueue(Q,2);
    printf("%d",DeQueue(Q));
    return 0;
}
