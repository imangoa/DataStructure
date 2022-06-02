#include "stdio.h"

void Sort(int a[],int n)
{
    int j;
    for (int i = 2; i <= n; i++)
    {
        if (a[i]<a[i-1])
        {
            a[0]=a[i];
            for (j = i-1; j>a[0] ; j--)
            {
                a[j+1]=a[j];
            }
            a[j+1]=a[0];
        }
        
    }
    
}