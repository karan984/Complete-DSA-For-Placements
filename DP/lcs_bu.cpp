#include<iostream>
using namespace std;
int main()
{
    int n, m, i, j, ans;

    string s1, s2;
    cin>>s1>>s2;
    n=s1.size(); m=s2.size();

    int dp[n+1][51];

    for(i=0; i<=n; i++)
        dp[i][0]=0;

    for(i=0; i<=m; i++)
        dp[0][i]=0;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }else{
                dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    ans=dp[n][m];
    cout<<ans<<"\n";
}