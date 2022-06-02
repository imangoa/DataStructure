#include"stdio.h"

void swap(int* a, int* b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}


void HeadAdjust(int a[],int k,int len)
{
    a[0]=a[k];
    for(int i=2*k;i<=len;i*=2)
    {
        if (i<len&&a[i]<a[i+1])
        {
            i++;
        }
        if (a[0]>=a[i])
        {
            break;
        }
        else
        {
            a[k]=a[i];
            k=i;
        }
        a[k]=a[0];
        
        
    }
}
void BuildMaxHeap(int A[],int len)
{
    for (int i = len/2; i>0; i--)
    {
        HeadAdjust(A,i,len);
    }
       
}

void HeapSort(int a[], int len)
{
    BuildMaxHeap(a,len);
    for (int i = 0; i <len; i--)
    {
        swap(a[i],a[1]);
        HeadAdjust(a,1,i-1);
    }
    
}