#include"stdio.h"

void sort(int a[],int n)
{
    int min;
    for (int i = 0; i < n-1; i++)
    {
        min=i;
        for (int j = i; j < n; j++)
            if (a[min]>a[j])
                min=j;
        if (min!=i)
        {
            swap(a[i],a[min]);
        }
        
        
    }
    
}