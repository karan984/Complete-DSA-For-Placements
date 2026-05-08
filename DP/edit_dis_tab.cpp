#include<iostream>
using namespace std;
int main()
{
    string s1, s2;

    int n, m, i, j;

    cin>>s1>>s2;
    n=s1.size();
    m=s2.size();

    int dp[n+1][m+1];
    //dp[i][j], dp[n][m]

    //dp[i][0]=i, dp[0][i]

    dp[0][0]=0;
    for(i=1; i<=n; i++)
        dp[i][0]=0;

    for(i=1; i<=m; i++)
        dp[0][i]=0;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }else{
                int c1 = 1+dp[i-1][j];
                int c2 = 1+dp[i][j-1];
                int c3 = 1+dp[i-1][j-1];
                dp[i][j]=min(c1, min(c2, c3));
            }
        }
    }

    cout<<dp[n][m];
}