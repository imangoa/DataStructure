#define MaxSize 100
typedef struct stack
{
    int Data[MaxSize];
    int top;
}SeqStack,*Stack;

Stack InitStack();
int Push(Stack L,int e);
int pop(Stack L);
int traverse(Stack L);

