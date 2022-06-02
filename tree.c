#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;;
    struct node* left;
    struct node* right;
}Node,*BiTree;


typedef struct ThreadNode
{
    int data;
    struct ThreadNode *lchild,*rchild;
    int ltag,rtag;
}ThreadNode,*ThreadTree;


void visit();
void InitStack(BiTree T);
int IsEmpty(BiTree T);
int push(BiTree T,BiTree K);
int pop(BiTree T,BiTree k);
void InitQueue(BiTree T);
void Enqueu(BiTree Q,BiTree T);
void DeQueue(BiTree Q,BiTree T);



void PreOrder(BiTree T)
{
    if (T!=NULL)
    {
        visit(T);
        Preorder(T->left);
        Preorder(T->right);
    }
    
}
void InOrder(BiTree T)
{
    if (T!=NULL)
    {
        PreOrder(T->left);
        visit(T);
        PreOrder(T->right);
    }
    
}
void PostOrder(BiTree T)
{
    if (T!=NULL)
    {
        PreOrder(T->left);
        PreOrder(T->right);
        visit(T);
    }
    
}

void InOrder2(BiTree T)
{
    InitStack(S);
    BiTree p=T;
    while (p||!IsEmpty(S))
    {
        if(p){
            Push(S,p);
        }
        else
        {
            Pop(S,p);visit(p);
            p=p->right;
        }
        
    }
    
}

void PreOrder(BiTree T)
{
    InitStack(S);
    BiTree p=T;
    while (p||IsEmpty(S))
    {
        if (P)
        {
            visit(p);
            push(S,P);
        }
        else
        {
            pop(S,P);
            p=p->right
        }
        
        
    }
    
}


void LevelOrder(BiTree T)
{
    InitQueue(Q)  ;
    BiTree p;
    Enqueu(Q,T);
    while (!IsEmpty(Q))
    {
        DeQueue(Q,p);
        visit(p);
        if (p->left!=NULL)
        {
            Enqueu(p->left);
        }
        else
        {
            Enqueu(p->right);
        }
        
        
    }
    
}

void InThread(ThreadTree p,ThreadTree pre)
{
    if (p!=NULL)
    {
        InThread(p->lchild,pre);
        if (p->lchild==NUll)
        {
            p->lchild=pre;
            p->ltag=1;
        }
        if (pre!==NULL&&pre->rchild==NULL)
        {
            pre->rchild=p;
            pre->rtag=1;
        }
        pre=p;
        InThread(p->rchild,pre);
        
    }
    
}

void CreateINthread(ThreadTree T)
{
    ThreadTree pre=NULL;
    if (T!=NULL)
    {
        InThread(T,pre);
        pre->rchild=NULL;
        pre->rtag=1
    }
    
}

