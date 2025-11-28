#include<iostream>
using namespace std;
int main()
{
    int n, i, a, b, c;
    cin>>n;

    //int dp[n+1];

    //dp[1]=1;
    //dp[2]=2;

    //for(i=3; i<=n; i++)
        //dp[i]=dp[i-1]+dp[i-2];

    //cout<<dp[n]<<"\n";

    a=1;
    b=2;

    if(n==1)
        c=a;
    else if(n==2)
        c=b;

    for(i=3; i<=n; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }

    cout<<c<<"\n";
}