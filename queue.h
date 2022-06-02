typedef struct QNode
{
    int val;
    struct QNode* next;
}QNode;
typedef struct Queue
{
    QNode *front;
    QNode *rear;
    int len;
}Queue;

Queue* initQueue();
void* enQueue(Queue*q,int data);
int DeQueue(Queue*q);