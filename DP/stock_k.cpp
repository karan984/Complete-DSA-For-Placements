#include<iostream>
using namespace std;
int fun(int i, int k, int s, int a[], int n, int dp[][31][2]){
    if(i==n)
        return 0;

    if(dp[i][k][s]!=-1)
        return dp[i][k][s];

    if(k==0)
    {
        dp[i][k][s]=0;
        return dp[i][k][s];
    }

    int p1 = fun(i+1, k, s, a, n, dp);
    int p2;

    if(s==0)
        p2=fun(i+1, k, 1-s, a, n, dp)-a[i];
    else
        p2=fun(i+1, k-1, 1-s, a, n, dp)+a[i];

    dp[i][k][s] = max(p1, p2);
    return dp[i][k][s];
    
}
int main()
{
    int n, i, k, j;
    cin>>n>>k;

    int a[n];
    int dp[n][31][2];

    for(i=0; i<n; i++)
    {
        for(j=0; j<=k; j++)
        {
            dp[i][j][0]=dp[i][j][1]=-1;
        }
    }

    for(i=0; i<n; i++)
        cin>>a[i];

    dp[0][k][0] = fun(0, k, 0, a, n, dp);

    cout<<dp[0][k][0];

}