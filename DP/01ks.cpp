#include<iostream>
using namespace std;
int fun(int n, int W, int wt[], int val[], int dp[][1001])
{
    if(n==0)
        return 0;

    //wt[n-1]=20, W=30, W=15
    if(dp[n][W]!=-1)
        return dp[n][W];

    if(wt[n-1]<=W){
        dp[n][W] = max(fun(n-1, W, wt, val, dp), 
            fun(n-1, W-wt[n-1], wt, val, dp)+val[n-1]);
    }else{
        dp[n][W] = fun(n-1, W, wt, val, dp);
    }

    return dp[n][W];
}
int main()
{
    int n, W, i, j, ans;

    cin>>n>>W;
    int wt[n], val[n];
    int dp[n+1][1001];

    for(i=0; i<=n; i++)
        for(j=0; j<=W; j++)
            dp[i][j]=-1;

    for(i=0; i<n; i++)
        cin>>wt[i];
    
    for(i=0; i<n; i++)
        cin>>val[i];

    dp[n][W] = fun(n, W, wt, val, dp);

    cout<<dp[n][W];

    //TC = O(n*W), AS = O(n*W)
}