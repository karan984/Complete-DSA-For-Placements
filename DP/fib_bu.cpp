#include<iostream>
using namespace std;
int main()
{
    int n, i;
    cin>>n;

    int dp[n+1];

    dp[0]=0;

    if(n>1)
        dp[1]=1;

    for(i=2; i<=n; i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }

    cout<<n<<" fibonacci number is "<<dp[n]<<"\n";
}