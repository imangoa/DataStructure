#include"stdio.h"
#include "stack.h"

int reserve[100]={};

// 递归
int climbStairs(int n)
{
    if (n==1)
    {
        return 1;
    }
    else if(n==2)
    {
        return 2;
    }

    return climbStairs(n-1) +climbStairs(n-2);
}

// 递归剪枝
int climbStair(int n)
{
    if (n==1)
    {
        return 1;
    }
    else if (n==2)
    {
        return 2;
    }
    if (reserve[n])
    {
        return reserve[n];
    }
    reserve[n]=climbStair(n-1)+climbStair(n-2);
    return reserve[n];
    
}

int climbStair2(int n)
{
    if (n<=1)
    {
        return 1;
    }
    int dp[100]={1,2};
    for (int i = 2; i < n; i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n-1];
    
    
}


int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",climbStair2(n));
    return 0;
}