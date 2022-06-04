#include"iostream"

struct ListNode
{
    int val;
    ListNode *next;
}Link,*head;

head init()
{
    head L=(head)malloc(sizeof(ListNode));
    Link * p;
    p=head;
    for (int i = 0; i < 5; i++)
    {
        Link*a=(Link*)malloc(sizeof(ListNode));
        a->val=i;
        a->next=NULL;
        p->next=a;
        p=a;
        
    }
    return head;
}

int main()
{

}
