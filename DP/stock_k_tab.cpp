#include<iostream>
using namespace std;
int main()
{
    int n, k, i, j;

    cin>>n>>k;
    int a[n];

    for(i=0; i<n; i++){
        cin>>a[i];
    }

    int dp[n][k+1][2];
    //dp[i][j][0], dp[i][j][1], dp[0][k][0]

    for(i=0; i<n; i++){
        dp[i][0][0]=dp[i][0][1]=0;
    }

    for(i=1; i<=k; i++){
        dp[n-1][i][0]=0;//max(0, -a[n-1])
        dp[n-1][i][1]=a[n-1];//max(0, a[n-1])
    }

    for(i=n-2; i>=0; i--)
    {
        for(j=1; j<=k; j++)
        {
            dp[i][j][0]=max(dp[i+1][j][0], dp[i+1][j][1]-a[i]);
            dp[i][j][1]=max(dp[i+1][j][1], dp[i+1][j-1][0]+a[i]);
        }
    }

    cout<<dp[0][k][0];
    
}