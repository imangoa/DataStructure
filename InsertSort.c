#include "stdio.h"

int InsertSort(int A[],int n)
{
    int i,j;
    for (i = 2; i <=n; i++)
    {
        if (A[i]<A[i-1])
        {
            A[0]=A[i];
            for(j=i-1;A[0]<A[j];j--)
                A[j+1]=A[j];
            A[j+1]=A[0];
        }
        
    }
    
}

// //数组长度n+1
// int InsertSort(int A[],int n)
// {
//     int i,j;
//     // 使用哨兵
//     for ( i = 2; i <=n ; i++)
//     {
//         if (A[i]<A[i-1])
//         {
//             A[0]=A[i];
//             for ( j = i-1; A[0]<A[j]; --j)
//                 A[j+1]=A[j];
//             A[j+1]=A[0];
            
//         }
        
//     }
    
// }

// int InsertSort(int A[],int n)
// {
//     int i,j;
//     for (int i = 2; i <=n; i++)
//     {
//         if (A[i]<A[i-1])
//         {
        
//             A[0]=A[i];
//             for (int j=i-1;A[0]<A[j];j--)
//                 A[j+1]=A[j];
//             A[j+1]=A[0];
//         }
        
//     }
    
// }


int main()
{
    int a[]={0,1,3,5,3,6,2,6,22};
    InsertSort(a,8);
    return 0;

}