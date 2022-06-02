#include"stdio.h"

void swap(int *a,int *b)
{
    int temp=*a;
    *b=*a;
    *a=temp;
}

void BuildMaxHeap(int A[],int len)
{
    for(int i = len/2;i>0;i--)
    {
        HeadAdjust(A,i,len);
    }
}

//下沉
void HeadAdjust(int A[],int k,int len)
{
    A[0]=A[k];
    for (int i = 2k; i <=len; i*=2)
    {
        if (i<len&&A[i]<A[i+1])
            i++;
        if(A[0]>=A[i])
            break;
        else{
            A[k]=A[i];
            k=i;
        }
        
    }
    A[k]=A[0];
}

void HeapSort(int A[],int len)
{
    BuildMaxHeap(A,len) ; //创建堆
    for (int i = len; i>1 ; i--)
    {
        swap(a[i],a[1]);
        HeadAdjust(a,1,i-1);
    }
    

}