#include<iostream>
using namespace std;
int fun(int i, int j, int a[], int dp[][31]){
    if(dp[i][j]!=-1)
        return dp[i][j];

    if(i+1==j){
        dp[i][j]=0;
    }else{
        int k;
        int res=100000000;

        for(k=i+1; k<=j-1; k++)
        {
            res=min(res, fun(i, k, a, dp)+fun(k, j, a, dp)+a[i]*a[k]*a[j]);
        }

        dp[i][j]=res;
    }

    return dp[i][j];
}
int main()
{
    int n, i, j, k;
    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
        cin>>a[i];

    int dp[n][31];

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            dp[i][j]=-1;

    dp[0][n-1]=fun(0, n-1, a, dp);

    cout<<dp[0][n-1];
}