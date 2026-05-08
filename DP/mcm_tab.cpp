#include<iostream>
using namespace std;
int main()
{
    int n, i, j, k, l;
    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
        cin>>a[i];

    int dp[n][n];
    //dp[0][n-1]

    for(i=0; i<n-1; i++)
        dp[i][i+1]=0;

    /* incorrect approach
    for(i=0; i<n; i++)
    {
        for(j=i+2; j<n; j++)
        {
            //fun(i, j) = fun(i, k)+fun(k, j)+a[i]*a[k]*a[j]
            dp[i][j]=100000000;
            for(k=i+1; k<=j-1; k++){
                dp[i][j]=min(dp[i][j], dp[i][k]+dp[k][j]+a[i]*a[k]*a[j]);
            }
        }
    }*/

    for(l=2; l<=n-1; l++){
        for(i=0; i+l<n ;i++){
            j=i+l;
            dp[i][j]=100000000;
            for(k=i+1; k<=j-1; k++){
                dp[i][j]=min(dp[i][j], dp[i][k]+dp[k][j]+a[i]*a[k]*a[j]);
            }
        }
    }


    cout<<dp[0][n-1]<<"\n";
}