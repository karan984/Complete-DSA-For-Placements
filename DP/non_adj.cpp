#include<iostream>
using namespace std;
int fun(int n, int memo[], int a[])
{
    if(n<=0)
        return 0;

    if(memo[n]!=-1)
        return memo[n];

    memo[n]=max(fun(n-2, memo, a)+a[n-1], fun(n-1, memo, a));

    return memo[n];
}
int main()
{
    int n, i, j;

    cin>>n;

    int a[n];
    int dp[n+1];
    //int memo[n+1];

    for(i=0; i<n; i++)
        cin>>a[i];

    /*for(i=0; i<=n; i++)
        memo[i]=-1;

    memo[n]=fun(n, memo, a);

    cout<<memo[n];*/

    dp[0]=0;
    dp[1]=a[0];

    for(i=2; i<=n; i++)
        dp[i]=max(dp[i-2]+a[i-1], dp[i-1]);

    cout<<dp[n];
}