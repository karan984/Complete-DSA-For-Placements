#include<iostream>
using namespace std;
int lcs(int n, int m, string s1, string s2, int dp[][51]){
    if(n==0 || m==0){
        return 0;
    }

    if(dp[n][m]!=-1)
        return dp[n][m];

    if(s1[n-1]==s2[m-1]){
        dp[n][m] =  1+lcs(n-1, m-1, s1, s2, dp);
    }else{
        dp[n][m] = max(lcs(n, m-1, s1, s2, dp), lcs(n-1, m, s1, s2, dp));
    }

    return dp[n][m];
}
int main()
{
    int n, m, i, j, ans;

    string s1, s2;
    cin>>s1>>s2;
    n=s1.size(); m=s2.size();

    int dp[n+1][51];

    for(i=0; i<=n; i++)
        for(j=0; j<=m; j++)
            dp[i][j]=-1;

    ans=lcs(n, m, s1, s2, dp);

    cout<<ans<<"\n";
}