#include"stdio.h"
#include"stdlib.h"
#include"stack.h"

Stack InitStack()
{
    Stack s = (SeqStack *)malloc(sizeof(SeqStack));
    s->top = -1;
    return s;
}

int Push(Stack L,int e)
{
    if (L->top==MaxSize-1)
        return 0;
    L->Data[++L->top] = e;
    return e;
    
}

int pop(Stack L)
{
    if (L->top == -1)
        return 0;
    int val = L->Data[L->top--];
    printf("%d",val);
    return val;
}

int traverse(Stack L)
{
    for (int i = 0; i <=L->top; i++)
    {
        printf("%d",L->Data[i]);
    }
        
}

int main()
{
    Stack L;
    L=InitStack();
    Push(L,2);
    Push(L,3);
    pop(L);
    pop(L);
    return 0;
}