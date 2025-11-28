#include<iostream>
using namespace std;
int fun(int n, int dp[])
{
    if(dp[n]!=-1)
        return dp[n];

    if(n==1 || n==2){
        dp[n]=n;
    }else{
        dp[n]=fun(n-1, dp)+fun(n-2, dp);
    }

    return dp[n];
}
int main()
{
    int n, i;
    cin>>n;

    int dp[n+1];

    for(i=0; i<=n; i++)
        dp[i]=-1;

    dp[n]=fun(n, dp);

    cout<<dp[n]<<"\n";
}