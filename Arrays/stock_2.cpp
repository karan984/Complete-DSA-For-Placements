#include<iostream>
using namespace std;
int main()
{
    int n, i, maxp, minp, ans=0;
    cin>>n;

    int prices[n];

    for(i=0; i<n; i++)
        cin>>prices[i];

    int sell[n], buy[n], pre[n], suff[n];
    //int pre[n];

    buy[n-1]=0;
    maxp=prices[n-1];

    for(i=n-2; i>=0; i--)
    {
        buy[i]=maxp-prices[i];
        maxp=max(maxp, prices[i]);
    }

    sell[0]=0;
    minp = prices[0];

    for(i=1; i<n; i++){
        sell[i]=prices[i]-minp;
        minp=min(minp, prices[i]);
    }

    pre[0]=sell[0];
    for(i=1; i<n; i++)
        pre[i]=max(pre[i-1], sell[i]);

    suff[n-1]=buy[n-1];

    for(i=n-2; i>=0; i--)
        suff[i]=max(suff[i+1], buy[i]);

    for(i=0; i<n-1; i++){
        ans=max(ans, pre[i]+suff[i+1]);
    }

    cout<<ans<<"\n";

}