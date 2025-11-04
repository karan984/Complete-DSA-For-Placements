#include<iostream>
using namespace std;
int main()
{
    int n, sum, i, j;
    cin>>n>>sum;

    int a[n];
    int dp[n+1][1001];

    for(i=0; i<n; i++)
        cin>>a[i];

    for(i=1; i<=sum; i++)
        dp[0][i]=0;

    for(i=0; i<=n; i++)
        dp[i][0]=1;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=sum; j++)
        {
            //dp[i][j]
            //dp[10][50], dp[9][45], dp[9][50]
            if(a[i-1]<=j)
                dp[i][j]=dp[i-1][j-a[i-1]]||dp[i-1][j];
            else
                dp[i][j]=dp[i-1][j];

        }
    }

    

    if(dp[n][sum])
        cout<<"Subset exists\n";
    else
        cout<<"Subset doesn't exists\n";
}