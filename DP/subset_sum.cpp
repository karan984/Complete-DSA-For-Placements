#include<iostream>
using namespace std;
bool subset_sum(int n, int sum, int arr[], int dp[][1001])
{
    if(sum<0)
        return false;

    
    if(sum==0)
        return true;

    

    if(n==0)
        return false;

    //bool p1 = subset_sum(n-1, sum-arr[n-1], arr);
    //bool p2 = subset_sum(n-1, sum, arr);

    //return p1||p2;
    if(dp[n][sum]!=-1)
        return dp[n][sum];

    dp[n][sum] = subset_sum(n-1, sum-arr[n-1], arr, dp) || subset_sum(n-1, sum, arr, dp);

    return dp[n][sum];
}
int main()
{
    int n, sum, i, j;
    bool ans;
    cin>>n>>sum;

    int a[n];
    int dp[n+1][1001];

    for(i=0; i<n; i++)
        cin>>a[i];

    for(i=0; i<=n; i++)
        for(j=0; j<=sum; j++)
            dp[i][j]=-1;

    ans = subset_sum(n, sum, a, dp);

    if(ans)
        cout<<"Subset exists\n";
    else
        cout<<"Subset doesn't exists\n";
}