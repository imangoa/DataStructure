#include"stdio.h"
#include"stdlib.h"
#include"queue.h"

#define MaxSize 10

typedef struct MGraph
{
    int vector[MaxSize];
    int arcs[MaxSize]{MaxSize};
    int vexnum;
    int arcnum;
}MGraph;

typedef struct ArcNode
{
    int adjvex;
    struct ArcNode *next
}ArcNode;

typedef struct VNode
{
    int data;
    ArcNode *first;
}VNode;


typedef struct ALGraph
{
    VNode vector[MaxSize];
    int vexnum,arcnum;
}ALGraph;

int visit[MaxSize];
int visited[MaxSize];
int FirstNeighbor(MGraph M,int x)
{

}

int NextNeighbor(MGraph M,int x,int y)
{

}
void visit(int v);
Queue *q;
void BFS(MGraph G,int v)
{
    visit(v);
    visit[v]=true;
    enQueue(q,v);
    while (!isEmpty(q))
    {
        DeQueue(q,v);
        for (w=FirstNeighbor(G,v) ;w>=0;w=NextNeighbor(G,v,w))
        {
            if (!visited[w])
            {
                visit(w);
                visit[w]=true;
                enQueue(q,w);
            }
            
        }
        
    }
    

}

void DFS(MGraph G,int v)
{
    visit(v);
    visited[v]
    for(w=FirstNeighbor(G,v),w>=0;w=NextNeighbor(G,v,w))
    {
        if (!visited(w))
        {
            DFS(G,w);
        }
        
    }
}


// floyd


