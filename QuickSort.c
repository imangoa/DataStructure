#include"stdio.h"


int Partition(int A[],int low,int high)
{
    int pivot =A[low];
    while (low<high)
    {
        while(low<high&&A[high]>=piovt) --high;
        A[low]=A[high];
        while(low<high&&A[low]<=pivot) ++low;
        A[high]=A[low];
    }
    A[low]=pivot;
    return low;
    
}
void QuickSort(int A[],int low,int hight)
{
    if (low<high)
    {
        int pivot= Partition(A,low,hight);
        QuickSort(A,low,pivot-1);
        QuickSort(A,pivot+1,hight);
    }
    
}


void BubbleSort(int A[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int flag = false;
        for(int j=n-1;j>i;j--)
        {
            if (A[j-1]>A[j])
            {
                swap(A[j-1],A[j]);
                flag =true;
            }
            if (flag=false)
            {
                return ;
            }
            
            
        }
    }
    
}