#include<iostream>
using namespace std;
int fun(int n, int m, string s1, string s2, int dp[][31]){
    if(dp[n][m]!=-1)
        return dp[n][m];

    //dp[0][m]=m, dp[n][0]=n

    if(n==0 || m==0){
        dp[n][m]=n+m;
    }else{
        if(s1[n-1]==s2[m-1])
            dp[n][m]=fun(n-1, m-1, s1, s2, dp);
        else{
            int c1 = 1+fun(n-1, m, s1, s2, dp);
            // cats, cats
            int c2 = 1+fun(n, m-1, s1, s2, dp);
            int c3 = 1+fun(n-1, m-1, s1, s2, dp);
            dp[n][m]=min(c1, min(c2, c3));
        }
    }
    return dp[n][m];
}
int main()
{
    string s1, s2;
    int n, m, i, j;

    cin>>s1>>s2;

    n=s1.size(); m=s2.size();

    int dp[n+1][31];

    for(i=0; i<=n; i++)
        for(j=0; j<=m; j++)
            dp[i][j]=-1;

    //dp[n][m]

    dp[n][m]=fun(n, m, s1, s2, dp);

    cout<<dp[n][m]<<"\n";

    
}